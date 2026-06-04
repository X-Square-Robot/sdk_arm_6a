#pragma once

#include "protocol/msg/state_light_control.hpp"
#include "protocol/topic.h"

namespace xr {
namespace hal {
namespace topic {

// 机器人状态灯控制
TOPIC(StateLightControl,
      "/hal/robot/state_light_control",
      protocol::msg::StateLightControl,
      QoS::SystemDefaultQoS());
}  // namespace topic
}  // namespace hal
}  // namespace xr
