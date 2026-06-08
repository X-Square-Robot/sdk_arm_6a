#pragma once

#include "protocol/service.h"
#include "x2robot_msgs/srv/switch_robot_control_mode.hpp"

namespace xr {
namespace x2robot {
namespace service {

// 实时控制器模式切换命令转发服务
SERVICE(SwitchRobotControlMode, "/switch_realtime_controller_mode", x2robot_msgs::srv::SwitchRobotControlMode);

}  // namespace service
}  // namespace x2robot
}  // namespace xr