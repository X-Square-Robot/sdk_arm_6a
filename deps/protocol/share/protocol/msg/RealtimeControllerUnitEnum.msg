# Unit: REALTIME_CONTROLLER
# 安全控制器状态获取超时
uint32 HEARTBEAT_TIMEOUT = 0x01
# 正常工作状态
uint32 IS_WORKING = 0x10
# 执行器控制模式切换中
uint32 IS_CONTROLMODECHANGED = 0x11
# 插值轨迹运行中
uint32 IS_TRAJRUNNING = 0x12
# 碰撞回退
uint32 IS_BACKOFF = 0x13
# 限位回退
uint32 IS_AVOIDLIMITS = 0x14
# 软急停，执行器下使能
uint32 IS_SOFTSTOP = 0x15
# 硬急停，执行器下电
uint32 IS_ESTOPPED = 0x16
# 执行器正常，等待启动
uint32 IS_READYFORRESETACK = 0x17
# 内部错误
uint32 IS_INTERNALERROR = 0x18
# 升降腰正在回零
uint32 IS_LIFTWAISTHOMING = 0x19
