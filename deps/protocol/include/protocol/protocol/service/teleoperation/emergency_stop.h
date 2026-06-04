#pragma once
#include "protocol/service.h"
#include "protocol/srv/emergency_stop.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 远程软急停功能
SERVICE(EmergencyStop, "/teleoperation/master/emergency_stop", protocol::srv::EmergencyStop);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
