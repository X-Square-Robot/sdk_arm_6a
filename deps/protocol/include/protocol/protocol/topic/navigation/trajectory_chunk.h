#pragma once

#include <std_msgs/msg/string.hpp>

#include "protocol/topic.h"

namespace xr {
namespace navigation {
namespace topic {

// 位置跟踪控制
TOPIC(TrajectoryChunk, "/trajectory_chunk", std_msgs::msg::String,
      QoS::SystemDefaultQoS());

} // namespace topic
} // namespace navigation
} // namespace xr
