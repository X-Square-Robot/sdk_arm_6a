#pragma once

#include "std_srvs/srv/trigger.hpp"
#include "protocol/service.h"

namespace xr {
namespace x2robot {
namespace service {

// 安全控制器控制电机清错误码服务
SERVICE(SafetyControllerReset, "/safety_controller/reset", std_srvs::srv::Trigger);
// 安全控制器控制电机上使能服务
SERVICE(SafetyControllerInit, "/safety_controller/init", std_srvs::srv::Trigger);
// 安全控制器控制电机下使能服务
SERVICE(SafetyControllerHalt, "/safety_controller/halt", std_srvs::srv::Trigger);

}  // namespace service
}  // namespace x2robot
}  // namespace xr
