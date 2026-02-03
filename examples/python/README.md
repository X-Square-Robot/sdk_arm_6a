# Python Example Code

This directory contains Python example code for robot arm control using `rclpy`. All examples are developed based on ROS 2 Jazzy.

## Example List

### 1. **state_monitor.py** - State Monitoring
- **Function**: Real-time monitoring of robot arm state
- **Subscribed Topics**:
  - `/joint_states` - Joint states (position, velocity, effort)
  - `/end_pose` - End-effector pose
- **Usage**: For debugging and monitoring, understanding the current state of the robot arm
- **Features**: 
  - Simple and easy to use, suitable for beginners to understand system state
  - Displays joint positions in both radians and degrees
  - Prints end-effector pose information

### 2. **controller_manager.py** - Controller Management
- **Function**: Manage and switch robot arm controllers
- **Supported Operations**:
  - List all controllers and their states
  - Switch control modes (joint position control, Cartesian space control, zero-force dragging)
- **Usage**:
  ```bash
  # List all controllers
  python3 controller_manager.py --list
  
  # Switch to joint position control
  python3 controller_manager.py --switch pos
  
  # Switch to Cartesian space control
  python3 controller_manager.py --switch cart
  
  # Switch to zero-force dragging mode
  python3 controller_manager.py --switch zero_force
  ```
- **Features**: Uses ROS 2 services to switch controllers, more reliable

### 3. **joint_control.py** - Joint Space Control
- **Function**: Joint space position control with smooth trajectory planning
- **Features**:
  - Uses TOPP-RA for trajectory planning
  - Automatic handling of velocity/acceleration constraints
  - Joint limit checking
  - Motion completion detection
  - Verifies `joint_position_controller` is active (switches if needed)
  - Thread-safe state monitoring with locks
- **Demo Content**:
  - Move to zero position
  - Move to specified joint angles
  - Return to zero position
- **Control Parameters**:
  - Maximum joint velocity: 0.8 rad/s
  - Maximum joint acceleration: 2.5 rad/s²
  - Control frequency: 200 Hz (dt=0.005s)
  - Optional `wait_for_completion` parameter for motion completion detection

### 4. **cartesian_control.py** - Cartesian Space Control
- **Function**: End-effector pose control with smooth trajectory planning
- **Features**:
  - Uses TOPP-RA for position trajectory planning
  - Uses SLERP for quaternion orientation interpolation
  - Smooth acceleration curves
  - Precise timing control
  - Thread-safe state monitoring with locks
- **Demo Content**:
  - Move to zero position
  - Move to specified Cartesian pose
  - Return to zero position
- **Control Parameters**:
  - Maximum linear velocity: 1.5 m/s
  - Maximum linear acceleration: 2.0 m/s²
  - Control frequency: 200 Hz (interval=0.005s)

### 5. **round_demo.py** - Circular Motion Demo
- **Function**: Demonstrates circular motion in Cartesian space
- **Features**:
  - Based on Cartesian space control
  - Configurable circle radius and number of rotations
  - Maintains constant end-effector orientation
  - Thread-safe state monitoring with locks
- **Usage**:
  ```bash
  # Run 3 circles by default
  python3 round_demo.py
  
  # Custom number of rotations
  python3 round_demo.py --times 5
  ```
- **Demo Content**:
  - Move to circle starting point
  - Execute circular motion (can be repeated multiple times)

### 6. **arm_camera.py** - Robot Arm Camera Viewer
- **Function**: Real-time viewing of robot arm eye-in-hand camera images
- **Subscribed Topics**:
  - `/eye_in_hand/eye_in_hand/image_raw/image_compressed` - Compressed image stream
- **Features**:
  - Uses OpenCV to display images
  - Supports compressed image decoding
  - Supports headless mode for SSH remote connections
  - Automatic display environment detection (checks DISPLAY and xdpyinfo)
  - Automatic DISPLAY environment variable detection
  - Press 'q' key in image window to exit
  - Graceful error handling for display issues
- **Usage**:
  ```bash
  # Local run (requires GUI)
  python3 arm_camera.py
  
  # SSH remote run (requires X11 forwarding)
  ssh -X user@host
  python3 arm_camera.py
  ```
- **Notes**:
  - Requires OpenCV: `pip3 install opencv-python`
  - If no display is available, the program runs in headless mode (prints image info only)
  - Automatically tries common DISPLAY values (`:0`, `:0.0`, `:1`, `:1.0`) if not set

