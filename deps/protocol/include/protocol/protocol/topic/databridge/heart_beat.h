#pragma once

#include "protocol/msg/databridge_heartbeat.hpp"
#include "protocol/topic.h"

namespace xr {
namespace databridge {
namespace topic {

// 心跳信息
TOPIC(HeartBeat, "/databridge/heartbeat", protocol::msg::DatabridgeHeartbeat, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace databridge
}  // namespace xr
