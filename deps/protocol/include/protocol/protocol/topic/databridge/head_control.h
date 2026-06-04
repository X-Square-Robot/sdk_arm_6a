#pragma once

#include <std_msgs/msg/float64_multi_array.hpp>

#include "protocol/msg/custom_pose_stamped.hpp"
#include "protocol/msg/head_control_data.hpp"
#include "protocol/msg/head_pan_tilt_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace databridge {
namespace topic {

// 头部云台增量控制指令topic
TOPIC(HeadControl, "/databridge/master/head_control", protocol::msg::HeadControlData, QoS::SystemDefaultQoS());
// 头部全局位姿控制指令topic
TOPIC(HeadControlPoseWorld,
      "/databridge/master/head_control_pose_world",
      protocol::msg::CustomPoseStamped,
      QoS::SystemDefaultQoS());
// 头部相对位姿控制指令topic（VR head_pose_related）
TOPIC(HeadControlPoseRelated,
      "/databridge/master/head_control_pose_related",
      protocol::msg::CustomPoseStamped,
      QoS::SystemDefaultQoS());

// 头部云台绝对控制指令topic
TOPIC(HeadAbsControl, "/databridge/master/head_abs_control", std_msgs::msg::Float64MultiArray, QoS::SystemDefaultQoS());

// 从机头部云台状态反馈topic
TOPIC(HeadFeedback, "/databridge/slave/head_feedback", protocol::msg::HeadPanTiltStatus, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace databridge
}  // namespace xr
