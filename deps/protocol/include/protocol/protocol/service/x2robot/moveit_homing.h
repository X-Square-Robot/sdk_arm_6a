#pragma once

#include "std_srvs/srv/trigger.hpp"
#include "protocol/service.h"

namespace xr {
namespace x2robot {
namespace service {

// 调用moveit进行回零
SERVICE(MoveitHoming, "/moveit_homing_request", std_srvs::srv::Trigger);

}  // namespace service
}  // namespace x2robot
}  // namespace xr
