#pragma once

#include "protocol/msg/robot_base_version.hpp"
#include "protocol/topic.h"

namespace xr {
namespace hal {
namespace topic {

// 机器人各控制器版本信息
TOPIC(RobotBaseVersion, "/hal/robot/base_version", protocol::msg::RobotBaseVersion, QoS::ConfigMessageQoS());

}  // namespace topic
}  // namespace hal
}  // namespace xr