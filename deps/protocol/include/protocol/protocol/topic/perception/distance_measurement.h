#pragma once

#include "protocol/msg/distance_measurement.hpp"
#include "protocol/topic.h"

namespace protocol {
namespace topic {
namespace perception {

// 夹爪碰撞检测距离测量
TOPIC(DistanceMeasurement, "/arm/distance_measurement",
      protocol::msg::DistanceMeasurement, QoS::SystemDefaultQoS());

}  // namespace perception
}  // namespace topic
}  // namespace protocol

