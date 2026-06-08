#pragma once

#include "protocol/service.h"
#include "protocol/srv/request_robot_system_current_state.hpp"

namespace xr {
namespace application {
namespace service {

SERVICE(RequestRobotSystemCurrentState,
        "/application/request_robot_system_current_state",
        protocol::srv::RequestRobotSystemCurrentState);

}
}  // namespace application
}  // namespace xr
