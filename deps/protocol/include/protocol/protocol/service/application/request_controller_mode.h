#pragma once

#include "protocol/service.h"
#include "protocol/srv/request_controller_mode.hpp"

namespace xr {
namespace application {
namespace service {

// 切换controller模式，必须在整机空闲状态
SERVICE(RequestControllerMode, "/application/request_controller_mode", protocol::srv::RequestControllerMode);

}  // namespace service
}  // namespace application
}  // namespace xr
