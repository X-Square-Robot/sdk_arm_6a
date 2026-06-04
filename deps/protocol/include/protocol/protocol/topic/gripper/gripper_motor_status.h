#pragma once

#include "protocol/msg/enum_gripper_motor_status.hpp"
#include "protocol/topic.h"
#include "std_msgs/msg/u_int8.hpp"

namespace xr {
namespace gripper {
namespace topic {

TOPIC(LeftGripperMotorStatus, "/gripper/gripper_motor_status/left", std_msgs::msg::UInt8, QoS::SystemDefaultQoS());

TOPIC(RightGripperMotorStatus, "/gripper/gripper_motor_status/right", std_msgs::msg::UInt8, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace gripper
}  // namespace xr
