#pragma once

#include "x2robot_msgs/srv/moveit_group_state_request.hpp"
#include "protocol/service.h"

namespace xr {
namespace x2robot {
namespace service {

SERVICE(MoveitGroupState, "/moveit_group_state_request", x2robot_msgs::srv::MoveitGroupStateRequest);

}  // namespace service
}  // namespace x2robot
}  // namespace xr
