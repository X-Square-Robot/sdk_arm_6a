#pragma once

#include "protocol/service.h"
#include "protocol/srv/request_robot_dynamic_info.hpp"

namespace xr {
namespace application {
namespace service {

SERVICE(RequestRobotDynamicInfo, "/application/request_robot_dynamic_info", protocol::srv::RequestRobotDynamicInfo);

}
}  // namespace application
}  // namespace xr
