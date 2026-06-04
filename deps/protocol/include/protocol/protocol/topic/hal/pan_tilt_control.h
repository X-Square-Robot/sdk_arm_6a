#pragma once

#include <std_msgs/msg/float64_multi_array.hpp>

#include "protocol/msg/head_pan_tilt_control.hpp"
#include "protocol/topic.h"

namespace xr {
namespace hal {
namespace topic {

// 头部云台控制(待废弃)
TOPIC(HeadPanTiltControl, "/hal/head/pan_tilt_control", protocol::msg::HeadPanTiltControl, QoS::SystemDefaultQoS());

// 头部云台控制
TOPIC(HeadPositionControlCommand, "/head_position_controller/commands", std_msgs::msg::Float64MultiArray, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace hal
}  // namespace xr