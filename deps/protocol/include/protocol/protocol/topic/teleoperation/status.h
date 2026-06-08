#pragma once

#include "protocol/msg/system_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 主设备端整机系统状态发布topic
TOPIC(MasterSystemStatus, "/teleoperation/master/system_status", protocol::msg::SystemStatus, QoS::SystemDefaultQoS());
// 从设备端整机系统状态发布topic
TOPIC(SlaveSystemStatus, "/teleoperation/slave/system_status", protocol::msg::SystemStatus, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr