#pragma once

#include "protocol/msg/robot_station_infra_receiver.hpp"
#include "protocol/topic.h"

namespace xr {
namespace hal {
namespace topic {

// 待废弃 底盘基站信标接收信息
TOPIC(RobotStationInfraReceiver,
      "/hal/robot/station_infra_receiver",
      protocol::msg::RobotStationInfraReceiver,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace hal
}  // namespace xr
