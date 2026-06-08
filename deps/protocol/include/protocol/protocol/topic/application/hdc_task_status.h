#pragma once

#include "protocol/msg/hdc_task_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace application {
namespace topic {

// HDC 任务状态日志（整机状态 + 采集任务状态），通过 msg_type 区分
TOPIC(HdcTaskStatus, "/application/hdc/task_status", protocol::msg::HdcTaskStatus, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace application
}  // namespace xr
