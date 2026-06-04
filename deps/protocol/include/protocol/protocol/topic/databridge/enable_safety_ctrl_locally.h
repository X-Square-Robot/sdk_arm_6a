#pragma once
#include <std_msgs/msg/bool.hpp>

#include "protocol/topic.h"

namespace xr {
namespace databridge {
namespace topic {

// 本地安全控制状态发布topic
TOPIC(EnableSafetyCtrlLocally,
      "/databridge/slave/safety_ctrl_locally_status",
      std_msgs::msg::Bool,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace databridge
}  // namespace xr
