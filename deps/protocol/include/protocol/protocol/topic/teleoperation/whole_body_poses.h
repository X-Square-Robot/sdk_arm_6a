#pragma once

#include "protocol/msg/whole_body_poses_stamped.hpp"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 机器人端转发全身位姿消息
TOPIC(WholeBodyPoses,
      "/teleoperation/slave/whole_body_poses",
      protocol::msg::WholeBodyPosesStamped,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
