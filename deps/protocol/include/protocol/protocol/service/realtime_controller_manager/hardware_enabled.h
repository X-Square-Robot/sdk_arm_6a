#pragma once

#include "controller_manager_msgs/srv/set_hardware_component_state.hpp"
#include "protocol/service.h"
#include "protocol/srv/hardware_enabled.hpp"

namespace xr {
namespace realtime_controller_manager {
namespace service {

// 请求使能
SERVICE(HardwareEnabled, "/realtime_controller_manager/hardware_enabled", protocol::srv::HardwareEnabled);

// ros2设置硬件使能的系统服务
SERVICE(SetHardwareComponentState,
        "/controller_manager/set_hardware_component_state",
        controller_manager_msgs::srv::SetHardwareComponentState);

}  // namespace service
}  // namespace realtime_controller_manager
}  // namespace xr
