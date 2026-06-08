#pragma once

#include "protocol/msg/monitor_info.hpp"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 整机monitor信息
TOPIC(MonitorInfo, "/teleoperation/master/monitor_info", protocol::msg::MonitorInfo, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
