#pragma once

#include "sensor_msgs/msg/range.hpp"
#include "protocol/topic.h"

namespace xr {
namespace hal {
namespace topic {

// 底盘TOF
TOPIC(ChassisTof1, "/hal/chassis/tof1", sensor_msgs::msg::Range, QoS::SystemDefaultQoS());
TOPIC(ChassisTof2, "/hal/chassis/tof2", sensor_msgs::msg::Range, QoS::SystemDefaultQoS());

// 机身TOF
TOPIC(BodyFrontChestTof, "/hal/body/front_chest_tof", sensor_msgs::msg::Range, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace hal
}  // namespace xr