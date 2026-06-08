#pragma once

#include "protocol/msg/teleoperation_heartbeat.hpp"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 心跳信息
TOPIC(HeartBeat, "/teleoperation/heartbeat", protocol::msg::TeleoperationHeartbeat, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
