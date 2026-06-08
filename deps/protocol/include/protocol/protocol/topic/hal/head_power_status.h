#pragma once

#include "protocol/msg/head_power_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace hal {
namespace topic {

// 头部云台
TOPIC(HeadPowerStatus, "/hal/head/power_status", protocol::msg::HeadPowerStatus, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace hal
}  // namespace xr