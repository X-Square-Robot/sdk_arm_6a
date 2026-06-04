#pragma once

#include <protocol/srv/request_is_at_home.hpp>

#include "protocol/service.h"

namespace xr {
namespace realtime_controller_manager {
namespace service {

// 请求机器人是否在回零位置
SERVICE(IsRobotAtHome, "/realtime_controller_manager/is_robot_at_home", protocol::srv::RequestIsAtHome);

}  // namespace service
}  // namespace realtime_controller_manager
}  // namespace xr
