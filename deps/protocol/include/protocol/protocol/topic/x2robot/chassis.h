#pragma once

#include <geometry_msgs/msg/twist.hpp>

#include "protocol/topic.h"

namespace xr {
namespace x2robot {
namespace topic {

// 底盘速度控制
TOPIC(ChassisCmdVel, "/chassis/cmd_vel", geometry_msgs::msg::Twist, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace x2robot
}  // namespace xr
