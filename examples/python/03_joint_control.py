#!/usr/bin/env python3
import time
import rclpy
import threading
import subprocess
import numpy as np
import toppra as ta
import toppra.algorithm as algo
from toppra.constraint import JointVelocityConstraint, JointAccelerationConstraint
from rclpy.node import Node
from sensor_msgs.msg import JointState
from geometry_msgs.msg import PoseStamped
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
            if len(self._joint_state.position) == 7:
                return np.array(self._joint_state.position[1:7])
            return np.array(self._joint_state.position)
    
    @property
    def end_pose(self):
        """get current end pose"""
        with self._lock:
            if self._end_pose is None:
                return None
            return self._end_pose.pose


class ArmJointControl(Node):
    def __init__(self, state_monitor: ArmStateMonitor):
        super().__init__('arm_joint_control')
        self.state_monitor = state_monitor
        
        self.joint_cmd_pub = self.create_publisher(
            Float64MultiArray,
            '/joint_position_controller/commands',
            10
        )

        self.get_logger().info('arm joint control node started')
    
    def switch_to_position_control(self, controller_name: str, timeout=5.0):
        """Switch to a specific controller, deactivating conflicting controllers"""
        conflict_controllers = ["zero_force_dragging_controller", "cart_pose_controller"]
        
        current_state = self.get_controller_state(controller_name)
        if current_state:
            self.get_logger().info(f"controller '{controller_name}' is already active")
            return True
        
        deactivate_list = []
        for conflict_ctrl in conflict_controllers:
            if self.get_controller_state(conflict_ctrl):
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
        """wait for state ready"""
        try:
            self.state_monitor.get_joint_state(timeout)
            self.state_monitor.get_end_pose_msg(timeout)
            self.get_logger().info('state ready')
            return True
        except TimeoutError as e:
            self.get_logger().error(f'wait for state timeout: {e}')
            return False
    
    def publish_joint_positions(self, positions: list):
        """publish joint position command"""
        cmd = Float64MultiArray()
        cmd.data = positions if isinstance(positions, list) else positions.tolist()
        self.joint_cmd_pub.publish(cmd)
    
    def move_arm_joints_toppra(self, target_positions: list, v_max=0.8, a_max=2.5, 
                                dt=0.002, wait_for_completion=True):

        lower_limits = np.array([-2.792,  0.0, -3.14, -1.57, -1.4, -1.745])
        upper_limits = np.array([ 2.792,  3.44,  0.0,   1.57,  1.4,  1.745])

        rclpy.spin_once(self.state_monitor, timeout_sec=0.1)
        current_positions = self.state_monitor.arm_joint_position
        if current_positions is None:
            self.get_logger().error("cannot get current joint position, please check /joint_states topic")
            return False
        
        q_start = np.array(current_positions)
        q_end = np.array(target_positions)
        
        if len(q_start) != 6:
            self.get_logger().error(f"current joint position dimension error: expected 6 joints, actual {len(q_start)} joints")
            return False
        if len(q_end) != 6:
            self.get_logger().error(f"target joint position dimension error: expected 6 joints, actual {len(q_end)} joints")
            return False
        
        if np.any(q_end < lower_limits) or np.any(q_end > upper_limits):
            self.get_logger().error(f"target position out of limits: {q_end}, limits: [{lower_limits}, {upper_limits}]")
            return False
        
        position_error = np.linalg.norm(q_end - q_start)
        if position_error < 0.01:  # 1cm tolerance
            self.get_logger().info("target position reached")
            return True
        
        q_start = np.clip(q_start, lower_limits, upper_limits)

        num_joints = len(q_start)

        waypoints = np.stack([q_start, q_end])
        path = ta.SplineInterpolator([0, 1], waypoints)
  
        pc_vel = JointVelocityConstraint([v_max] * num_joints)
        pc_acc = JointAccelerationConstraint([a_max] * num_joints)

        instance = algo.TOPPRA([pc_vel, pc_acc], path)
        traj = instance.compute_trajectory(0, 0)

        if traj is None:
            self.get_logger().error("TOPP-RA trajectory planning failed")
            return False

        duration = traj.duration
        self.get_logger().info(f"start executing trajectory, expected duration: {duration:.2f}s, control frequency: {1/dt:.0f}Hz")
        
        ts = np.arange(0, duration, dt)
        trajectory_points = [traj(t) for t in ts]
        
        start_time = time.perf_counter()
        
        for i, q_t in enumerate(trajectory_points):
            q_t_safe = np.clip(q_t, lower_limits, upper_limits)
            
            self.publish_joint_positions(q_t_safe.tolist())
            
            expected_time = i * dt
            elapsed_time = time.perf_counter() - start_time
            sleep_time = expected_time - elapsed_time
            
            if sleep_time > 0:
                time.sleep(sleep_time)
            elif sleep_time < -0.01:
                if i % 100 == 0:
                    self.get_logger().warn(f"trajectory execution delay: {-sleep_time*1000:.2f}ms")
            
            if i % 50 == 0:
                rclpy.spin_once(self.state_monitor, timeout_sec=0.001)

        final_cmd = q_end.tolist()
        self.publish_joint_positions(final_cmd)
        
        if wait_for_completion:
            max_wait_time = 3.0
            wait_start = time.time()
            while time.time() - wait_start < max_wait_time:
                rclpy.spin_once(self.state_monitor, timeout_sec=0.1)
                current_pos = self.state_monitor.arm_joint_position
                if current_pos is not None and len(current_pos) == 6:
                    error = np.linalg.norm(np.array(current_pos) - q_end)
                    if error < 0.02:  # 2cm tolerance
                        break
                time.sleep(0.05)
        
        self.get_logger().info("joint movement completed")
        return True

    def move_to_zero_position(self):
        target_positions = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
        result = self.move_arm_joints_toppra(target_positions, v_max=0.8, a_max=2.5)
        if result:
            self.get_logger().info("zero position movement completed")
        else:
            self.get_logger().error("zero position movement failed")
        return result

 

def main(args=None):
    """test joint space movement"""
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
        
        if not arm_control.switch_to_position_control('joint_position_controller'):
            print("switch to position control mode failed")
            return
        print("switch to position control mode success")
        time.sleep(1)

        
        arm_control.move_to_zero_position()
        print("move to zero position success")
        time.sleep(1)
        # target_positions = [-0.1486, 0.4707, -0.8101, 0.6350, 0.3164, 0.0]
        target_positions = [0.785, 0.4707, -0.8101, 0.6350, 0.3164, 0.0]
        result = arm_control.move_arm_joints_toppra(target_positions)
        if result:
            print("move to target position success")
            end_pose = arm_control.state_monitor.get_end_pose_msg(timeout=5.0)
            print("------------------------------------------------")
            print("current position:")
            print(f"current joint position: {arm_control.state_monitor.arm_joint_position}")
            print("------------------------------------------------")
            print("current end pose:")
            print(f"current end_pose: {end_pose}")
            print(f"current end_pose - position: x={end_pose.pose.position.x:.4f}, y={end_pose.pose.position.y:.4f}, z={end_pose.pose.position.z:.4f}")
            print(f"current end_pose - orientation: x={end_pose.pose.orientation.x:.4f}, y={end_pose.pose.orientation.y:.4f}, z={end_pose.pose.orientation.z:.4f}, w={end_pose.pose.orientation.w:.4f}")
        else:
            print("move to target position failed")
            return
        time.sleep(1)
        print("return to zero position")
        arm_control.move_to_zero_position()
        print("move to zero position success")

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
    main()