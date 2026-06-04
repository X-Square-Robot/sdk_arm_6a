#pragma once

#include "protocol/msg/task_result.hpp"
#include "protocol/topic.h"

namespace xr {
namespace databridge {
namespace topic {

// 任务执行结果（主端 databridge → teleoperation master）
TOPIC(TaskResult, "/databridge/master/task_result", protocol::msg::TaskResult, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace databridge
}  // namespace xr
