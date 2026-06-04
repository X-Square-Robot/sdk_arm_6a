#pragma once

#include "protocol/msg/chassis_beep_control.hpp"
#include "protocol/topic.h"

namespace xr {
namespace hal {
namespace topic {

// 底盘TOF
TOPIC(ChassisBeepControl, "/hal/chassis/beep_control", protocol::msg::ChassisBeepControl, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace hal
}  // namespace xr
