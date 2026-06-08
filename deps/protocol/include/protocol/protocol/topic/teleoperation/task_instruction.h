#pragma once

#include "protocol/msg/task_instruction.hpp"

#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 任务指令转发（主端，teleoperation master → UI/databridge）
TOPIC(TaskInstruction,
      "/teleoperation/master/task_instruction",
      protocol::msg::TaskInstruction,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
