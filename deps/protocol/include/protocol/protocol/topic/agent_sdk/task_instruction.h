#pragma once

#include "protocol/msg/task_instruction.hpp"

#include "protocol/topic.h"

namespace xr {
namespace agent_sdk {
namespace topic {

// 任务指令下发（从端内部，agent_sdk → teleoperation slave）
TOPIC(TaskInstruction, "/agent/task_instruction", protocol::msg::TaskInstruction, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace agent_sdk
}  // namespace xr
