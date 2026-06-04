#pragma once

#include <geometry_msgs/msg/pose_stamped.hpp>

#include "protocol/topic.h"

namespace xr {
namespace navigation {
namespace topic {

// 导航到目标位姿接口
TOPIC(TargetPose, "/target_pose", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace navigation
}  // namespace xr
