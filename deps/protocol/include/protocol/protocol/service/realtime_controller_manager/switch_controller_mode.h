#pragma once

#include "protocol/service.h"
#include "protocol/srv/switch_controller_mode.hpp"

namespace xr {
namespace realtime_controller_manager {
namespace service {

// 请求使能
SERVICE(SwitchControllerMode,
        "/realtime_controller_manager/switch_controller_mode",
        protocol::srv::SwitchControllerMode);

}  // namespace service
}  // namespace realtime_controller_manager
}  // namespace xr
