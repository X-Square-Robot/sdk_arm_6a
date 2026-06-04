# Unit: NET_MONITOR
# 网络监控节点获取状态超时
uint32 HEARTBEAT_TIMEOUT = 0x01
# 没有任何网络连接
uint32 NO_NETWORK = 0x11
# 无法访问公网
uint32 NO_CONNECTIVITY = 0x12
# 路由配置错误
uint32 INVALID_DEFAULT_ROUTE = 0x14
# 没有WIFI可以连接
uint32 NO_WIFI_SSID = 0x21
# 连接WiFi失败
uint32 FAILED_WIFI_CONNECTION = 0x22
# 没有5G模块
uint32 NO_MODEM = 0x31
# 没有SIM卡
uint32 NO_SIM_CARD = 0x32
# 没有信号，检查射频信号
uint32 NO_MODEM_SIGNAL = 0x33
# 基站入网失败，联系ISP
uint32 FAILED_MODEM_REGISTRATION = 0x34
