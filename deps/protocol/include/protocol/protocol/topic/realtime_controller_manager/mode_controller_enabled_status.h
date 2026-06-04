#pragma once

#include "protocol/msg/mode_controller_enabled_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace realtime_controller_manager {
namespace topic {

// 广播控制器使能状态
TOPIC(ModeControllerEnabledStatus,
      "/realtime_controller_manager/mode_controller_enabled_status",
      protocol::msg::ModeControllerEnabledStatus,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace realtime_controller_manager
}  // namespace xr
