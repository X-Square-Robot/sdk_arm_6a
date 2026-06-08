#pragma once

#include "protocol/msg/lift_control.hpp"
#include "protocol/topic.h"

namespace xr {
namespace hal {
namespace topic {

// 腰部控制话题
TOPIC(LiftControl, "/hal/lift/control", protocol::msg::LiftControl, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace hal
}  // namespace xr