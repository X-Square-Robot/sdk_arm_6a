#pragma once

#include "protocol/service.h"
#include "std_srvs/srv/trigger.hpp"
namespace xr {
namespace application {
namespace service {

// 切换全身刚度服务
SERVICE(ToggleWholeBodyStiffness, "/application/toggle_whole_body_stiffness", std_srvs::srv::Trigger);

}  // namespace service
}  // namespace application
}  // namespace xr
