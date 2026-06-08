#pragma once

#include "protocol/topic.h"
#include "geometry_msgs/msg/pose_stamped.hpp"

namespace xr {
namespace vr {
namespace topic {
// VR Body tracking Data: Pelvis pose topic
TOPIC(BodyTrackingPelvisPose, "/vr/body_tracking/pelvis_pose", geometry_msgs::msg::PoseStamped,
      QoS::SystemDefaultQoS());
}  // namespace topic
}  // namespace vr
}  // namespace xr
