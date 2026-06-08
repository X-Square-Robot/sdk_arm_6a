#pragma once

#include "protocol/msg/chassis_info.hpp"
#include "protocol/topic.h"

namespace xr {
namespace hal {
namespace topic {

TOPIC(ChassisInfo,
      "/hal/chassis/chassis_info",
      protocol::msg::ChassisInfo,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace hal
}  // namespace xr
