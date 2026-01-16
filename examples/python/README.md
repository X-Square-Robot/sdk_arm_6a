# Python 示例代码

本目录包含使用 `rclpy` 进行机械臂控制的 Python 示例代码。所有示例都基于 ROS 2 Jazzy 开发。

## 示例列表

### 1. **01_state_monitor.py** - 状态监控
- **功能**: 实时监控机械臂状态
- **订阅话题**:
  - `/joint_states` - 关节状态（位置、速度、力矩）
  - `/end_pose` - 末端执行器位姿
- **用途**: 用于调试和监控，了解机械臂当前状态
- **特点**: 简单易用，适合初学者了解系统状态

### 2. **02_controller_manager.py** - 控制器管理
- **功能**: 管理和切换机械臂控制器
- **支持的操作**:
  - 列出所有控制器及其状态
  - 切换控制模式（关节位置控制、笛卡尔空间控制、零力拖动）
- **使用方法**:
  ```bash
  # 列出所有控制器
  python3 02_controller_manager.py --list
  
  # 切换到关节位置控制
  python3 02_controller_manager.py --switch pos
  
  # 切换到笛卡尔空间控制
  python3 02_controller_manager.py --switch cart
  
  # 切换到零力拖动模式
  python3 02_controller_manager.py --switch zero_force
  ```
- **特点**: 使用 ROS 2 服务方式切换控制器，更可靠

### 3. **03_joint_control.py** - 关节空间控制
- **功能**: 关节空间位置控制，带平滑轨迹规划
- **特性**:
  - 使用 TOPP-RA 进行轨迹规划
  - 自动处理速度/加速度约束
  - 关节限位检查
  - 运动完成检测
- **演示内容**:
  - 移动到零位
  - 移动到指定关节角度
  - 返回零位
- **控制参数**:
  - 最大关节速度: 0.8 rad/s
  - 最大关节加速度: 2.5 rad/s²
  - 控制频率: 500 Hz (dt=0.002s)

### 4. **04_cartesian_control.py** - 笛卡尔空间控制
- **功能**: 末端执行器位姿控制，带平滑轨迹规划
- **特性**:
  - 使用 TOPP-RA 规划位置轨迹
  - 使用 SLERP 插值四元数方向
  - 平滑的加速度曲线
  - 精确的时间控制
- **演示内容**:
  - 移动到零位
  - 移动到指定笛卡尔位姿
  - 返回零位
- **控制参数**:
  - 最大线速度: 0.8 m/s
  - 最大线加速度: 0.3 m/s²
  - 控制频率: 200 Hz (interval=0.005s)

### 5. **05_round_demo.py** - 圆周运动演示
- **功能**: 演示笛卡尔空间中的圆周运动
- **特性**:
  - 基于笛卡尔空间控制
  - 可配置圆周半径和圈数
  - 保持末端姿态不变
- **使用方法**:
  ```bash
  # 默认运行 3 圈
  python3 05_round_demo.py
  
  # 自定义圈数
  python3 05_round_demo.py --times 5
  ```
- **演示内容**:
  - 移动到圆周起点
  - 执行圆周运动（可重复多次）

### 6. **06_arm_camera.py** - 机械臂相机查看器
- **功能**: 实时查看机械臂手眼相机图像
- **订阅话题**:
  - `/eye_in_hand/eye_in_hand/image_raw/image_compressed` - 压缩图像流
- **特性**:
  - 使用 OpenCV 显示图像
  - 支持压缩图像解码
  - 支持无头模式（headless mode），适用于 SSH 远程连接
  - 自动检测显示环境
  - 按 'q' 键退出
- **使用方法**:
  ```bash
  # 本地运行（需要图形界面）
  python3 06_arm_camera.py
  
  # SSH 远程运行（需要 X11 转发）
  ssh -X user@host
  python3 06_arm_camera.py
  ```
- **注意事项**:
  - 需要安装 OpenCV: `pip3 install opencv-python`
  - 如果无显示环境，程序会在无头模式下运行（仅打印图像信息）

### 7. **07_gripper_control.py** - 夹爪控制
- **功能**: 控制机械臂夹爪开合
- **发布话题**:
  - `/gripper_controller/commands` - 夹爪命令 (`std_msgs/Float64MultiArray`)
- **特性**:
  - 简单的夹爪控制接口
  - 支持打开和关闭操作
- **控制值**:
  - `0.0` - 关闭夹爪
  - `1.0` - 打开夹爪
- **演示内容**:
  - 打开夹爪
  - 等待 1 秒
  - 关闭夹爪
- **使用方法**:
  ```bash
  python3 07_gripper_control.py
  ```

## 运行示例

### 前提条件

1. **ROS 2 环境设置**:
   ```bash
   source /opt/ros/jazzy/setup.bash
   source /opt/xr/core/install/setup.bash
   ```

2. **Python 依赖**:
   ```bash
   # 基础依赖（所有示例需要）, 以下依赖在pip.list都已经预安装好, 其他依赖需要的可以自行安装
   pip3 install numpy scipy toppra
   
   # 相机查看器需要（仅 06_arm_camera.py）
   pip3 install opencv-python
   ```

3. **确保机械臂控制器正在运行**

### 运行命令

```bash
# 状态监控
python3 01_state_monitor.py

# 控制器管理
python3 02_controller_manager.py --list
python3 02_controller_manager.py --switch pos

# 关节空间控制
python3 03_joint_control.py

# 笛卡尔空间控制
python3 04_cartesian_control.py

# 圆周运动演示
python3 05_round_demo.py --times 3

# 相机查看器
python3 06_arm_camera.py

# 夹爪控制
python3 07_gripper_control.py
```

