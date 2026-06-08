#pragma once

#include <protocol/srv/set_whole_body_controller_config.hpp>

#include "protocol/service.h"

namespace xr {
namespace motion {
namespace service {

// 设置全身控制器配置
SERVICE(
        SetWholeBodyControllerConfig,
        "/whole_body_controller/set_config",
        protocol::srv::SetWholeBodyControllerConfig);
}  // namespace service
}  // namespace motion
}  // namespace xr

