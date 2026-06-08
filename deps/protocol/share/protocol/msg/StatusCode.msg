# status_code.msg
# 节点定频 + 事件触发上报的状态快照

std_msgs/Header header

uint8 domain           # 一级标识：系统域
uint8 unit             # 二级标识：域内单元

uint8 state_code       # 节点生命周期状态（为异常处理模块服务，异常处理时可能会需要额外的状态知晓节点当前的状态）
# 0 = UNINITIALIZED
# 1 = INITIALIZED
# 2 = RUNNING
# 3 = ERROR
# 4 = OFFLINE

UnitError[] error_code # 当前节点所有仍然存在的错误，不存在可为空
