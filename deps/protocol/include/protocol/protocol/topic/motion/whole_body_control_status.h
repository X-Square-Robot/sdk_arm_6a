#pragma once

#include <std_msgs/msg/int32.hpp>
#include <std_msgs/msg/float64_multi_array.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include "protocol/msg/whole_body_controller_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace motion {
namespace topic {

// 全身控制器躯干位姿指令，DWBC模式数采阶段录制条目
TOPIC(TorsoPoseCmd, "/whole_body_controller/torso_pose_cmd", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());
// 全身控制器左腕位姿指令，DWBC模式数采阶段录制条目
TOPIC(LeftWristPoseCmd, "/whole_body_controller/left_wrist_pose_cmd", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());
// 全身控制器右腕位姿指令，DWBC模式数采阶段录制条目
TOPIC(RightWristPoseCmd, "/whole_body_controller/right_wrist_pose_cmd", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());
// 全身控制器运行频率
TOPIC(WholeBodyControlStatus, "/whole_body_ik_frequency", std_msgs::msg::Int32, QoS::SystemDefaultQoS());
// 全身控制器躯干位姿，DWBC模式数采阶段录制条目
TOPIC(TorsoPose, "/whole_body_controller/torso_pose", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());
// 全身控制器左腕位姿，DWBC模式数采阶段录制条目
TOPIC(LeftWristPose, "/whole_body_controller/left_wrist_pose", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());
// 全身控制器右腕位姿，DWBC模式数采阶段录制条目
TOPIC(RightWristPose, "/whole_body_controller/right_wrist_pose", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());
// 废弃
TOPIC(WholeBodyControllerFrequency, "/whole_body_ik_frequency", std_msgs::msg::Int32, QoS::SystemDefaultQoS());
// 废弃
TOPIC(WholeBodyControllerStatus, "/whole_body_ik/controller_status", std_msgs::msg::Int32, QoS::SystemDefaultQoS());
// 全身控制器运行状态与运行频率
TOPIC(WholeBodyControllerStat, "/whole_body_controller/controller_status", protocol::msg::WholeBodyControllerStatus, QoS::SystemDefaultQoS());
// 废弃
TOPIC(WholeBodyAdmPresetId, "/whole_body_ik/adm_preset_id", std_msgs::msg::Int32, QoS::SystemDefaultQoS());

// 左手末端六维力, 前三位为力, 后三位为力矩，方向顺序为[x, y, z]
TOPIC(WholebodyLeftWristWrench, "/whole_body_ik/left_wrist_wrench", std_msgs::msg::Float64MultiArray, QoS::SystemDefaultQoS());
// 右手末端六维力, 前三位为力, 后三位为力矩，方向顺序为[x, y, z]
TOPIC(WholebodyRightWristWrench, "/whole_body_ik/right_wrist_wrench", std_msgs::msg::Float64MultiArray, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace motion
}  // namespace xr
