#pragma once

#include "controller_manager_msgs/srv/switch_controller.hpp"
#include "protocol/service.h"

namespace xr {
namespace x2robot {
namespace service {

// 整机模式切换命令转发服务
SERVICE(SwitchController, "/controller_manager/switch_controller", controller_manager_msgs::srv::SwitchController);

}  // namespace service
}  // namespace x2robot
}  // namespace xr