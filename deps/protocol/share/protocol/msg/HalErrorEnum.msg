# Unit: HAL
# HAL获取状态超时
uint32 HEARTBEAT_TIMEOUT = 0x01
# 底盘板断连
uint32 CHASSIS_CONN_FAIL = 0x11
# 身体板断连
uint32 BODY_CONN_FAIL = 0x12
# 头部板断连
uint32 HEAD_CONN_FAIL = 0x13
# 电源板断连
uint32 POWER_CONN_FAIL = 0x14
# 头部板版本信息解析失败
uint32 PARSE_HEAD_VERSION_FAIL = 0x20
# 头部板云台状态数据解析失败
uint32 PARSE_HEAD_JOINT_FAIL = 0x21
# 头部板IMU数据解析失败
uint32 PARSE_HEAD_IMU_FAIL = 0x22
# 头部板日志数据解析失败
uint32 PARSE_HEAD_LOG_FAIL = 0x23
# 头部板电源状态数据解析失败
uint32 PARSE_HEAD_POWER_FAIL = 0x24
# 身体板版本信息解析失败
uint32 PARSE_BODY_VERSION_FAIL = 0x25
# 身体板云台状态数据解析失败
uint32 PARSE_BODY_HEAD_JOINT_FAIL = 0x26
# 身体板IMU数据解析失败
uint32 PARSE_BODY_IMU_FAIL = 0x27
# 身体板日志数据解析失败
uint32 PARSE_BODY_LOG_FAIL = 0x28
# 身体板电源系统状态数据解析失败
uint32 PARSE_BODY_POWER_FAIL = 0x29
# 底盘板版本信息解析失败
uint32 PARSE_CHASSIS_VERSION_FAIL = 0x2A
# 底盘板系统状态数据解析失败
uint32 PARSE_CHASSIS_POWER_FAIL = 0x2B
# 底盘板TOF传感器数据解析失败
uint32 PARSE_CHASSIS_TOF_FAIL = 0x2C
# 底盘板超声波传感器数据解析失败
uint32 PARSE_CHASSIS_ULTRASONIC_FAIL = 0x2D
# 底盘板IMU数据解析失败
uint32 PARSE_CHASSIS_IMU_FAIL = 0x2E
# 底盘板日志数据解析失败
uint32 PARSE_CHASSIS_LOG_FAIL = 0x2F
# 底盘板充电桩数据解析失败
uint32 PARSE_CHASSIS_ROBOT_STATION_INFO_FAIL = 0x30
# 底盘板里程计Odom数据解析失败
uint32 PARSE_CHASSIS_ODOM_FAIL = 0x31
# 身体板TOF传感器数据解析失败
uint32 PARSE_BODY_TOF_FAIL = 0x32
# 身体板超声波传感器数据解析失败
uint32 PARSE_BODY_ULTRASONIC_FAIL = 0x33
