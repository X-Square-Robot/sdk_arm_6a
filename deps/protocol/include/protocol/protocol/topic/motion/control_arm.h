#pragma once

#include <geometry_msgs/msg/pose_stamped.hpp>

#include "protocol/msg/custom_pose_stamped.hpp"
#include "protocol/topic.h"

namespace xr {
namespace motion {
namespace topic {

// 左机械臂控制指令发布
TOPIC(LeftArmEndPose, "/left_arm/pose_command/related", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());
// 右机械臂控制指令发布
TOPIC(RightArmEndPose, "/right_arm/pose_command/related", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());

// 推理模式左机械臂指令发布
TOPIC(InferenceLeftArmEndPose,
      "/left_arm/pose_command/root_frame",
      geometry_msgs::msg::PoseStamped,
      QoS::SystemDefaultQoS());
// 右机械臂控制指令发布
TOPIC(InferenceRightArmEndPose,
      "/right_arm/pose_command/root_frame",
      geometry_msgs::msg::PoseStamped,
      QoS::SystemDefaultQoS());

// 左机械臂控制指令发布
TOPIC(LeftArmVREndPose, "/left_arm/vr_pose_command/world", protocol::msg::CustomPoseStamped, QoS::SystemDefaultQoS());
// 右机械臂控制指令发布
TOPIC(RightArmVREndPose, "/right_arm/vr_pose_command/world", protocol::msg::CustomPoseStamped, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace motion
}  // namespace xr
