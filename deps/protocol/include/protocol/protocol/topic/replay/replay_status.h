#pragma once

#include "protocol/msg/replay_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace replay {
namespace topic {

// 广播bag录制状态
TOPIC(ReplayStatus, "/replay/status", protocol::msg::ReplayStatus, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace replay
}  // namespace xr
