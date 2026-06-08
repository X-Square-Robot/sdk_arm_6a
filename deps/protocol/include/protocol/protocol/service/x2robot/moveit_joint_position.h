#pragma once

#include "x2robot_msgs/srv/moveit_joint_position_request.hpp"
#include "protocol/service.h"

namespace xr {
namespace x2robot {
namespace service {

// 调用moveit进行关节位置控制
SERVICE(MoveitJointPosition, "/moveit_joint_position_request", x2robot_msgs::srv::MoveitJointPositionRequest);

}  // namespace service
}  // namespace x2robot
}  // namespace xr
