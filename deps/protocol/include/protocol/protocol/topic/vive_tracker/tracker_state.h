#pragma once

#include "protocol/msg/enum_vive_tracker_status.hpp"
#include "protocol/topic.h"
#include "std_msgs/msg/u_int8.hpp"

namespace xr {
namespace vive_tracker {
namespace topic {

TOPIC(ViveTrackerState, "/vive_tracker/state", std_msgs::msg::UInt8, QoS::SystemDefaultQoS());

}
}  // namespace vive_tracker
}  // namespace xr
