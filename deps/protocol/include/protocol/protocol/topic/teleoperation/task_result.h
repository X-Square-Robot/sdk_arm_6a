#pragma once

#include "protocol/msg/task_result.hpp"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 任务执行结果转发（从端，teleoperation slave → agent_sdk）
TOPIC(TaskResult, "/teleoperation/slave/task_result", protocol::msg::TaskResult, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
