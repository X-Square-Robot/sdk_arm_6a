#pragma once

#include <geometry_msgs/msg/twist.hpp>

#include "protocol/msg/custom_pose_stamped.hpp"
#include "protocol/topic.h"

namespace xr {
namespace motion {
namespace topic {

// 腰部速度控制指令，50hz发布
TOPIC(HeadControl, "/command/head_twist_cmd", geometry_msgs::msg::Twist, QoS::SystemDefaultQoS());
// vr世界坐标系下头部绝对位姿
TOPIC(HeadControlVRPoseWorld, "/command/vr_head_pose/world", protocol::msg::CustomPoseStamped, QoS::SystemDefaultQoS());
// vr相对位姿（head_pose_related）
TOPIC(HeadControlVRPoseRelated, "/command/vr_head_pose/related", protocol::msg::CustomPoseStamped, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace motion
}  // namespace xr
