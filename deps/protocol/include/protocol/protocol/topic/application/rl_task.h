#pragma once

#include "protocol/topic.h"
#include "protocol/msg/rl_task_info.hpp"
#include "std_msgs/msg/string.hpp"

namespace xr {
namespace application {
namespace topic {

// 广播当前 rl 任务的数值信息
TOPIC(RlTaskInfoChangeNotify,
      "/application/rl_task_info_change_notify",
      protocol::msg::RlTaskInfo,
      QoS::SystemDefaultQoS());

// rl任务：广播current_reward
TOPIC(RlTaskReward, "/current_reward", std_msgs::msg::String, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace application
}  // namespace xr
