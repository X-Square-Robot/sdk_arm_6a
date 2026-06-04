#pragma once

#include <protocol/srv/set_whole_body_controller_mode.hpp>

#include "protocol/service.h"

namespace xr {
namespace motion {
namespace service {

// 设置全身控制器模式
SERVICE(
        SetWholeBodyControllerMode,
        "/whole_body_controller/set_control_mode",
        protocol::srv::SetWholeBodyControllerMode);
}  // namespace service
}  // namespace motion
}  // namespace xr
