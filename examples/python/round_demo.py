#!/usr/bin/env python3
import time
import rclpy
import math
import sys
import os
sys.path.append(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
import threading
import numpy as np
import toppra as ta
import argparse
import toppra.constraint as constraint
import toppra.algorithm as algo
from scipy.spatial.transform import Rotation as R
from scipy.spatial.transform import Slerp
from rclpy.node import Node
from sensor_msgs.msg import JointState
from geometry_msgs.msg import PoseStamped, Pose, Point, Quaternion
from controller_manager import ControllerSwitcherService


class ArmStateMonitor(Node):
    def __init__(self):
        super().__init__('arm_state_monitor')

        self._joint_state_lock = threading.Lock()
        self._end_pose_lock = threading.Lock()
        self._joint_state = None
        self._end_pose = None
        self._joint_state_received = False
        self._end_pose_received = False

        # subscribe joint state
        self.joint_sub = self.create_subscription(
            JointState,
            '/joint_states',
            self.joint_state_callback,
            10
        )

        # subscribe end pose
        self.pose_sub = self.create_subscription(
            PoseStamped,
            '/arm/end_pose',
            self.end_pose_callback,
            10
        )

        self.get_logger().info('arm state monitor node started')

    def joint_state_callback(self, msg):
        """process joint state message"""
        with self._joint_state_lock:
            self._joint_state = msg
            self._joint_state_received = True


    def end_pose_callback(self, msg):
        """process end pose message"""
        with self._end_pose_lock:
            self._end_pose = msg
            self._end_pose_received = True

    def get_joint_state(self, timeout=5.0):
        """get current joint state, wait until message received or timeout"""
        start_time = time.time()
        while time.time() - start_time < timeout:
            with self._joint_state_lock:
                if self._joint_state_received and self._joint_state is not None:
                    return self._joint_state
            # sleep for a short time, let the background thread process the message
            time.sleep(0.05)
        raise TimeoutError("wait for joint state message timeout")

    def get_end_pose_msg(self, timeout=5.0):
        """get current end pose message, wait until message received or timeout"""
        start_time = time.time()
        while time.time() - start_time < timeout:
            with self._end_pose_lock:
                if self._end_pose_received and self._end_pose is not None:
                    return self._end_pose
            time.sleep(0.05)
        raise TimeoutError("wait for end pose message timeout")


    @property
    def arm_joint_position(self):
        """get current arm joint position (numpy array, including arm_joint1-6, excluding gripper)"""
        with self._joint_state_lock:
            if self._joint_state is None:
                return None
            # filter by joint name, only get arm_joint1-6
            positions = []
            for i, name in enumerate(self._joint_state.name):
                if name.startswith('arm_joint') and name != 'arm_gripper':
                    positions.append(self._joint_state.position[i])
            if len(positions) == 6:
                return np.array(positions)
            # if filter by name failed, try filter by index (assume gripper is in the first position)
            if len(self._joint_state.position) == 7:
                return np.array(self._joint_state.position[1:7])
            # if all failed, return all positions (backward compatible)
            return np.array(self._joint_state.position)

    @property
    def end_pose(self):
        """get current end pose (Pose object)"""
        with self._end_pose_lock:
            if self._end_pose is None:
                return None
            return self._end_pose.pose



class ArmJointControl(Node):
    def __init__(self, state_monitor: ArmStateMonitor, controller_switch: ControllerSwitcherService):
        super().__init__('arm_joint_control')
        self.state_monitor = state_monitor
        self.controller_switch = controller_switch
        self.end_pose_cmd_pub = self.create_publisher(
            PoseStamped,  
            '/cart_pose_controller/pose_cmd',
            10
        )
        self.get_logger().info('arm joint control node started')

    def wait_for_state(self, timeout=5.0):
        """wait for state ready"""
        try:
            self.state_monitor.get_joint_state(timeout)
            self.state_monitor.get_end_pose_msg(timeout)
            self.get_logger().info('state ready')
            return True
        except TimeoutError as e:
            self.get_logger().error(f'state wait failed: {e}')
            return False

    def publish_end_pose(self, pose: Pose):

        pose_stamped = PoseStamped()
        pose_stamped.header.frame_id = 'world'
        pose_stamped.header.stamp = self.get_clock().now().to_msg()
        pose_stamped.pose = pose

        self.end_pose_cmd_pub.publish(pose_stamped)

    def move_arm_endpose_toppra(self, target_pose , v_max=0.8, a_max=0.2):

        if not self.controller_switch.is_controller_active("cart_pose_controller"):
            self.get_logger().error("cartesian control mode is not active")
            return False
        time.sleep(1)

        start_pose_stamped = self.state_monitor.get_end_pose_msg(timeout=0.1)
        print(f"start_pose: {start_pose_stamped}")

        start_pose = start_pose_stamped.pose

        p_start = np.array([start_pose.position.x, start_pose.position.y, start_pose.position.z])
        p_end = np.array([target_pose.position.x, target_pose.position.y, target_pose.position.z])

        q_start = [float(start_pose.orientation.x), float(start_pose.orientation.y), 
                float(start_pose.orientation.z), float(start_pose.orientation.w)]
        q_end = [float(target_pose.orientation.x), float(target_pose.orientation.y), 
                float(target_pose.orientation.z), float(target_pose.orientation.w)]

        dist = np.linalg.norm(p_end - p_start)
        path_len = dist if dist > 1e-6 else 1.0

        path = ta.SplineInterpolator([0, 1], np.array([[0], [path_len]]))
        pc_vel = constraint.JointVelocityConstraint([v_max])
        pc_acc = constraint.JointAccelerationConstraint([a_max])

        instance = algo.TOPPRA([pc_vel, pc_acc], path)
        traj = instance.compute_trajectory(0, 0)

        if traj is None:
            print("TOPP-RA planning failed")
            return

        key_rots = R.from_quat([q_start, q_end])
        slerp_func = Slerp([0, traj.duration], key_rots)

        duration = traj.duration
        interval = 0.005  # 200Hz
        ts = np.arange(0, duration, interval)

        self.get_logger().info(f"start executing end pose trajectory, expected duration: {duration:.2f}s, control frequency: {1/interval:.0f}Hz")


        for i, t in enumerate(ts):
            start_time = time.perf_counter()
            s_t = float(traj(t)[0])  
            path_len_float = float(path_len)  
            alpha = float(np.clip(s_t / path_len_float, 0, 1))  

            pose = Pose()
            pose.position = Point()      
            pose.orientation = Quaternion() 

            p_start_0 = float(p_start[0])
            p_start_1 = float(p_start[1])
            p_start_2 = float(p_start[2])
            p_end_0 = float(p_end[0])
            p_end_1 = float(p_end[1])
            p_end_2 = float(p_end[2])

            pose.position.x = p_start_0 + (p_end_0 - p_start_0) * alpha
            pose.position.y = p_start_1 + (p_end_1 - p_start_1) * alpha
            pose.position.z = p_start_2 + (p_end_2 - p_start_2) * alpha

            curr_q = slerp_func(t).as_quat()
            pose.orientation.x = float(curr_q[0])
            pose.orientation.y = float(curr_q[1])
            pose.orientation.z = float(curr_q[2])
            pose.orientation.w = float(curr_q[3])

            self.publish_end_pose(pose)

            elapsed_time = time.perf_counter() - start_time
            sleep_time = interval - elapsed_time
            if sleep_time > 0:
                time.sleep(sleep_time)
            elif sleep_time < -0.01:  
                if i % 100 == 0:  
                    self.get_logger().warn(f"end pose trajectory execution delay: {-sleep_time*1000:.2f}ms")

        final_pose = Pose()
        final_pose.position = Point(
            x=float(target_pose.position.x),
            y=float(target_pose.position.y),
            z=float(target_pose.position.z)
        )
        final_pose.orientation = Quaternion(
            x=float(target_pose.orientation.x),
            y=float(target_pose.orientation.y),
            z=float(target_pose.orientation.z),
            w=float(target_pose.orientation.w)
        )
        self.publish_end_pose(final_pose)  
        time.sleep(0.1)

        current_positions = self.state_monitor.arm_joint_position
        if current_positions is not None:
            self.get_logger().info(f"movement completed, current joint angles (radians): {current_positions}")

        self.get_logger().info("end pose movement completed")
        return True


    def move_to_zero_pose(self):
        target_pose = Pose()
        target_pose.position = Point(x=0.0, y=0.0, z=0.01)
        target_pose.orientation = Quaternion(x=0.0, y=0.0, z=0.0, w=1.0)
        result = self.move_arm_endpose_toppra(target_pose)
        if result:
            print("move to zero pose success")
        else:
            print("move to zero pose failed")
            return False
        return result


    def move_arm_circle(self, center_p, radius, v_max=0.8, a_max=1.0):
        """
        center_p: [x, y, z] circle center coordinates
        radius: radius
        """
        if not self.controller_switch.is_controller_active("cart_pose_controller"):
            self.get_logger().error("cartesian control mode is not active")
            return False
        time.sleep(1)

        start_pose_stamped = self.state_monitor.get_end_pose_msg(timeout=0.1)
        start_pose = start_pose_stamped.pose
        q_const = start_pose.orientation

        circumference = 2 * math.pi * radius

        path = ta.SplineInterpolator([0, 1], np.array([[0], [circumference]]))
        pc_vel = constraint.JointVelocityConstraint([v_max])
        pc_acc = constraint.JointAccelerationConstraint([a_max])
        instance = algo.TOPPRA([pc_vel, pc_acc], path)
        traj = instance.compute_trajectory(0, 0)

        if traj is None: return

        duration = traj.duration
        interval = 0.005 
        ts = np.arange(0, duration, interval)

        print(f"executing circle movement, radius: {radius}m, expected duration: {duration:.2f}s")

        for t in ts:
            s_t = traj(t)[0]
            theta = s_t / radius 

            pose = Pose()
            pose.orientation = q_const
            pose.position = Point()

            pose.position.x = center_p[0] + radius * math.cos(theta)
            pose.position.y = center_p[1] 
            pose.position.z = center_p[2] + radius * math.sin(theta)

            self.publish_end_pose(pose)
            time.sleep(interval)

        print("circle movement completed")
        return


def main(times=3, args=None):

    rclpy.init(args=args)

    arm_state_monitor = ArmStateMonitor()
    controller_switch = ControllerSwitcherService()
    arm_control = ArmJointControl(arm_state_monitor, controller_switch)

    executor = rclpy.executors.SingleThreadedExecutor()
    executor.add_node(arm_state_monitor)
    executor.add_node(controller_switch.node)
    stop_spinning = threading.Event()

    def spin_thread():
        while rclpy.ok() and not stop_spinning.is_set():
            try:
                executor.spin_once(timeout_sec=0.1)
            except Exception:
                break

    spin_thread_obj = threading.Thread(target=spin_thread, daemon=True)
    spin_thread_obj.start()


    try:
        if not arm_control.wait_for_state(timeout=5.0):
            print("state wait failed")
            return
        if not controller_switch.is_controller_active("cart_pose_controller"):
            print("cartesian control mode is not active")
            if not controller_switch.switch_to_cartesian_control():
                print("switch to cartesian control mode failed")
                return
            print("switch to cartesian control mode success")
        time.sleep(1)
        arm_control.move_to_zero_pose()
        time.sleep(2)
        circle_center = [0.0, 0.0, 0.2]
        r = 0.1
        start_point = Pose()
        start_point.position = Point(x=circle_center[0] + r, y=circle_center[1], z=circle_center[2])
        start_point.orientation = Quaternion(x=0.0, y=0.0, z=0.0, w=1.0)
        result = arm_control.move_arm_endpose_toppra(start_point)
        if result:
            print("move to start point success")
        else:
            print("move to start point failed")
            return
        time.sleep(1)
        print("start to move circle")
        for i in range(times):
            print(f"move circle {i+1} times")
            arm_control.move_arm_circle(circle_center, r)

        time.sleep(2)
        print("return to zero pose")
        arm_control.move_to_zero_pose()

    finally:
        stop_spinning.set()
        spin_thread_obj.join(timeout=1.0)
        executor.remove_node(arm_state_monitor)
        executor.remove_node(controller_switch.node)
        executor.remove_node(arm_control)
        arm_state_monitor.destroy_node()
        controller_switch.destroy()
        arm_control.destroy_node()
        rclpy.shutdown()
        print("nodes destroyed")
        print("program exited")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description='Move circle demo')
    parser.add_argument('--times', type=int, default=3, help='number of times to move circle')
    args = parser.parse_args()
    if args.times < 1:
        print("error: times must be greater than 0")
        exit(1)
    main(args.times)