#pragma once

#include <sensor_msgs/msg/joint_state.hpp>
#include <std_msgs/msg/float32.hpp>

#include "protocol/msg/custom_pose_stamped.hpp"
#include "protocol/msg/robot_arm.hpp"
#include "protocol/topic.h"

namespace xr {
namespace databridge {
namespace topic {

// 左主臂控制数据同步
TOPIC(MasterLeftArm, "/databridge/master/left_arm", protocol::msg::RobotArm, QoS::SystemDefaultQoS());
// 右主臂控制数据同步
TOPIC(MasterRightArm, "/databridge/master/right_arm", protocol::msg::RobotArm, QoS::SystemDefaultQoS());

// 左主臂控制数据同步(世界坐标系)
TOPIC(MasterLeftArmPoseWorld,
      "/databridge/master/left_arm_pose_world",
      protocol::msg::CustomPoseStamped,
      QoS::SystemDefaultQoS());
// 右主臂控制数据同步(世界坐标系)
TOPIC(MasterRightArmPoseWorld,
      "/databridge/master/right_arm_pose_world",
      protocol::msg::CustomPoseStamped,
      QoS::SystemDefaultQoS());

// 左从臂反馈数据同步
TOPIC(SlaveLeftArm, "/databridge/slave/left_arm", protocol::msg::RobotArm, QoS::SystemDefaultQoS());
// 右从臂反馈数据同步
TOPIC(SlaveRightArm, "/databridge/slave/right_arm", protocol::msg::RobotArm, QoS::SystemDefaultQoS());
// 主设备端对从机左臂的joint states数据广播的topic
TOPIC(SlaveLeftArmJointStates,
      "/databridge/master/slave_left_arm_joint_states",
      sensor_msgs::msg::JointState,
      QoS::SystemDefaultQoS());
// 主设备端对从机右臂的joint states数据广播的topic
TOPIC(SlaveRightArmJointStates,
      "/databridge/master/slave_right_arm_joint_states",
      sensor_msgs::msg::JointState,
      QoS::SystemDefaultQoS());

// 从设备端反馈的所有joint states数据广播的topic
TOPIC(JointStates, "/databridge/joint_states", sensor_msgs::msg::JointState, QoS::SystemDefaultQoS());

// 左从臂末端六维力反馈数据同步,用于slave端同步到teleoperation
TOPIC(SlaveLeftArmWristWrench,
      "/databridge/slave/left_arm_wrist_wrench",
      std_msgs::msg::Float32,
      QoS::SystemDefaultQoS());
// 右从臂末端六维力反馈数据同步,用于slave端同步到teleoperation
TOPIC(SlaveRightArmWristWrench,
      "/databridge/slave/right_arm_wrist_wrench",
      std_msgs::msg::Float32,
      QoS::SystemDefaultQoS());

// 左从臂位姿控制指令
TOPIC(SlaveLeftArmPoseControlCommand,
      "/databridge/slave/left_arm_pose_cmd",
      geometry_msgs::msg::PoseStamped,
      QoS::SystemDefaultQoS());
// 右从臂位姿控制指令
TOPIC(SlaveRightArmPoseControlCommand,
      "/databridge/slave/right_arm_pose_cmd",
      geometry_msgs::msg::PoseStamped,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace databridge
}  // namespace xr
