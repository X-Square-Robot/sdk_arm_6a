#pragma once

#include "controller_manager_msgs/srv/list_controllers.hpp"
#include "protocol/service.h"

namespace xr {
namespace x2robot {
namespace service {

// 控制器列表查询服务
SERVICE(ListControllers, "/controller_manager/list_controllers", controller_manager_msgs::srv::ListControllers);

}  // namespace service
}  // namespace x2robot
}  // namespace xr