### 7. **gripper_control.py** - Gripper Control
- **Function**: Control robot arm gripper open/close
- **Published Topics**:
  - `/gripper_controller/commands` - Gripper commands (`std_msgs/Float64MultiArray`)
- **Features**:
  - Simple gripper control interface using `GripperControl` class
  - Supports open and close operations
  - Clean API with `open_gripper()` and `close_gripper()` methods
- **Control Values**:
  - `0.0` - Close gripper
  - `1.0` - Open gripper
- **Demo Content**:
  - Open gripper
  - Wait 1 second
  - Close gripper
- **Usage**:
  ```bash
  python3 gripper_control.py
  ```

## Running Examples

### Prerequisites

1. **ROS 2 Environment Setup**:
   ```bash
   source /opt/xr/core/install/setup.bash
   ```

2. **Python Dependencies**:
   ```bash
   # Basic dependencies (required for all examples)
   pip3 install numpy scipy toppra
   
   # Camera viewer requires (only for arm_camera.py)
   pip3 install opencv-python
   ```

3. **Ensure the robot arm controller is running**

### Run Commands

```bash
# State monitoring
python3 state_monitor.py

# Controller management
python3 controller_manager.py --list
python3 controller_manager.py --switch pos

# Joint space control
python3 joint_control.py

# Cartesian space control
python3 cartesian_control.py

# Circular motion demo
python3 round_demo.py --times 3

# Camera viewer
python3 arm_camera.py

# Gripper control
python3 gripper_control.py
```

## Technical Details

### Trajectory Planning

All control examples use **TOPP-RA** (Time-Optimal Path Parameterization based on Reachability Analysis) for trajectory planning:

- **Joint Space**: Uses quintic polynomial interpolation, ensuring zero velocity and acceleration at start and end points
- **Cartesian Space**: 
  - Position uses linear interpolation + TOPP-RA velocity planning
  - Orientation uses SLERP (Spherical Linear Interpolation) for quaternion interpolation

### Safety Parameters

**Joint Space Control** (`joint_control.py`):
- Maximum joint velocity: 0.8 rad/s (approximately 46°/s)
- Maximum joint acceleration: 2.5 rad/s²
- Control frequency: 200 Hz (dt=0.005s)
- Joint limits: Automatically checked and constrained within safe ranges

**Cartesian Space Control** (`cartesian_control.py`, `round_demo.py`):
- Maximum linear velocity: 1.5 m/s (cartesian_control.py), 0.8 m/s (round_demo.py)
- Maximum linear acceleration: 2.0 m/s² (cartesian_control.py), 0.2-1.0 m/s² (round_demo.py)
- Control frequency: 200 Hz (interval=0.005s)

⚠️ **Note**: To adjust velocity parameters, modify the `v_max` and `a_max` parameters in the code.

### Thread Safety

The control examples (`joint_control.py`, `cartesian_control.py`, `round_demo.py`) use thread-safe state monitoring:

- **Two separate locks** are used to protect different data:
  - `_joint_state_lock`: Protects joint state data (`_joint_state`, `_joint_state_received`)
  - `_end_pose_lock`: Protects end-effector pose data (`_end_pose`, `_end_pose_received`)
- **No deadlock risk**: The locks are independent and never acquired simultaneously
- **Thread-safe property access**: The `arm_joint_position` and `end_pose` properties always return the latest values safely
- **ROS callback safety**: Subscription callbacks run in the executor thread and safely update shared state

### Controller Switching

The ROS 2 Control framework requires activating a specific controller before use, while deactivating conflicting controllers. The example code handles this automatically:

- **Conflicting Controller Groups**:
  - `joint_position_controller` ↔ `cart_pose_controller` ↔ `zero_force_dragging_controller`
  - These controllers cannot be activated simultaneously

- **Switching Process**:
  1. Check target controller state
  2. Deactivate conflicting controllers
  3. Wait for resource release (approximately 1.5 seconds)
  4. Activate target controller
  5. Verify successful switch

## Custom Development

You can create your own control programs based on these examples. The basic structure is as follows:

```python
#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from geometry_msgs.msg import PoseStamped

class MyArmController(Node):
    def __init__(self):
        super().__init__('my_arm_controller')
        # Initialize publishers, subscribers, etc.
        
    # Add your control logic

def main():
    rclpy.init()
    node = MyArmController()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
```

