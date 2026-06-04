// 需要databridge订阅转换给出的bag包录制topic，部分topic后续会迁移到实时控制器内实现

#pragma once

#include <geometry_msgs/msg/pose_stamped.hpp>
#include <sensor_msgs/msg/joint_state.hpp>

#include "protocol/topic.h"

namespace xr {
namespace databridge {
namespace datacollection {
namespace topic {

// 左机械臂末端位姿发布topic
TOPIC(LeftArmEndPose, "/left_arm/state/end_pose", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());

// 右机械臂末端位姿发布topic
TOPIC(RightArmEndPose, "/right_arm/state/end_pose", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());

// 左机械臂关节状态发布topic
TOPIC(LeftArmJointStates, "/left_arm/state/joint", sensor_msgs::msg::JointState, QoS::SystemDefaultQoS());

// 右机械臂关节状态发布topic
TOPIC(RightArmJointStates, "/right_arm/state/joint", sensor_msgs::msg::JointState, QoS::SystemDefaultQoS());

// 折叠腰电机状态数据
TOPIC(WaistJointStates, "/waist/state/joint", sensor_msgs::msg::JointState, QoS::SystemDefaultQoS());

// 折叠腰末端位姿数据
TOPIC(WaistEndPose, "/waist/state/end_pose", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace datacollection
}  // namespace databridge
}  // namespace xr
