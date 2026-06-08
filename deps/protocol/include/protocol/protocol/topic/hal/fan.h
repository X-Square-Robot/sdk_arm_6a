#pragma once

#include "protocol/msg/body_fan_control.hpp"
#include "protocol/topic.h"

namespace xr {
namespace hal {
namespace topic {

// 底盘TOF
TOPIC(BodyFanControl, "/hal/body/fan_control", protocol::msg::BodyFanControl, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace hal
}  // namespace xr
