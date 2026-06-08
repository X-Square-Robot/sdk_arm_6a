# Unit: MOVEIT_SERVER
# moveit server获取状态超时
uint32 HEARTBEAT_TIMEOUT = 0x01
# 规划与执行成功
uint32 SUCCESS = 0x10
# 目标无效
uint32 INVALID_TARGET = 0x11
# 未成功获取当前位置
uint32 INVALID_CURRENT_POS = 0x12
# Moveit规划服务(/move_action)未就绪
uint32 PLANING_ACTION_NOT_READY = 0x13
# 规划请求被拒绝
uint32 PLANING_ACTION_REJECTED = 0x14
# 规划超时
uint32 PLANING_TIMEOUT = 0x15
# 规划失败
uint32 PLANING_FAILED = 0x16
# 执行轨迹服务(/whole_body_joint_trajectory_controller/follow_joint_trajectory)未就绪
uint32 EXECUTING_ACTION_NOT_READY = 0x17
# 轨迹执行请求被拒绝
uint32 EXECUTING_ACTION_REJECTED = 0x18
# 轨迹执行超时
uint32 EXECUTING_TIMEOUT = 0x19
# 轨迹执行失败
uint32 EXECUTING_FAILED = 0x1A
# 执行过程中出现异常
uint32 EXCEPTION = 0x1B
