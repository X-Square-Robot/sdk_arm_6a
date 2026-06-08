# joint_motor_status 索引规则
## 头部：没有特殊说明情况下，默认使用[pitch,yaw]的顺序。若三个自由度使用[roll,pitch,yaw]的顺序，严格按照rpy的顺序来。
## 机械臂：一定是从肩膀开始数从 0 ~ n
## 升降关节：只有一个电机

MotorStatus[] joint_motor_status
bool all_joints_healthy