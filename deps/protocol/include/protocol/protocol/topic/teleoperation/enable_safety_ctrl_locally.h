#pragma once
#include <std_msgs/msg/bool.hpp>

#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 广播bag管理状态
TOPIC(EnableSafetyCtrlLocally,
      "/teleoperation/master/safety_ctrl_locally_status",
      std_msgs::msg::Bool,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
