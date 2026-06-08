#pragma once

#include <geometry_msgs/msg/pose_stamped.hpp>
#include <nav_msgs/msg/odometry.hpp>

#include "protocol/topic.h"

namespace xr {
namespace localization {
namespace topic {

// 定位数据
TOPIC(TrackedPose, "/tracked_pose", geometry_msgs::msg::PoseStamped, QoS::KeepLastMessageQos());
// (废弃)里程计数据
TOPIC(XYOdom, "/xy_odom", nav_msgs::msg::Odometry, QoS::KeepLastMessageQos());

// 里程计数据
TOPIC(Odom, "/odom", nav_msgs::msg::Odometry, QoS::KeepLastMessageQos());

}  // namespace topic
}  // namespace localization
}  // namespace xr
