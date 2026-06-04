#pragma once

#include "protocol/service.h"
#include "protocol/srv/robot_charger_control.hpp"

namespace xr {
namespace hal {
namespace service {

// 机器人充电器控制
SERVICE(RobotChargerControl, "/hal/robot/charger_control", protocol::srv::RobotChargerControl);

}  // namespace service
}  // namespace hal
}  // namespace xr