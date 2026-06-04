#pragma once

#include "protocol/msg/robot_station_info.hpp"
#include "protocol/topic.h"

namespace xr {
namespace hal {
namespace topic {

// 底盘基站信息
TOPIC(RobotStationInfo,
      "/hal/robot/station_info",
      protocol::msg::RobotStationInfo,
      QoS::SystemDefaultQoS());
}  // namespace topic
}  // namespace hal
}  // namespace xr
