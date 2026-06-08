#pragma once

#include "protocol/msg/power_fault_status.hpp"
#include "protocol/msg/power_channels_status.hpp"
#include "protocol/msg/power_emergency_info.hpp"
#include "protocol/msg/battery.hpp"
#include "protocol/msg/relay_switch_control.hpp"
#include "protocol/topic.h"

namespace xr {
namespace hal {
namespace topic {

// 电源板故障状态
TOPIC(PowerFaultStatus,
      "/hal/power/fault_status",
      protocol::msg::PowerFaultStatus,
      QoS::SystemDefaultQoS());

// 电源板多路电源状态
TOPIC(PowerChannelsStatus,
      "/hal/power/channels_status",
      protocol::msg::PowerChannelsStatus,
      QoS::SystemDefaultQoS());

// 电源板急停信息
TOPIC(PowerEmergencyInfo,
      "/hal/power/emergency_info",
      protocol::msg::PowerEmergencyInfo,
      QoS::SystemDefaultQoS());

// 电源板电池信息（沿用 Battery 消息）
TOPIC(PowerBattery,
      "/hal/power/battery",
      protocol::msg::Battery,
      QoS::SystemDefaultQoS());

// 电源板继电器开关控制
TOPIC(PowerRelayControl,
      "/hal/power/relay_control",
      protocol::msg::RelaySwitchControl,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace hal
}  // namespace xr

