#pragma once

#include <geometry_msgs/msg/pose_stamped.hpp>

#include "protocol/topic.h"

namespace xr {
namespace navigation {
namespace topic {

// 定位信息反馈数据
TOPIC(TrackedPose, "/tracked_pose", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace navigation
}  // namespace xr
