#!/usr/bin/env python3
import time
import rclpy
import threading
import subprocess
import numpy as np
import toppra as ta
import toppra.constraint as constraint
import toppra.algorithm as algo
from scipy.spatial.transform import Rotation as R
from scipy.spatial.transform import Slerp
from rclpy.node import Node
from sensor_msgs.msg import JointState
from geometry_msgs.msg import PoseStamped, Pose, Point, Quaternion
from std_msgs.msg import Float64MultiArray


class ArmStateMonitor(Node):
    def __init__(self):
        super().__init__('arm_state_monitor')
    
        self._lock = threading.Lock()
        self._joint_state = None
        self._end_pose = None
        self._joint_state_received = False
        self._end_pose_received = False
        
        self.joint_sub = self.create_subscription(
            JointState,
            '/joint_states',
            self.joint_state_callback,
            10
        )
        
        self.pose_sub = self.create_subscription(
            PoseStamped,
            '/arm/end_pose',
            self.end_pose_callback,
            10
        )
        
        self.get_logger().info('arm state monitor node started')
    
    def joint_state_callback(self, msg):
        """handle joint state message"""
        with self._lock:
            self._joint_state = msg
            self._joint_state_received = True
        
    
    def end_pose_callback(self, msg):
        """handle end pose message"""
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
            positions = []
            for i, name in enumerate(self._joint_state.name):
                if name.startswith('arm_joint') and name != 'arm_gripper':
                    positions.append(self._joint_state.position[i])
            if len(positions) == 6:
                return np.array(positions)
            if len(self._joint_state.position) == 7:
                return np.array(self._joint_state.position[1:7])
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
        """Switch to a specific controller, deactivating conflicting controllers"""
        conflict_controllers = ["joint_position_controller", "zero_force_dragging_controller", "cart_pose_controller"]
        
        current_state = self.get_controller_state(controller_name)
        if current_state:
            self.get_logger().info(f"controller '{controller_name}' is already active")
            return True
        
        deactivate_list = []
        for conflict_ctrl in conflict_controllers:
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
            
            time.sleep(1.5)
        
        self.get_logger().info(f"activate controller '{controller_name}'")
        activate_cmd = ['ros2', 'control', 'switch_controllers', 
                        '--activate', controller_name,
                        '--activate-asap', '--strict']
        
        result = subprocess.run(activate_cmd, capture_output=True, text=True, check=False)
        
        if result.stdout:
            self.get_logger().info(f"activate output: {result.stdout}")
        if result.stderr and result.returncode != 0:
            self.get_logger().error(f"activate error: {result.stderr}")
        
        time.sleep(2)
        
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
            all_output = result.stdout + result.stderr
            lines = all_output.strip().split('\n')
            
            for line in lines:
                line = line.strip()
                if not line or re.match(r'^\[.*?\]\s*\[', line):
                    continue
                if re.search(r'\b(name|type|state)\b', line, re.IGNORECASE) and len(line) < 50:
                    continue
                
                parts = re.split(r'\s{2,}', line)
                if len(parts) < 3:
                    parts = line.split()
                
                if len(parts) >= 3:
                    name = parts[0].strip()
                    name = re.sub(r'\x1b\[[0-9;]*m|\033\[[0-9;]*m', '', name)
                    
                    if name == controller_name:
                        state = parts[2].strip()
                        state = re.sub(r'\x1b\[[0-9;]*m|\033\[[0-9;]*m', '', state)
                        self.get_logger().info(f"controller '{controller_name}' state: {state}")
                        return state == 'active'
            
            self.get_logger().warn(f"controller '{controller_name}' not found")
            return False
        else:
            self.get_logger().error("get current control mode failed")
            return False

    def wait_for_state(self, timeout=5.0):
        try:
            self.state_monitor.get_joint_state(timeout)
            self.state_monitor.get_end_pose_msg(timeout)
            self.get_logger().info('state ready')
            return True
        except TimeoutError as e:
            self.get_logger().error(f'wait for state timeout: {e}')
            return False
    
    def publish_end_pose(self, pose: Pose):
        pose_stamped = PoseStamped()
        pose_stamped.header.frame_id = 'world'
        pose_stamped.header.stamp = self.get_clock().now().to_msg()
        pose_stamped.pose = pose
        self.end_pose_cmd_pub.publish(pose_stamped)

    def move_arm_endpose_toppra(self, target_pose , v_max=0.8, a_max=0.3):
        start_pose_stamped = self.state_monitor.get_end_pose_msg(timeout=0.1)        
        start_pose = start_pose_stamped.pose
        
        if start_pose is None:
            self.get_logger().error("start pose is None")
            return False
        print(f"start_pose - position: x={start_pose.position.x:.4f}, y={start_pose.position.y:.4f}, z={start_pose.position.z:.4f}")
        print(f"start_pose - orientation: x={start_pose.orientation.x:.4f}, y={start_pose.orientation.y:.4f}, z={start_pose.orientation.z:.4f}, w={start_pose.orientation.w:.4f}")

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
        
        start_time = time.perf_counter()

        for i, t in enumerate(ts):
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
            
            expected_time = i * interval
            elapsed_time = time.perf_counter() - start_time
            sleep_time = expected_time - elapsed_time
            if sleep_time > 0:
                time.sleep(sleep_time)
            elif sleep_time < -0.01:
                if i % 100 == 0:
                    self.get_logger().warn(f"end pose trajectory execution delay: {-sleep_time*1000:.2f}ms")
            
            if i % 50 == 0:
                rclpy.spin_once(self.state_monitor, timeout_sec=0.001)

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

