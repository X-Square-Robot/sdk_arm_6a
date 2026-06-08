#pragma once

#include <std_msgs/msg/float32.hpp>
#include <std_msgs/msg/float64.hpp>

#include "protocol/group.h"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 从设备转发左臂gripper控制指令topic
TOPIC(LeftGripperControl, "/teleoperation/slave/left_gripper_control", std_msgs::msg::Float64, QoS::SystemDefaultQoS());
// 从设备转发右臂gripper控制指令topic
TOPIC(RightGripperControl,
      "/teleoperation/slave/right_gripper_control",
      std_msgs::msg::Float64,
      QoS::SystemDefaultQoS());

// 主设备转发左臂gripper状态数据反馈topic
TOPIC(LeftGripperFeedback,
      "/teleoperation/master/left_gripper_feedback",
      std_msgs::msg::Float32,
      QoS::SystemDefaultQoS());
// 主设备转发右臂gripper状态数据反馈topic
TOPIC(RightGripperFeedback,
      "/teleoperation/master/right_gripper_feedback",
      std_msgs::msg::Float32,
      QoS::SystemDefaultQoS());

using GripperFeedbackGroup = TopicGroup<LeftGripperFeedback, RightGripperFeedback>;
using GripperControlGroup = TopicGroup<LeftGripperControl, RightGripperControl>;

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
