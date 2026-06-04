#pragma once

#include <std_msgs/msg/float32.hpp>
#include <std_msgs/msg/float64.hpp>

#include "protocol/topic.h"

namespace xr {
namespace databridge {
namespace topic {

// 主设备发布左臂gripper控制指令topic
TOPIC(LeftGripperControl, "/databridge/master/left_gripper_control", std_msgs::msg::Float64, QoS::SystemDefaultQoS());
// 主设备发布右臂gripper控制指令topic
TOPIC(RightGripperControl, "/databridge/master/right_gripper_control", std_msgs::msg::Float64, QoS::SystemDefaultQoS());

// 从机左夹爪数据反馈topic
TOPIC(LeftGripperFeedback, "/databridge/slave/left_gripper_feedback", std_msgs::msg::Float32, QoS::SystemDefaultQoS());
// 从机右夹爪数据反馈topic
TOPIC(RightGripperFeedback,
      "/databridge/slave/right_gripper_feedback",
      std_msgs::msg::Float32,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace databridge
}  // namespace xr
