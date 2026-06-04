#pragma once

#include <geometry_msgs/msg/twist.hpp>

#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 转发主设备的底盘控制指令topic
TOPIC(ChassisControl, "/teleoperation/slave/chassis_control", geometry_msgs::msg::Twist, QoS::SystemDefaultQoS());

// 转发从设备的地盘状态反馈topic
TOPIC(ChassisFeedback, "/teleoperation/master/chassis_feedback", geometry_msgs::msg::Twist, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
