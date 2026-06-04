#pragma once

#include "protocol/msg/relay_switch_control.hpp"
#include "protocol/msg/relay_switch_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace hal {
namespace topic {

// 继电器板开关控制
TOPIC(RelaySwitchControl, "/hal/relay/switch_control", protocol::msg::RelaySwitchControl, QoS::SystemDefaultQoS());

// 继电器板开关状态
TOPIC(RelaySwitchStatus, "/hal/relay/switch_status", protocol::msg::RelaySwitchStatus, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace hal
}  // namespace xr
