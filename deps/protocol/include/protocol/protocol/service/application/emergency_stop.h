#pragma once
#include "protocol/service.h"
#include "protocol/srv/emergency_stop.hpp"

namespace xr {
namespace application {
namespace service {

// 软急停功能，触发后整机停止运动
SERVICE(EmergencyStop, "/application/emergency_stop", protocol::srv::EmergencyStop);

}  // namespace service
}  // namespace application
}  // namespace xr
