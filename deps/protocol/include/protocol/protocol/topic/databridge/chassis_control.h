#pragma once

#include <geometry_msgs/msg/twist.hpp>

#include "protocol/topic.h"

namespace xr {
namespace databridge {
namespace topic {

// 底盘控制指令发布topic
TOPIC(ChassisControl, "/databridge/master/chassis_control", geometry_msgs::msg::Twist, QoS::SystemDefaultQoS());
// 从机反馈底盘状态topic
TOPIC(SlaveChassisFeedback, "/databridge/slave/chasis_feedback", geometry_msgs::msg::Twist, QoS::SystemDefaultQoS());
// 主机广播底盘状态topic
TOPIC(MasterChassisFeedback, "/databridge/master/chassis_feedback", geometry_msgs::msg::Twist, QoS::SystemDefaultQoS());

// 控制端键盘控制底盘运动topic
TOPIC(MasterChassisControlOnKeyboard,
      "/databridge/master/chassis_control_on_keyboard",
      geometry_msgs::msg::Twist,
      QoS::SystemDefaultQoS());

// 机器人端键盘控制底盘运动topic
TOPIC(SlaveChassisControlOnKeyboard,
      "/databridge/slave/chassis_control_on_keyboard",
      geometry_msgs::msg::Twist,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace databridge
}  // namespace xr
