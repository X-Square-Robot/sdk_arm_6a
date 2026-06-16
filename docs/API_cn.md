# API 参考文档

本文档详细说明 X2Robot ARM 6A SDK 提供的所有 ROS 2 接口。

## 目录

- [控制接口](#控制接口)
- [状态接口](#状态接口)

## 控制接口

### 1. 获取控制器列表:
- **命令行接口**: `ros2 control list_controllers`
- **ROS2 service名称**: `/controller_manager/list_controllers`

命令行示例：

```bash
ros2 control list_controllers --activate <需要激活的模式>  --deactivate <需要关闭的模式>
```

期望输出：

```
gripper_controller             x2robot_controllers/JointImpedanceController     active
endpose_broadcaster            x2robot_controllers/EndposeBroadcaster           active
joint_state_broadcaster        joint_state_broadcaster/JointStateBroadcaster    active
cart_pose_controller           x2robot_controllers/QPIKController               inactive
joint_position_controller      x2robot_controllers/JointImpedanceController     inactive
zero_force_dragging_controller x2robot_controllers/GravityCompensateController  inactive
```

active表示激活状态, inactive表示未激活状态

各个控制器解释:
- gripper_controller: 夹爪控制器(默认激活)
- endpose_broadcaster:末端位姿状态发布器(默认激活)
- joint_state_broadcaster: 关节状态发布器(默认激活)
- cart_pose_controller: 任务空间模式控制器, 和joint_position_controller以及zero_force_dragging_controller互斥关系, 不能同时激活
- joint_position_controller: 关节位置模式控制器, 和cart_pose_controller以及zero_force_dragging_controller互斥关系, 不能同时激活
- zero_force_dragging_controller: 零力拖动模式控制器, 和cart_pose_controller以及joint_position_controller互斥关系, 不能同时激活

### 2. 切换控制模式:
支持的控制模式有三种： 关节位置控制模式 ，零力拖动模式， 任务空间控制模式，三种模式互斥，每次有且只能有一个模式是激活状态，刚启动的时候是全部未激活的状态。
- **ROS2 control 命令行**
```bash
ros2 control switch_controllers
```
- **ROS2 service名称**: `/controller_manager/switch_controller`
- **ROS2 service msg type**: `controller_manager_msgs/srv/SwitchController`

#### 进入零力拖动模式:
切换至 zero_force_dragging_controller, 操作员可随意拖动，可作为主手臂使用。
命令行示例:
```bash
ros2 control switch_controllers \
     --activate zero_force_dragging_controller \
     --deactivate cart_pose_controller joint_position_controller
```

#### 进入关节位置控制模式:
**注意控制手臂运动时, 使用者需要远离机械臂, 以免手臂失控造成安全事故!!!**
切换至 joint_position_controller
命令行示例:
```bash
ros2 control switch_controllers \
     --activate joint_position_controller \
     --deactivate zero_force_dragging_controller cart_pose_controller
```
**控制方式**:
- **Topic名称**: /joint_position_controller/commands
- **Topic类型**: std_msgs::msg::Float64MultiArray
- **参数解释**: size 为6的数组, 机械臂六轴 关节角度期望位置, 从1关节到6关节

命令行示例：
```bash
# 检查topic信息
ros2 topic info /joint_position_controller/commands

# 发布测试命令（6个关节的目标位置，单位：弧度）
ros2 topic pub /joint_position_controller/commands std_msgs/msg/Float64MultiArray \
  "{data: [0.0, 0.0, 0.0, 0.0, 0.0, 0.0]}" --once

# 持续发布命令, -r 10表示10hz的频率
ros2 topic pub /joint_position_controller/commands std_msgs/msg/Float64MultiArray \
  "{data: [0.5, 0.3, -0.2, 0.1, 0.0, 0.0]}" -r 10
```

#### 进入任务空间控制模式
**注意控制手臂运动时, 使用者需要远离机械臂, 以免手臂失控造成安全事故!!!**
切换至 cart_pose_controller
命令行示例:
```bash
ros2 control switch_controllers \
     --activate cart_pose_controller \
     --deactivate zero_force_dragging_controller joint_position_controller
```
**控制方式**:
- **Topic名称**: cart_pose_controller/pose_cmd
- **Topic类型**: geometry_msgs::msg::PoseStamped
- **参数解释**: 基坐标系为world frame 6D pose 期望位姿

命令行示例：
```bash
# 检查topic信息
ros2 topic info /cart_pose_controller/pose_cmd

# 发布测试命令（基坐标系为world frame）
ros2 topic pub /cart_pose_controller/pose_cmd geometry_msgs/msg/PoseStamped \
  "{header: {frame_id: 'world'}, \
   pose: {position: {x: 0.3, y: 0.0, z: 0.2}, \
          orientation: {x: 0.0, y: 0.0, z: 0.0, w: 1.0}}}" --once

# 持续发布命令
ros2 topic pub /cart_pose_controller/pose_cmd geometry_msgs/msg/PoseStamped \
  "{header: {frame_id: 'world'}, \
   pose: {position: {x: 0.3, y: 0.0, z: 0.2}, \
          orientation: {x: 0.0, y: 0.0, z: 0.0, w: 1.0}}}" -r 10
```

#### 去激活所有控制器
**去激活所有控制器不再接受任何控制指令，可以用此方式实现软急停功能**

命令行示例:
```bash
ros2 control switch_controllers \
     --deactivate zero_force_dragging_controller cart_pose_controller joint_position_controller
```

### 3. 夹爪控制接口
确认夹爪控制器属于active状态

- **Topic名称**:/gripper_controller/commands
- **Topic类型**: std_msgs/msg/Float64MultiArray
- **参数解释**: size为1的数组, 值表示夹爪电机的角度弧度, 范围[0-4.5]rad, 换算之后双边夹爪行程范围是[0-78.75]mm

命令行示例：
```bash
# 检查topic信息
ros2 topic info /gripper_controller/commands

# 发布测试命令（关节电机的目标位置，单位：弧度）
ros2 topic pub /gripper_controller/commands std_msgs/msg/Float64MultiArray \
  "{data: [0.6]}" --once

# 持续发布命令, -r 10表示10hz的频率
ros2 topic pub /gripper_controller/commands std_msgs/msg/Float64MultiArray \
  "{data: [1.2]}" -r 10
```


## 状态接口

### 获取当前机械臂硬件状态: /diagnostics
- **Topic名称**: `/diagnostics`
- **Topic类型**: `diagnostic_msgs/msg/DiagnosticArray`

命令行示例：

```bash
ros2 topic echo /diagnostics
```

输出示例：

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
- level: "\0" # 诊断级别/严重程度
  name: 'arm_control: Motor Status' # 组件/节点的名称或标识符
  message: All motors operating normally # 状态描述信息
  hardware_id: arm_control # 硬件设备的唯一标识符
  values: # 键值对数组，用于存储详细的诊断数据
  - key: arm_joint5_temp # 关节电机温度
    value: '27'
  - key: arm_joint5_error_code # 关节电机错误码, 0表示正常
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
  - key: Error Count # 有错误的关节数
    value: '0'
  - key: Warning Count
    value: '0'
```

**DiagnosticStatus level字段取值说明**
- **含义**：诊断级别/严重程度
- **可选值**：
  - `0` - **OK**：正常运行
  - `1` - **WARN**：警告，有问题但仍可运行
  - `2` - **ERROR**：错误，功能异常
  - `3` - **STALE**：数据过时，组件可能失联

如果Error Count为0表示没有异常。


### 关节状态

**Topic 名称:** `/joint_states`  
**消息类型:** `sensor_msgs/msg/JointState`

**消息内容:**
```python
{
  "header": {...},
  "name": ["joint1", "joint2", "joint3", "joint4", "joint5", "joint6"],
  "position": [0.0, 0.0, 0.0, 0.0, 0.0, 0.0],  # 弧度
  "velocity": [0.0, 0.0, 0.0, 0.0, 0.0, 0.0],  # 弧度/秒
  "effort": [0.0, 0.0, 0.0, 0.0, 0.0, 0.0]     # 力矩(Nm)
}
```

**Python 订阅:**
```python
from sensor_msgs.msg import JointState

def joint_callback(msg):
    print(f"关节位置: {msg.position}")
    print(f"关节速度: {msg.velocity}")
    print(f"关节力矩: {msg.effort}")

sub = node.create_subscription(
    JointState,
    '/joint_states',
    joint_callback,
    10
)
```

**命令行:**
```bash
ros2 topic echo /joint_states
ros2 topic hz /joint_states  # 查看频率
```

### 机器人末端位姿: /arm/end_pose
- **Topic名称**: /arm/end_pose
- **Topic类型**: geometry_msgs/msg/PoseStamped

```bash
ros2 topic echo /arm/end_pose
```

输出示例：

```
header:
  stamp: # 位姿的时间戳
    sec: 1768795175
    nanosec: 25515724
  frame_id: arm_base_link # 位姿所在的坐标系（如 "world", "base_link", "map" 等）
pose:
  position: # 三维空间中的位置坐标
    x: -0.002596549437289958 # X 坐标（米）
    y: -0.00015324293869546386 # Y 坐标（米）
    z: -0.010949253138884674 # Z 坐标（米）
  orientation: # 使用四元数表示的姿态/方向
    x: 0.006782491231458055 # 四元数 x 分量
    y: 0.0565191773795548 # 四元数 y 分量
    z: 0.0038225097444711995 # 四元数 z 分量
    w: 0.9983711578467634 # 四元数 w 分量 （实部）
```

### 机器人坐标系信息: /tf
- **Topic名称**: /tf
- **Topic类型**: tf2_msgs/msg/TFMessage

```bash
ros2 topic echo /tf
```

输出示例：

```
transforms: # 坐标变换数组，每个元素描述一对坐标系之间的变换关系
- header:
    stamp:
      sec: 1768795447
      nanosec: 720627795
    frame_id: arm_gripper_base_link # 父坐标系的名称（变换的起始坐标系）
  child_frame_id: arm_gripper_motor_link # 子坐标系的名称（变换的目标坐标系）,描述从 frame_id 到 child_frame_id 的变换
  transform: # 空间变换，包含平移和旋转
    translation:
      x: 0.0  # X 方向平移（米）
      y: 0.0  # Y 方向平移（米）
      z: 0.0  # Z 方向平移（米）
    rotation:
      x: 0.06261636609424351 # 四元数 x 分量
      y: 0.0 # 四元数 Y 分量
      z: 0.0 # 四元数 Z 分量
      w: 0.9980376699790202 # 四元数 w 分量（实部）
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

### 相机接口
- **Topic名称**: /eye_in_hand/eye_in_hand/image_raw/image_compressed
- **Topic类型**: sensor_msgs/msg/CompressedImage

```bash
ros2 topic echo /eye_in_hand/eye_in_hand/image_raw/image_compressed
```

#### 修改相机设备配置文件以正确连接相机设备

需要将video_device修改成对应机械臂的设备, 可以通过以下方式确认相机设备号

1. 插上相机usb线之前确认当前有哪些设备
```bash
ls /dev/video
```

2. 插上相机usb线之后, 再次查看, 有新增的设备则为相机的设备, eg: 新增了/dev/video4

要获取相机数据, 需要修改以下配置文件
```bash
sudo vim /opt/xr/core/install/zbl_arm_6a_description/share/zbl_arm_6a_description/config/camera.yaml
```
Eg: 修改为/dev/video4

修改完成之后需要退出并重新启动zbl_arm_6a_description 进程才会生效

## 常用命令总结

```bash
# 查看所有 topic
ros2 topic list

# 查看 topic 详情
ros2 topic info /joint_states

# 查看消息定义
ros2 interface show sensor_msgs/msg/JointState

# 查看节点
ros2 node list

# 查看节点信息
ros2 node info /controller_manager

# 录制数据
ros2 bag record -a

# 回放数据
ros2 bag play <bag_file>
```


## 更多资源
- [ROS 2 文档](https://docs.ros.org/en/jazzy/)
- [ros2_control 文档](https://control.ros.org/)
- [示例代码](../examples/)

