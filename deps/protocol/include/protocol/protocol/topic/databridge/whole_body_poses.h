#pragma once

#include "protocol/msg/whole_body_poses_stamped.hpp"
#include "protocol/topic.h"

namespace xr {
namespace databridge {
namespace topic {

// 全身位姿话题发布
TOPIC(WholeBodyPoses,
      "/databridge/master/whole_body_poses",
      protocol::msg::WholeBodyPosesStamped,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace databridge
}  // namespace xr
