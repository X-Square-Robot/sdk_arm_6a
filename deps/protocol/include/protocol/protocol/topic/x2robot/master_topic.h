/**
 * 远程控制下主机上的topic
 */
#pragma once

#include <geometry_msgs/msg/pose_stamped.hpp>
#include <sensor_msgs/msg/joint_state.hpp>
#include <std_msgs/msg/float64_multi_array.hpp>
#include <trajectory_msgs/msg/joint_trajectory_point.hpp>

#include "protocol/group.h"
#include "protocol/topic.h"
#include "x2robot_msgs/msg/joystick.hpp"

namespace x2robot {
namespace master {
namespace topic {

TOPIC(JointStates, "/joint_states", sensor_msgs::msg::JointState, QoS::SystemDefaultQoS());

// 左臂摇杆输入信息
TOPIC(LeftJoystickStates, "/left_joystick/input", x2robot_msgs::msg::Joystick, QoS::SystemDefaultQoS());
// 右臂摇杆输入信息
TOPIC(RightJoystickStates, "/right_joystick/input", x2robot_msgs::msg::Joystick, QoS::SystemDefaultQoS());
// 左主臂末端位姿
TOPIC(LeftArmEndPose, "/master_left_arm/end_pose", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());
// 右主臂末端位姿
TOPIC(RightArmEndPose, "/master_right_arm/end_pose", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());
// 左外骨骼臂输入信息
TOPIC(LeftExoArmStates, "/exo_arm/cmd/left", trajectory_msgs::msg::JointTrajectoryPoint, QoS::SensorQoS());
// 右外骨骼臂输入信息
TOPIC(RightExoArmStates, "/exo_arm/cmd/right", trajectory_msgs::msg::JointTrajectoryPoint, QoS::SensorQoS());
// Left arm command from exoskeleton arm driver
TOPIC(LeftExoskeletonArmCommand,
      "/exoskeleton_arm_driver/cmd/left",
      std_msgs::msg::Float64MultiArray,
      QoS::SensorQoS());
// Right arm command from exoskeleton arm driver
TOPIC(RightExoskeletonArmCommand,
      "/exoskeleton_arm_driver/cmd/right",
      std_msgs::msg::Float64MultiArray,
      QoS::SensorQoS());
// 左tracker输入信息
TOPIC(LeftTracker, "/vive_tracker/pose/left", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());
// 右tracker输入信息
TOPIC(RightTracker, "/vive_tracker/pose/right", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());
// 左外骨骼手输入信息
TOPIC(LeftExoHandStates, "/exo_hand/cmd/left", sensor_msgs::msg::JointState, QoS::SensorQoS());
// 右外骨骼手输入信息
TOPIC(RightExoHandStates, "/exo_hand/cmd/right", sensor_msgs::msg::JointState, QoS::SensorQoS());
// 左外骨骼手范围指令
TOPIC(LeftExoHandRangeCommand, "/exo_hand/range_cmd/left", std_msgs::msg::Float64MultiArray, QoS::SensorQoS());
// 右外骨骼手范围指令
TOPIC(RightExoHandRangeCommand, "/exo_hand/range_cmd/right", std_msgs::msg::Float64MultiArray, QoS::SensorQoS());
// 左外骨骼手关节弧度指令
TOPIC(LeftExoHandRadCommand, "/exo_hand/rad_cmd/left", std_msgs::msg::Float64MultiArray, QoS::SensorQoS());
// 右外骨骼手关节弧度指令
TOPIC(RightExoHandRadCommand, "/exo_hand/rad_cmd/right", std_msgs::msg::Float64MultiArray, QoS::SensorQoS());

}  // namespace topic
}  // namespace master
}  // namespace x2robot

namespace xr {
using ExoskeletonArmCommandGroup = TopicGroup<::x2robot::master::topic::LeftExoskeletonArmCommand,
                                              ::x2robot::master::topic::RightExoskeletonArmCommand>;

using ExoHandRangeCommandGroup =
    TopicGroup<::x2robot::master::topic::LeftExoHandRangeCommand, ::x2robot::master::topic::RightExoHandRangeCommand>;

using ExoHandRadCommandGroup =
    TopicGroup<::x2robot::master::topic::LeftExoHandRadCommand, ::x2robot::master::topic::RightExoHandRadCommand>;

using JoystickStatesGroup =
    TopicGroup<::x2robot::master::topic::LeftJoystickStates, ::x2robot::master::topic::RightJoystickStates>;

}  // namespace xr
