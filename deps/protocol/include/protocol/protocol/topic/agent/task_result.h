#pragma once

#include "protocol/msg/task_result.hpp"
#include "protocol/topic.h"

namespace xr {
namespace agent {
namespace topic {

// UI 任务结果（主端）：与 databridge `/databridge/master/task_result` 相同 `protocol/msg/TaskResult`（含 reason）；
// teleoperation master 订阅本 topic 与 databridge 结果同源合并，经 MasterControlData.agent_task_result 透传到从端 `/teleoperation/slave/task_result`
TOPIC(TaskResult, "/ui_agent/task_result", protocol::msg::TaskResult, QoS::SystemDefaultQoS());

// 任务执行结果转发给 Agent（从端转发，teleoperation slave → agent_sdk）
TOPIC(TaskResultInternal, "/agent/task_result", protocol::msg::TaskResult, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace agent
}  // namespace xr
