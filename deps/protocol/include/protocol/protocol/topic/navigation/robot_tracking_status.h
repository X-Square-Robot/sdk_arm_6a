#pragma once

#include <std_msgs/msg/u_int8.hpp>

#include "protocol/topic.h"

namespace xr {
namespace navigation {
namespace topic {

// 导航状态发布topic
TOPIC(RobotTrackingStatus, "/robot_tracking_status", std_msgs::msg::UInt8, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace navigation
}  // namespace xr
