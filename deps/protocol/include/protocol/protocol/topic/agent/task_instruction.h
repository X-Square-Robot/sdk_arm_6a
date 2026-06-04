#pragma once

#include "protocol/msg/task_instruction.hpp"

#include "protocol/topic.h"

namespace xr {
namespace agent {
namespace topic {

// Agent 下发任务指令（从端内部，agent_sdk → teleoperation slave）
TOPIC(TaskInstructionInternal, "/agent/task_instruction", protocol::msg::TaskInstruction, QoS::SystemDefaultQoS());

// Agent 下发任务指令给 UI 展示（主端转发，teleoperation master → UI/databridge）
TOPIC(TaskInstruction, "/agent_ui/task_instruction", protocol::msg::TaskInstruction, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace agent
}  // namespace xr
