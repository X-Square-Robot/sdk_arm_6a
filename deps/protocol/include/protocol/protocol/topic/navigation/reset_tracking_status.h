#pragma once

#include <std_msgs/msg/empty.hpp>

#include "protocol/topic.h"

namespace xr {
namespace navigation {
namespace topic {

// 结束导航
TOPIC(ResetTrackingStatus, "/reset_tracking_status", std_msgs::msg::Empty, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace navigation
}  // namespace xr
