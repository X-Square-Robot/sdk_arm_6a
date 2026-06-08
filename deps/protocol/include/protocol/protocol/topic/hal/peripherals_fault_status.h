#pragma once

#include "protocol/msg/robot_peripherals_fault_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace hal {
namespace topic {

// 机器人外设故障状态
TOPIC(RobotPeripheralsFaultStatus,
      "/hal/robot/peripherals_fault_status",
      protocol::msg::RobotPeripheralsFaultStatus,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace hal
}  // namespace xr