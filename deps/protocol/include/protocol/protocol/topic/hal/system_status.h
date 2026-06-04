#pragma once

#include "protocol/msg/chassis_system_status.hpp"
#include "protocol/msg/body_power_system_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace hal {
namespace topic {

// 底盘系统状态
TOPIC(ChassisSystemStatus, "/hal/chassis/system_status", protocol::msg::ChassisSystemStatus, QoS::SystemDefaultQoS());

// 机身电源系统状态
TOPIC(BodyPowerSystemStatus, "/hal/body/power_system_status", protocol::msg::BodyPowerSystemStatus, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace hal
}  // namespace xr