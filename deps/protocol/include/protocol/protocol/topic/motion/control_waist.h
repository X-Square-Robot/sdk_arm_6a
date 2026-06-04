#pragma once

#include <geometry_msgs/msg/twist.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>

#include "protocol/topic.h"

namespace xr {
namespace motion {
namespace topic {

// 腰部速度控制指令，50hz发布
TOPIC(ControlWaist, "/waist_cmd_vel", geometry_msgs::msg::Twist, QoS::SystemDefaultQoS());

// 推理时DWBC模式下的躯干位姿指令
TOPIC(InferenceTorsoPose, "/torso/pose_command/root_frame", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace motion
}  // namespace xr
