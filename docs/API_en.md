# API Reference Documentation

This document provides detailed information about all ROS 2 interfaces provided by the X2Robot ARM 6A SDK.

## Table of Contents

- [Control Interfaces](#control-interfaces)
- [Status Interfaces](#status-interfaces)

## Control Interfaces

### 1. Get Controller List:
- **Command line interface**: `ros2 control list_controllers`
- **ROS2 service name**: `/controller_manager/list_controllers`

Command line example:

```bash
ros2 control list_controllers --activate <controller_to_activate> --deactivate <controller_to_deactivate>
```

Expected output:

```
gripper_controller             x2robot_controllers/JointImpedanceController     active
endpose_broadcaster            x2robot_controllers/EndposeBroadcaster           active
joint_state_broadcaster        joint_state_broadcaster/JointStateBroadcaster    active
cart_pose_controller           x2robot_controllers/QPIKController               inactive
joint_position_controller      x2robot_controllers/JointImpedanceController     inactive
zero_force_dragging_controller x2robot_controllers/GravityCompensateController  inactive
```

`active` means activated state, `inactive` means not activated.

Controller explanations:
- gripper_controller: Gripper controller (activated by default)
- endpose_broadcaster: End pose status publisher (activated by default)
- joint_state_broadcaster: Joint state publisher (activated by default)
- cart_pose_controller: Task space mode controller, mutually exclusive with `joint_position_controller` and `zero_force_dragging_controller`
- joint_position_controller: Joint position mode controller, mutually exclusive with `cart_pose_controller` and `zero_force_dragging_controller`
- zero_force_dragging_controller: Zero force dragging mode controller, mutually exclusive with `cart_pose_controller` and `joint_position_controller`

### 2. Switch Control Mode:
The system supports three control modes: Joint position control mode, Zero force dragging mode, Task space control mode. These three modes are mutually exclusive, and only one mode can be active at a time. When first started, all are inactive.
- **ROS2 control command line**
```bash
ros2 control switch_controllers
```
- **ROS2 service name**: `/controller_manager/switch_controller`
- **ROS2 service msg type**: `controller_manager_msgs/srv/SwitchController`

#### Enter Zero Force Dragging Mode:
Switch to `zero_force_dragging_controller`. The operator can drag the arm freely for use as a main arm.
Command line example:
```bash
ros2 control switch_controllers \
     --activate zero_force_dragging_controller \
     --deactivate cart_pose_controller joint_position_controller
```

#### Enter Joint Position Control Mode:
**WARNING: When controlling arm movement, the user must stay away from the robotic arm to avoid safety accidents caused by arm loss of control!!!**
Switch to `joint_position_controller`
Command line example:
```bash
ros2 control switch_controllers \
     --activate joint_position_controller \
     --deactivate zero_force_dragging_controller cart_pose_controller
```
**Control method**:
- **Topic name**: `/joint_position_controller/commands`
- **Topic type**: `std_msgs::msg::Float64MultiArray`
- **Description**: Array of size 6, joint angle desired positions for the 6-axis arm, from joint 1 to joint 6

#### Deactivate All Controllers
**After all controllers are deactivated, no control commands will be accepted. This can be used as a software emergency stop.**
Command line example:
```bash
ros2 control switch_controllers \
     --deactivate zero_force_dragging_controller cart_pose_controller joint_position_controller
```

Command line example：
```bash
# Check topic info
ros2 topic info /joint_position_controller/commands

# Publish test command (6 joint target positions, unit: radians)
ros2 topic pub /joint_position_controller/commands std_msgs/msg/Float64MultiArray \
  "{data: [0.0, 0.0, 0.0, 0.0, 0.0, 0.0]}" --once

# Continuous publishing, -r 10 means 10Hz frequency
ros2 topic pub /joint_position_controller/commands std_msgs/msg/Float64MultiArray \
  "{data: [0.5, 0.3, -0.2, 0.1, 0.0, 0.0]}" -r 10
```

#### Enter Task Space Control Mode
**WARNING: When controlling arm movement, the user must stay away from the robotic arm to avoid safety accidents caused by arm loss of control!!!**
Switch to `cart_pose_controller`
Command line example:
```bash
ros2 control switch_controllers \
     --activate cart_pose_controller \
     --deactivate zero_force_dragging_controller joint_position_controller
```
**Control method**:
- **Topic name**: `cart_pose_controller/pose_cmd`
- **Topic type**: `geometry_msgs::msg::PoseStamped`
- **Description**: 6D pose desired position with world frame as base coordinate system

Command line example：
```bash
# Check topic info
ros2 topic info /cart_pose_controller/pose_cmd

# Publish test command (base coordinate system is world frame)
ros2 topic pub /cart_pose_controller/pose_cmd geometry_msgs/msg/PoseStamped \
  "{header: {frame_id: 'world'}, \
    pose: {position: {x: 0.3, y: 0.0, z: 0.2}, \
           orientation: {x: 0.0, y: 0.0, z: 0.0, w: 1.0}}}" --once

# Continuous publishing
ros2 topic pub /cart_pose_controller/pose_cmd geometry_msgs/msg/PoseStamped \
  "{header: {frame_id: 'world'}, \
    pose: {position: {x: 0.3, y: 0.0, z: 0.2}, \
           orientation: {x: 0.0, y: 0.0, z: 0.0, w: 1.0}}}" -r 10
```

### 3. Gripper Control Interface
Confirm gripper controller is in active state.

- **Topic name**: `/gripper_controller/commands`
- **Topic type**: `std_msgs/msg/Float64MultiArray`
- **Description**: Array of size 1, value represents gripper motor angle in radians, range [0-4.5], after conversion the dual gripper stroke range is [0-78.75mm]

Command line example：
```bash
# Check topic info
ros2 topic info /gripper_controller/commands

# Publish test command (target position of joint motor, unit: radians)
ros2 topic pub /gripper_controller/commands std_msgs/msg/Float64MultiArray \
  "{data: [0.6]}" --once

# Continuous publishing, -r 10 means 10Hz frequency
ros2 topic pub /gripper_controller/commands std_msgs/msg/Float64MultiArray \
  "{data: [1.2]}" -r 10
```

## Status Interfaces

### Get Current Robotic Arm Hardware Status: /diagnostics
- **Topic name**: `/diagnostics`
- **Topic type**: `diagnostic_msgs/msg/DiagnosticArray`

Command line example:

```bash
ros2 topic echo /diagnostics
```

Output example:

```
header:
  stamp:
    sec: 1768795055
    nanosec: 510530934
  frame_id: ''
status:
- level: "\0"
  name: 'socketcan_bridge: periodical updater'
  message: socketcan_bridge is working
  hardware_id: socketcan_bridge
  values: []
---
header:
  stamp:
    sec: 1768795055
    nanosec: 531935431
  frame_id: ''
status:
- level: "\0" # Diagnostic level/severity
  name: 'arm_control: Motor Status' # Component/node name or identifier
  message: All motors operating normally # Human readable status description
  hardware_id: arm_control # Hardware device unique identifier
  values: # Key-value pairs array for storing detailed diagnostic data
  - key: arm_joint5_temp # Joint motor temperature
    value: '27'
  - key: arm_joint5_error_code # Joint motor error code, 0 means normal
    value: '0'
  - key: arm_joint4_temp
    value: '26'
  - key: arm_joint4_error_code
    value: '0'
  - key: arm_joint6_temp
    value: '27'
  - key: arm_joint6_error_code
    value: '0'
  - key: arm_joint3_temp
    value: '26'
  - key: arm_joint3_error_code
    value: '0'
  - key: arm_joint2_temp
    value: '26'
  - key: arm_joint2_error_code
    value: '0'
  - key: arm_joint1_temp
    value: '24'
  - key: arm_joint1_error_code
    value: '0'
  - key: Enabled Motors
    value: '6'
  - key: Error Count # Number of joints with errors
    value: '0'
  - key: Warning Count
    value: '0'
```

**DiagnosticStatus level field value explanation**
- **Meaning**: Diagnostic level/severity
- **Optional values**:
  - `0` - **OK**: Operating normally
  - `1` - **WARN**: Warning, can still operate but has issues
  - `2` - **ERROR**: Error, functional abnormality
  - `3` - **STALE**: Data stale, component may be disconnected

If Error Count is 0, it means no exceptions.


### Joint State

**Topic name:** `/joint_states`
**Message type:** `sensor_msgs/msg/JointState`

**Message content:**
```python
{
  "header": {...},
  "name": ["joint1", "joint2", "joint3", "joint4", "joint5", "joint6"],
  "position": [0.0, 0.0, 0.0, 0.0, 0.0, 0.0],  # radians
  "velocity": [0.0, 0.0, 0.0, 0.0, 0.0, 0.0],  # radians/second
  "effort": [0.0, 0.0, 0.0, 0.0, 0.0, 0.0]     # torque (Nm)
}
```

**Python subscription:**
```python
from sensor_msgs.msg import JointState

def joint_callback(msg):
    print(f"Joint positions: {msg.position}")
    print(f"Joint velocities: {msg.velocity}")
    print(f"Joint efforts: {msg.effort}")

sub = node.create_subscription(
    JointState,
    '/joint_states',
    joint_callback,
    10
)
```

**Command line:**
```bash
ros2 topic echo /joint_states
ros2 topic hz /joint_states  # View frequency
```

### Robot End Pose: /arm/end_pose
- **Topic name**: `/arm/end_pose`
- **Topic type**: `geometry_msgs/msg/PoseStamped`

```bash
ros2 topic echo /arm/end_pose
```

Output example:

```
header:
  stamp: # Pose timestamp
    sec: 1768795175
    nanosec: 25515724
  frame_id: arm_base_link # Coordinate system where pose is located
pose:
  position: # Position coordinates in 3D space
    x: -0.002596549437289958 # X coordinate (meters)
    y: -0.00015324293869546386 # Y coordinate (meters)
    z: -0.010949253138884674 # Z coordinate (meters)
  orientation: # Orientation/direction represented by quaternion
    x: 0.006782491231458055 # Quaternion x component
    y: 0.0565191773795548 # Quaternion y component
    z: 0.0038225097444711995 # Quaternion z component
    w: 0.9983711578467634 # Quaternion w component (real part)
```

### Robot Coordinate System Information: /tf
- **Topic name**: `/tf`
- **Topic type**: `tf2_msgs/msg/TFMessage`

```bash
ros2 topic echo /tf
```

Output example:

```
transforms: # Coordinate transformation array, each element describes transformation between coordinate systems
- header:
    stamp:
      sec: 1768795447
      nanosec: 720627795
    frame_id: arm_gripper_base_link # Parent coordinate system name
  child_frame_id: arm_gripper_motor_link # Child coordinate system name, describes transformation from frame_id to child_frame_id
  transform: # Spatial transformation containing translation and rotation
    translation:
      x: 0.0  # X direction translation (meters)
      y: 0.0  # Y direction translation (meters)
      z: 0.0  # Z direction translation (meters)
    rotation:
      x: 0.06261636609424351 # Quaternion x component
      y: 0.0 # Quaternion y component
      z: 0.0 # Quaternion z component
      w: 0.9980376699790202 # Quaternion w component
- header:
    stamp:
      sec: 1768795447
      nanosec: 720627795
    frame_id: arm_gripper_base_link
  child_frame_id: arm_gripper_left_link
  transform:
    translation:
      x: 0.080074
      y: 0.0010685510348129273
      z: -0.018
    rotation:
      x: 0.0
      y: 0.0
      z: 0.0
      w: 1.0
```

### Camera Interface
- **Topic name**: `/eye_in_hand/eye_in_hand/image_raw/image_compressed`
- **Topic type**: `sensor_msgs/msg/CompressedImage`

```bash
ros2 topic echo /eye_in_hand/eye_in_hand/image_raw/image_compressed
```

#### Modify Camera Device Configuration File to Correctly Connect Camera Device

The camera device needs to be modified to match the robotic arm's device. The camera device number can be confirmed as follows:

1. Before plugging in the camera USB cable, check what devices are currently available:
```bash
ls /dev/video
```

2. After plugging in the camera USB cable, check again, the newly added device is the camera, e.g., newly added `/dev/video4`

To get camera data, modify the following configuration file:
```bash
sudo vim /opt/xr/core/install/zbl_arm_6a_description/share/zbl_arm_6a_description/config/camera.yaml
```
Example: Modify to `/dev/video4`

After modification, exit and restart the zbl_arm_6a_description process.

## Common Commands Summary

```bash
# View all topics
ros2 topic list

# View topic details
ros2 topic info /joint_states

# View message definition
ros2 interface show sensor_msgs/msg/JointState

# View nodes
ros2 node list

# View node information
ros2 node info /controller_manager

# Record data
ros2 bag record -a

# Replay data
ros2 bag play <bag_file>
```

## More Resources
- [ROS 2 Documentation](https://docs.ros.org/en/jazzy/)
- [ros2_control Documentation](https://control.ros.org/)
- [Example Code](../examples/)