#pragma once

#include "controller_manager_msgs/msg/controller_manager_activity.hpp"
#include "protocol/topic.h"

namespace xr {
namespace realtime_controller_manager {
namespace topic {

// 硬件组建和控制器使能状态
TOPIC(ControllerManagerActivity,
      "/controller_manager/activity",
      controller_manager_msgs::msg::ControllerManagerActivity,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace realtime_controller_manager
}  // namespace xr
