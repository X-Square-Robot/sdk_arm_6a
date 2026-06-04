#pragma once

#include <std_msgs/msg/float64_multi_array.hpp>

#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {


TOPIC(LeftArmExtTorqueFeedback, "/teleoperation/master/left_arm_torque_ext_feedback", std_msgs::msg::Float64MultiArray, QoS::SystemDefaultQoS());
TOPIC(RightArmExtTorqueFeedback, "/teleoperation/master/right_arm_torque_ext_feedback", std_msgs::msg::Float64MultiArray, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