def main(args=None):
    """test cartesian space movement"""
    rclpy.init(args=args)
    
    arm_state_monitor = ArmStateMonitor()
    arm_control = ArmJointControl(arm_state_monitor)
    
    executor = rclpy.executors.SingleThreadedExecutor()
    executor.add_node(arm_state_monitor)
    executor.add_node(arm_control)
    
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
            print("wait for state timeout")
            return
        
        if not arm_control.switch_controller('cart_pose_controller'):
            print("switch to cartesian control mode failed")
            return
        print("switch to cartesian control mode success")
        time.sleep(1)
        arm_control.move_to_zero_pose()
        time.sleep(1)
        target = Pose()
        target.position = Point(x=0.006, y=0.0108, z=0.3521)
        target.orientation = Quaternion(x=0.0355, y=-0.1371, z=0.0804, w=0.9866)
        result = arm_control.move_arm_endpose_toppra(target)
        if result:
            print("move to target pose success")
            end_pose = arm_control.state_monitor.get_end_pose_msg(timeout=5.0)
            print("------------------------------------------------")
            print("current position:")
            print(f"current joint position: {arm_control.state_monitor.arm_joint_position}")
            print("------------------------------------------------")
            print("current end pose:")
            print(f"current end pose - position: x={end_pose.pose.position.x:.4f}, y={end_pose.pose.position.y:.4f}, z={end_pose.pose.position.z:.4f}")
            print(f"current end pose - orientation: x={end_pose.pose.orientation.x:.4f}, y={end_pose.pose.orientation.y:.4f}, z={end_pose.pose.orientation.z:.4f}, w={end_pose.pose.orientation.w:.4f}")
        else:
            print("move to target pose failed")
            return
        time.sleep(1)
        print("return to zero pose")
        arm_control.move_to_zero_pose()

    finally:
        stop_spinning.set()
        spin_thread_obj.join(timeout=1.0)
        executor.remove_node(arm_state_monitor)
        executor.remove_node(arm_control)
        arm_state_monitor.destroy_node()
        arm_control.destroy_node()
        rclpy.shutdown()
        print("Node destroyed")
        print("Program exited")

if __name__ == "__main__":
    main()