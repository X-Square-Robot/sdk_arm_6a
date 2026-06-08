#pragma once

#include "protocol/msg/task_info.hpp"
#include "protocol/topic.h"

namespace xr {
namespace application {
namespace topic {

// 机器人任务状态发布
TOPIC(TaskInfo, "/application/task_info", protocol::msg::TaskInfo, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace application
}  // namespace xr
