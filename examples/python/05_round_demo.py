#!/usr/bin/env python3
import time
import rclpy
import math
import threading
import subprocess
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


class ArmStateMonitor(Node):
    def __init__(self):
        super().__init__('arm_state_monitor')
        
        # 状态变量（线程安全）
        self._lock = threading.Lock()
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
        with self._lock:
            self._joint_state = msg
            self._joint_state_received = True
        

    
    def end_pose_callback(self, msg):
        """process end pose message"""
        with self._lock:
            self._end_pose = msg
            self._end_pose_received = True
    
    def get_joint_state(self, timeout=5.0):
        """get current joint state, wait until message received or timeout"""
        start_time = time.time()
        while time.time() - start_time < timeout:
            with self._lock:
                if self._joint_state_received and self._joint_state is not None:
                    return self._joint_state
            # sleep for a short time, let the background thread process the message
            time.sleep(0.05)
        raise TimeoutError("wait for joint state message timeout")
    
    def get_end_pose_msg(self, timeout=5.0):
        """get current end pose message, wait until message received or timeout"""
        start_time = time.time()
        while time.time() - start_time < timeout:
            with self._lock:
                if self._end_pose_received and self._end_pose is not None:
                    return self._end_pose
            time.sleep(0.05)
        raise TimeoutError("wait for end pose message timeout")
    
    @property
    def joint_position(self):
        """get current joint position (numpy array, including all joints)"""
        with self._lock:
            if self._joint_state is None:
                return None
            return np.array(self._joint_state.position)
    
    @property
    def arm_joint_position(self):
        """get current arm joint position (numpy array, including arm_joint1-6, excluding gripper)"""
        with self._lock:
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
        with self._lock:
            if self._end_pose is None:
                return None
            return self._end_pose.pose



