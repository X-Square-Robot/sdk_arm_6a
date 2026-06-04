# Unit: QP_CONTROLLER
# 控制器状态上报超时
uint32 HEARTBEAT_TIMEOUT = 0x01
# 配置加载正常
uint32 CONFIG_OK = 0x10
# 必需参数缺失
uint32 PARAM_MISSING = 0x11
# 参数取值非法（范围/类型）
uint32 PARAM_INVALID = 0x12
# URDF 解析失败
uint32 URDF_PARSE_FAILED = 0x13
# Pinocchio model 构建失败
uint32 MODEL_BUILD_FAILED = 0x14
# 配置引用的 frame 在模型中不存在
uint32 FRAME_NOT_FOUND = 0x15
# 配置引用的 joint 在模型中不存在
uint32 JOINT_NOT_FOUND = 0x16
# 参数维度与模型不匹配
uint32 CONFIG_DIM_MISMATCH = 0x17
# 硬件接口正常
uint32 HW_INTERFACE_OK = 0x20
# 请求的 state interface 未被导出
uint32 STATE_INTERFACE_MISSING = 0x21
# 请求的 command interface 未被导出
uint32 COMMAND_INTERFACE_MISSING = 0x22
# 读取到 NaN/Inf 的关节状态
uint32 STATE_READ_NAN = 0x23
# 状态值长时间未更新
uint32 STATE_STALE = 0x24
# 向 command interface 写入失败
uint32 COMMAND_WRITE_FAILED = 0x25
# 运动学/动力学计算正常
uint32 KINEMATICS_OK = 0x30
# 正运动学计算失败
uint32 FK_FAILED = 0x31
# Jacobian 计算失败
uint32 JACOBIAN_FAILED = 0x32
# Jacobian 接近奇异（条件数过大）
uint32 JACOBIAN_SINGULAR = 0x33
# CRBA/RNEA 等动力学计算失败
uint32 DYNAMICS_FAILED = 0x34
# 运动学/动力学输出含 NaN/Inf
uint32 NON_FINITE_MODEL_OUTPUT = 0x35
# QP 求解正常
uint32 QP_OK = 0x40
# QP 问题构建失败
uint32 QP_SETUP_FAILED = 0x41
# QP 不可行（约束冲突）
uint32 QP_INFEASIBLE = 0x42
# QP 无界
uint32 QP_UNBOUNDED = 0x43
# 达到最大迭代次数但未收敛
uint32 QP_MAX_ITER = 0x44
# 数值问题（Hessian 非正定等）
uint32 QP_NUMERICAL = 0x45
# 求解超过实时预算
uint32 QP_SOLVER_TIMEOUT = 0x46
# 求解结果包含 NaN/Inf
uint32 QP_SOLUTION_NAN = 0x47
# 任务/约束正常
uint32 TASK_OK = 0x50
# 引用了未注册的 task
uint32 TASK_NOT_REGISTERED = 0x51
# task 输入/输出维度与模型不匹配
uint32 TASK_DIM_MISMATCH = 0x52
# task 更新阶段异常
uint32 TASK_UPDATE_FAILED = 0x53
# 软约束超限
uint32 CONSTRAINT_VIOLATED = 0x54
# 轮式 no-slip 约束偏差过大
uint32 ROLLING_CONSTRAINT_SLIP = 0x55
# 参考指令正常
uint32 REFERENCE_OK = 0x60
# 长时间未收到参考指令，已切换到 hold
uint32 REFERENCE_TIMEOUT = 0x61
# 参考指令含 NaN/Inf，已丢弃
uint32 REFERENCE_NAN = 0x62
# 参考指令维度错误
uint32 REFERENCE_DIM_MISMATCH = 0x63
# 参考指令跳变过大，已限幅
uint32 REFERENCE_JUMP = 0x64
# 参考位姿超出可达工作空间
uint32 REFERENCE_OUT_OF_WORKSPACE = 0x65
# 安全状态正常
uint32 SAFETY_OK = 0x70
# 关节位置触限
uint32 JOINT_POSITION_LIMIT = 0x71
# 关节速度触限（已饱和）
uint32 JOINT_VELOCITY_LIMIT = 0x72
# 关节力矩触限（已饱和）
uint32 JOINT_TORQUE_LIMIT = 0x73
# 末端速度触限
uint32 CARTESIAN_VELOCITY_LIMIT = 0x74
# 自碰撞即将发生
uint32 SELF_COLLISION_IMMINENT = 0x75
# 急停已触发
uint32 EMERGENCY_STOP = 0x76
# 里程计/滤波正常
uint32 ODOM_OK = 0x80
# 里程计/位姿跳变被检测到
uint32 ODOM_JUMP_DETECTED = 0x81
# 滤波器发散
uint32 FILTER_DIVERGED = 0x82
# 滤波器输入含 NaN/Inf
uint32 FILTER_INPUT_NAN = 0x83
# 实时性正常
uint32 TIMING_OK = 0x90
# 单次 update 超出控制周期
uint32 CONTROL_LOOP_OVERRUN = 0x91
# update 传入的 period 非法
uint32 PERIOD_INVALID = 0x92
# 时间戳回退或跳变
uint32 CLOCK_JUMP = 0x93
