#pragma once

#include "protocol/msg/system_report.hpp"
#include "protocol/topic.h"

namespace xr {
namespace system_monitor {
namespace topic {

// cpu, gpu负载，RAM使用率，cpu温度等
TOPIC(SystemReport, "/system_monitor/system_report", protocol::msg::SystemReport,QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace system_monitor
}  // namespace xr
