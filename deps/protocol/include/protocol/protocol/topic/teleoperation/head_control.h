#pragma once

#include <std_msgs/msg/float64_multi_array.hpp>

#include "protocol/msg/custom_pose_stamped.hpp"
#include "protocol/msg/head_control_data.hpp"
#include "protocol/msg/head_pan_tilt_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 转发主设备的头部云台增量控制指令topic
TOPIC(HeadControl, "/teleoperation/slave/head_control", protocol::msg::HeadControlData, QoS::SystemDefaultQoS());
// 转发主设备头部全局位姿控制指令topic
TOPIC(HeadControlPoseWorld,
      "/teleoperation/slave/head_control_pose_world",
      protocol::msg::CustomPoseStamped,
      QoS::SystemDefaultQoS());
// 转发主设备头部相对位姿控制指令topic（VR head_pose_related）
TOPIC(HeadControlPoseRelated,
      "/teleoperation/slave/head_control_pose_related",
      protocol::msg::CustomPoseStamped,
      QoS::SystemDefaultQoS());
// 转发头部云台绝对控制指令topic
TOPIC(HeadAbsControl,
      "/teleoperation/slave/head_abs_control",
      std_msgs::msg::Float64MultiArray,
      QoS::SystemDefaultQoS());

// 转发从设备端头部云台状态数据反馈topic
TOPIC(HeadFeedback, "/teleoperation/master/head_feedback", protocol::msg::HeadPanTiltStatus, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
