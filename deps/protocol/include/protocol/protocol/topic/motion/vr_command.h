#pragma once

#include <geometry_msgs/msg/pose_array.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <std_msgs/msg/float32.hpp>

#include "protocol/group.h"
#include "protocol/topic.h"

namespace xr {
namespace motion {
namespace topic {

// VR left arm control command topic
TOPIC(VRLeftArmEndPose, "/vr/cmd/left_pose_related", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());
// VR right arm control command topic
TOPIC(VRRightArmEndPose, "/vr/cmd/right_pose_related", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());
// VR head pose control command topic
TOPIC(VRHeadEndPose, "/vr/cmd/head_pose_related", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());

// VR left arm world pose topic
TOPIC(VRLeftArmWorldEndPose, "/vr/cmd/left_pose_world", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());
// VR right arm world pose topic
TOPIC(VRRightArmWorldEndPose, "/vr/cmd/right_pose_world", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());
// VR head world pose topic
TOPIC(VRHeadWorldEndPose, "/vr/cmd/head_pose_world", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());
// VR external trackers world poses topic
TOPIC(VRExternalTrackersWorldPoses,
      "/vr/cmd/external_trackers_pose_world",
      geometry_msgs::msg::PoseArray,
      QoS::SystemDefaultQoS());

// Vibration command to VR left controller
TOPIC(VRLeftControllerVibrationCommand, "/vr/cmd/left_controller_vibration", std_msgs::msg::Float32, QoS::SystemDefaultQoS());
// Vibration command to VR right controller
TOPIC(VRRightControllerVibrationCommand, "/vr/cmd/right_controller_vibration", std_msgs::msg::Float32, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace motion

using VREndPoseGroup = TopicGroup<motion::topic::VRLeftArmEndPose,
                                  motion::topic::VRRightArmEndPose,
                                  motion::topic::VRHeadEndPose,
                                  motion::topic::VRLeftArmWorldEndPose,
                                  motion::topic::VRRightArmWorldEndPose,
                                  motion::topic::VRHeadWorldEndPose>;
}  // namespace xr