## 技术细节

### 轨迹规划

所有控制示例都使用 **TOPP-RA** (Time-Optimal Path Parameterization based on Reachability Analysis) 进行轨迹规划：

- **关节空间**: 使用五次多项式插值，保证起点和终点速度、加速度为 0
- **笛卡尔空间**: 
  - 位置使用线性插值 + TOPP-RA 速度规划
  - 方向使用 SLERP (Spherical Linear Interpolation) 进行四元数插值

### 安全参数

**关节空间控制** (`03_joint_control.py`):
- 最大关节速度: 0.8 rad/s (约 46°/s)
- 最大关节加速度: 2.5 rad/s²
- 关节限位: 自动检查并限制在安全范围内

**笛卡尔空间控制** (`04_cartesian_control.py`, `05_round_demo.py`):
- 最大线速度: 0.8 m/s
- 最大线加速度: 0.3 m/s²
- 控制频率: 200 Hz

⚠️ **注意**: 如需调整速度参数，请修改代码中的 `v_max` 和 `a_max` 参数。

### 控制器切换

ROS 2 Control 框架要求在使用特定控制器前先激活它，同时停用冲突的控制器。示例代码会自动处理：

- **冲突控制器组**:
  - `joint_position_controller` ↔ `cart_pose_controller` ↔ `zero_force_dragging_controller`
  - 这些控制器不能同时激活

- **切换流程**:
  1. 检查目标控制器状态
  2. 停用冲突的控制器
  3. 等待资源释放（约 1.5 秒）
  4. 激活目标控制器
  5. 验证切换成功

## 自定义开发

可以基于这些示例创建自己的控制程序。基本结构如下：

```python
#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from geometry_msgs.msg import PoseStamped

class MyArmController(Node):
    def __init__(self):
        super().__init__('my_arm_controller')
        # 初始化发布者、订阅者等
        
    # 添加你的控制逻辑

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

### 常用话题和服务

**订阅话题**:
- `/joint_states` - 关节状态 (`sensor_msgs/JointState`)
- `/arm/end_pose` - 末端位姿 (`geometry_msgs/PoseStamped`)
- `/eye_in_hand/eye_in_hand/image_raw/image_compressed` - 相机压缩图像 (`sensor_msgs/CompressedImage`)

**发布话题**:
- `/joint_position_controller/commands` - 关节位置命令 (`std_msgs/Float64MultiArray`)
- `/cart_pose_controller/pose_cmd` - 笛卡尔位姿命令 (`geometry_msgs/PoseStamped`)
- `/gripper_controller/commands` - 夹爪命令 (`std_msgs/Float64MultiArray`)

**服务**:
- `/controller_manager/list_controllers` - 列出所有控制器
- `/controller_manager/switch_controller` - 切换控制器

## 常见问题

### Q: 为什么运动前需要切换控制模式?
A: ROS 2 Control 框架要求在使用特定控制器前先激活它，同时停用其他冲突的控制器。示例代码会自动处理这个过程。

### Q: 如何调整运动速度?
A: 在调用 `move_arm_joints_toppra()` 或 `move_arm_endpose_toppra()` 时传入 `v_max` 和 `a_max` 参数：
```python
arm_control.move_arm_joints_toppra(target_positions, v_max=1.0, a_max=3.0)
```

### Q: 轨迹规划是如何工作的?
A: 
- **关节空间**: 使用 TOPP-RA 在关节空间路径上进行时间最优参数化，保证速度/加速度约束
- **笛卡尔空间**: 位置使用线性插值 + TOPP-RA，方向使用 SLERP 进行四元数插值

### Q: 如何处理紧急停止?
A: 按 `Ctrl+C` 可以中断程序。建议在实际应用中：
- 添加紧急停止按钮处理
- 监听 `/emergency_stop` 话题
- 实现安全状态机

### Q: 如何获取当前关节角度?
A: 使用 `ArmStateMonitor` 类：
```python
monitor = ArmStateMonitor()
# 等待状态就绪
monitor.get_joint_state(timeout=5.0)
# 获取关节位置（包含所有关节）
positions = monitor.joint_position
# 获取机械臂关节位置（仅 arm_joint1-6）
arm_positions = monitor.arm_joint_position
```

### Q: 如何获取当前末端位姿?
A: 
```python
monitor = ArmStateMonitor()
# 等待状态就绪
pose_msg = monitor.get_end_pose_msg(timeout=5.0)
pose = pose_msg.pose  # geometry_msgs/Pose
# 或直接获取
pose = monitor.end_pose
```

### Q: 如何控制夹爪?
A: 使用 `GripperControl` 类或直接发布命令：
```python
from std_msgs.msg import Float64MultiArray

# 创建发布者
gripper_pub = node.create_publisher(Float64MultiArray, '/gripper_controller/commands', 10)

# 打开夹爪 (1.0)
msg = Float64MultiArray()
msg.data = [1.0]
gripper_pub.publish(msg)

# 关闭夹爪 (0.0)
msg.data = [0.0]
gripper_pub.publish(msg)
```

### Q: 相机查看器无法显示图像怎么办?
A: 
- 检查是否安装了 OpenCV: `pip3 install opencv-python`
- 如果通过 SSH 连接，使用 `ssh -X` 启用 X11 转发
- 设置 DISPLAY 环境变量: `export DISPLAY=:0`
- 程序会在无头模式下运行，仍会打印图像信息

## 更多信息

查看主 README.md 文件获取完整的 API 说明和更多技术文档。
