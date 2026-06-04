#pragma once

#include "protocol/msg/task_info.hpp"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 机器人任务状态发布
TOPIC(RobotTaskInfo,
      "/teleoperation/master/robot_task_info_feedback",
      protocol::msg::TaskInfo,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
