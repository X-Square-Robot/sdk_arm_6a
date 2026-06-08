#pragma once

#include "protocol/service.h"
#include "protocol/srv/request_controller_mode.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 请求控制器模式服务
SERVICE(RequestControllerMode, "/teleoperation/master/request_controller_mode", protocol::srv::RequestControllerMode);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
