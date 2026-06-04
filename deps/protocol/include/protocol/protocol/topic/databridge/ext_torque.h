#pragma once

#include <std_msgs/msg/float64_multi_array.hpp>

#include "protocol/topic.h"

namespace xr {
namespace databridge {
namespace topic {

// 左从臂外力反馈topic
TOPIC(LeftArmExtTorqueFeedback, "/databridge/slave/left_arm_torque_ext_feedback", std_msgs::msg::Float64MultiArray, QoS::SystemDefaultQoS());
// 右从臂外力反馈topic
TOPIC(RightArmExtTorqueFeedback, "/databridge/slave/right_arm_torque_ext_feedback", std_msgs::msg::Float64MultiArray, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace databridge
}  // namespace xr