class ArmJointControl(Node):
    def __init__(self, state_monitor: ArmStateMonitor):
        super().__init__('arm_joint_control')
        self.state_monitor = state_monitor
        
        self.end_pose_cmd_pub = self.create_publisher(
            PoseStamped,  
            '/cart_pose_controller/pose_cmd',
            10
        )
        self.get_logger().info('arm joint control node started')
    
    def switch_controller(self, controller_name: str, timeout=5.0):
        """switch to a specific controller, deactivating conflicting controllers"""
        # Define conflicting controllers - these all use the same joint interfaces
        conflict_controllers = ["joint_position_controller", "zero_force_dragging_controller", "cart_pose_controller"]
        
        # check current state
        current_state = self.get_controller_state(controller_name)
        if current_state:
            self.get_logger().info(f"controller '{controller_name}' is already active")
            return True
        
        # Step 1: Deactivate conflicting controllers first (excluding the target controller)
        deactivate_list = []
        for conflict_ctrl in conflict_controllers:
            # Don't deactivate the controller we're trying to activate
            if conflict_ctrl != controller_name and self.get_controller_state(conflict_ctrl):
                deactivate_list.append(conflict_ctrl)
        
        if deactivate_list:
            self.get_logger().info(f"deactivate conflicting controllers: {deactivate_list}")
            deactivate_cmd = ['ros2', 'control', 'switch_controllers']
            for ctrl in deactivate_list:
                deactivate_cmd.extend(['--deactivate', ctrl])
            deactivate_cmd.append('--strict')
            
            deactivate_result = subprocess.run(deactivate_cmd, capture_output=True, text=True, check=False)
            if deactivate_result.returncode != 0:
                self.get_logger().warn(f"deactivate conflicting controllers warning: {deactivate_result.stderr}")
            
            # Wait for resource release
            time.sleep(1.5)
        
        # Step 2: Activate the target controller
        self.get_logger().info(f"activate controller '{controller_name}'")
        activate_cmd = ['ros2', 'control', 'switch_controllers', 
                        '--activate', controller_name,
                        '--activate-asap', '--strict']
        
        result = subprocess.run(activate_cmd, capture_output=True, text=True, check=False)
        
        if result.stdout:
            self.get_logger().info(f"activate output: {result.stdout}")
        if result.stderr and result.returncode != 0:
            self.get_logger().error(f"activate error: {result.stderr}")
        
        # Wait for switch to complete
        time.sleep(2)
        
        # Verify the switch
        if self.get_controller_state(controller_name):
            self.get_logger().info(f"switch to '{controller_name}' control mode success")
            return True
        else:
            self.get_logger().error(f"switch to '{controller_name}' control mode failed")
            return False

    def get_controller_state(self, controller_name: str):
        """Get the state of a specific controller"""
        import re
        result = subprocess.run(['ros2', 'control', 'list_controllers'], capture_output=True, text=True, check=False)
        if result.returncode == 0:
            # Parse output, handling multiple spaces and ANSI escape sequences
            all_output = result.stdout + result.stderr
            lines = all_output.strip().split('\n')
            
            for line in lines:
                line = line.strip()
                # Skip empty lines and log lines
                if not line or re.match(r'^\[.*?\]\s*\[', line):
                    continue
                # Skip header lines
                if re.search(r'\b(name|type|state)\b', line, re.IGNORECASE) and len(line) < 50:
                    continue
                
                # Parse controller info: split by multiple spaces
                parts = re.split(r'\s{2,}', line)
                if len(parts) < 3:
                    # Try single space split
                    parts = line.split()
                
                if len(parts) >= 3:
                    name = parts[0].strip()
                    # Remove ANSI escape sequences
                    name = re.sub(r'\x1b\[[0-9;]*m|\033\[[0-9;]*m', '', name)
                    
                    if name == controller_name:
                        state = parts[2].strip()
                        # Remove ANSI escape sequences
                        state = re.sub(r'\x1b\[[0-9;]*m|\033\[[0-9;]*m', '', state)
                        self.get_logger().info(f"controller '{controller_name}' state: {state}")
                        return state == 'active'
            
            self.get_logger().warn(f"controller '{controller_name}' not found")
            return False
        else:
            self.get_logger().error("get current control mode failed")
            return False

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

    def move_arm_endpose_toppra(self, target_pose , v_max=0.8, a_max=0.3):
        # 1. Get current real pose as the absolute starting point (确保获取最新状态)
        start_pose_stamped = self.state_monitor.get_end_pose_msg(timeout=0.1)
        print(f"start_pose: {start_pose_stamped}")
        
        # Extract Pose from PoseStamped
        start_pose = start_pose_stamped.pose
        
        p_start = np.array([start_pose.position.x, start_pose.position.y, start_pose.position.z])
        p_end = np.array([target_pose.position.x, target_pose.position.y, target_pose.position.z])
        
        # ensure quaternion values are Python float type
        q_start = [float(start_pose.orientation.x), float(start_pose.orientation.y), 
                float(start_pose.orientation.z), float(start_pose.orientation.w)]
        q_end = [float(target_pose.orientation.x), float(target_pose.orientation.y), 
                float(target_pose.orientation.z), float(target_pose.orientation.w)]

        # 2. TOPP-RA Trajectory Planning
        dist = np.linalg.norm(p_end - p_start)
        path_len = dist if dist > 1e-6 else 1.0
        
        # Establish a 1D geometric path: moving from 0 to path_len
        path = ta.SplineInterpolator([0, 1], np.array([[0], [path_len]]))
        pc_vel = constraint.JointVelocityConstraint([v_max])
        pc_acc = constraint.JointAccelerationConstraint([a_max])
        
        instance = algo.TOPPRA([pc_vel, pc_acc], path)
        traj = instance.compute_trajectory(0, 0)
        
        if traj is None:
            print("TOPP-RA planning failed")
            return

        # 3. Prepare Orientation Interpolator (SLERP)
        # SLERP is based on the time axis [0, duration]
        key_rots = R.from_quat([q_start, q_end])
        slerp_func = Slerp([0, traj.duration], key_rots)

        # 4. Execute Movement
        duration = traj.duration
        interval = 0.005  # 200Hz
        ts = np.arange(0, duration, interval)
        
        self.get_logger().info(f"start executing end pose trajectory, expected duration: {duration:.2f}s, control frequency: {1/interval:.0f}Hz")
        
        start_time = time.perf_counter()

        for i, t in enumerate(ts):
            # 1. Get the planned position s_t for the current time point (0 <= s_t <= path_len)
            s_t = float(traj(t)[0])  # Ensure Python float type
            
            # 2. Calculate nonlinear alpha ratio (this coefficient satisfies smooth accel/decel)
            # Even though the path is a straight line, the movement speed is now governed by TOPP-RA
            path_len_float = float(path_len)  # Ensure Python float type
            alpha = float(np.clip(s_t / path_len_float, 0, 1))  # Ensure Python float type

            pose = Pose()
            pose.position = Point()      
            pose.orientation = Quaternion() 
            
            # --- Position Interpolation: alpha now follows the velocity curve ---
            # Ensure conversion to Python float type (required by ROS messages)
            # Extract values and convert to float to avoid numpy type issues
            p_start_0 = float(p_start[0])
            p_start_1 = float(p_start[1])
            p_start_2 = float(p_start[2])
            p_end_0 = float(p_end[0])
            p_end_1 = float(p_end[1])
            p_end_2 = float(p_end[2])
            
            pose.position.x = p_start_0 + (p_end_0 - p_start_0) * alpha
            pose.position.y = p_start_1 + (p_end_1 - p_start_1) * alpha
            pose.position.z = p_start_2 + (p_end_2 - p_start_2) * alpha

            # --- Orientation Interpolation (SLERP) ---
            curr_q = slerp_func(t).as_quat()
            # Ensure conversion to Python float type (required by ROS messages)
            pose.orientation.x = float(curr_q[0])
            pose.orientation.y = float(curr_q[1])
            pose.orientation.z = float(curr_q[2])
            pose.orientation.w = float(curr_q[3])

            # Send target command
            self.publish_end_pose(pose)
            
            # 精确时间控制
            expected_time = i * interval
            elapsed_time = time.perf_counter() - start_time
            sleep_time = expected_time - elapsed_time
            if sleep_time > 0:
                time.sleep(sleep_time)
            elif sleep_time < -0.01:  # 延迟超过10ms时记录警告
                if i % 100 == 0:  # 每100个点记录一次
                    self.get_logger().warn(f"end pose trajectory execution delay: {-sleep_time*1000:.2f}ms")
            
            # periodically spin to update state (every 50 points, about 10Hz)
            if i % 50 == 0:
                rclpy.spin_once(self.state_monitor, timeout_sec=0.001)

        # 5. Final precise alignment to target pose
        # Create a new Pose object with float values to ensure type safety
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
        self.publish_end_pose(final_pose)  # Ensure precise alignment with the endpoint
        time.sleep(0.1)
        
        # Read and print joint angles
        rclpy.spin_once(self.state_monitor, timeout_sec=0.1)
        current_positions = self.state_monitor.joint_position
        if current_positions is not None:
            self.get_logger().info(f"movement completed, current joint angles (radians): {current_positions}")

        self.get_logger().info("end pose movement completed")
        return True


    def move_to_zero_pose(self):
        target_pose = Pose()
        target_pose.position = Point(x=0.0, y=0.0, z=0.010)
        target_pose.orientation = Quaternion(x=0.0, y=0.0, z=0.0, w=1.0)
        result = self.move_arm_endpose_toppra(target_pose)
        if result:
            print("move to zero pose success")
        else:
            print("move to zero pose failed")
            return False
        return result


    def move_arm_circle(self, center_p, radius, v_max=0.8, a_max=0.3):
        """
        center_p: [x, y, z] circle center coordinates
        radius: radius
        """
    
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
        


def main(times=3, args=None):
    
    rclpy.init(args=args)

    arm_state_monitor = ArmStateMonitor()
    arm_control = ArmJointControl(arm_state_monitor)

    executor = rclpy.executors.SingleThreadedExecutor()
    executor.add_node(arm_state_monitor)

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
        
        if not arm_control.switch_controller('cart_pose_controller'):
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
        for i in range(times-1):
            print(f"move circle {i+1} times")
            arm_control.move_arm_circle(circle_center, r)
        print("circle movement completed")
    
    finally:
        stop_spinning.set()
        spin_thread_obj.join(timeout=1.0)
        executor.remove_node(arm_state_monitor)
        executor.remove_node(arm_control)
        arm_state_monitor.destroy_node()
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