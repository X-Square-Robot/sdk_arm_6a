#pragma once

#include "protocol/msg/chest_light_control.hpp"
#include "protocol/topic.h"

namespace xr {
namespace hal {
namespace topic {

// 机器人基座模式控制
TOPIC(ChestLightControl,
      "/hal/robot/chest_light_control",
      protocol::msg::ChestLightControl,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace hal
}  // namespace xr