### Common Topics and Services

**Subscribed Topics**:
- `/joint_states` - Joint states (`sensor_msgs/JointState`)
- `/end_pose` - End-effector pose (`geometry_msgs/PoseStamped`) - used by `state_monitor.py`
- `/arm/end_pose` - End-effector pose (`geometry_msgs/PoseStamped`) - used by control examples
- `/eye_in_hand/eye_in_hand/image_raw/image_compressed` - Camera compressed images (`sensor_msgs/CompressedImage`)

**Published Topics**:
- `/joint_position_controller/commands` - Joint position commands (`std_msgs/Float64MultiArray`)
- `/cart_pose_controller/pose_cmd` - Cartesian pose commands (`geometry_msgs/PoseStamped`)
- `/gripper_controller/commands` - Gripper commands (`std_msgs/Float64MultiArray`)

**Services**:
- `/controller_manager/list_controllers` - List all controllers
- `/controller_manager/switch_controller` - Switch controllers

## Frequently Asked Questions

### Q: Why do we need to switch control modes before motion?
A: The ROS 2 Control framework requires activating a specific controller before use, while deactivating other conflicting controllers. The example code handles this process automatically.

### Q: How to adjust motion speed?
A: Pass `v_max` and `a_max` parameters when calling `move_arm_joints_toppra()` or `move_arm_endpose_toppra()`:
```python
arm_control.move_arm_joints_toppra(target_positions, v_max=1.0, a_max=3.0)
```

### Q: How does trajectory planning work?
A: 
- **Joint Space**: Uses TOPP-RA for time-optimal parameterization on joint space paths, ensuring velocity/acceleration constraints
- **Cartesian Space**: Position uses linear interpolation + TOPP-RA, orientation uses SLERP for quaternion interpolation

### Q: How to handle emergency stop?
A: Press `Ctrl+C` to interrupt the program. In practical applications, it is recommended to:
- Add emergency stop button handling
- Listen to `/emergency_stop` topic
- Implement a safety state machine

### Q: How to get current joint angles?
A: Use the `ArmStateMonitor` class (available in control examples):
```python
monitor = ArmStateMonitor()
# Wait for state ready
monitor.get_joint_state(timeout=5.0)
# Get arm joint positions (only arm_joint1-6, excluding gripper)
arm_positions = monitor.arm_joint_position  # Returns numpy array
# Get full joint state message
joint_state = monitor.get_joint_state(timeout=5.0)  # Returns JointState message
```
Note: The `ArmStateMonitor` class in control examples (`joint_control.py`, `cartesian_control.py`, `round_demo.py`) uses thread-safe locks to protect state data.

### Q: How to get current end-effector pose?
A: 
```python
monitor = ArmStateMonitor()
# Wait for state ready
pose_msg = monitor.get_end_pose_msg(timeout=5.0)  # Returns PoseStamped message
pose = pose_msg.pose  # geometry_msgs/Pose
# Or get directly (returns Pose object)
pose = monitor.end_pose
```
Note: The `ArmStateMonitor` class in control examples uses thread-safe locks. The topic is `/arm/end_pose` for control examples, but `/end_pose` for `state_monitor.py`.

### Q: How to control the gripper?
A: Use the `GripperControl` class or publish commands directly:
```python
from gripper_control import GripperControl

# Using GripperControl class (recommended)
gripper = GripperControl()
gripper.open_gripper()   # Opens gripper (sends 1.0)
gripper.close_gripper()  # Closes gripper (sends 0.0)

# Or publish commands directly
from std_msgs.msg import Float64MultiArray
gripper_pub = node.create_publisher(Float64MultiArray, '/gripper_controller/commands', 10)

# Open gripper (1.0)
msg = Float64MultiArray()
msg.data = [1.0]
gripper_pub.publish(msg)

# Close gripper (0.0)
msg.data = [0.0]
gripper_pub.publish(msg)
```

### Q: Camera viewer cannot display images, what should I do?
A: 
- Check if OpenCV is installed: `pip3 install opencv-python`
- If connecting via SSH, use `ssh -X` to enable X11 forwarding
- Set DISPLAY environment variable: `export DISPLAY=:0`
- The program will run in headless mode and still print image information

## More Information

Refer to the main README.md file for complete API documentation and more technical details.

