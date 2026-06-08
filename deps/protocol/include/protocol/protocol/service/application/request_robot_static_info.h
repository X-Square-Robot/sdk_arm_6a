#pragma once

#include "protocol/service.h"
#include "protocol/srv/request_robot_static_info.hpp"

namespace xr {
namespace application {
namespace service {

SERVICE(RequestRobotStaticInfo, "/application/request_robot_static_info", protocol::srv::RequestRobotStaticInfo);

}
}  // namespace application
}  // namespace xr
