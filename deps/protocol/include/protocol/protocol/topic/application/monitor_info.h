#pragma once

#include "protocol/msg/monitor_info.hpp"
#include "protocol/topic.h"

namespace xr {
namespace application {
namespace topic {

// 整机monitor信息
TOPIC(MonitorInfo, "/application/monitor_info", protocol::msg::MonitorInfo, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace application
}  // namespace xr
