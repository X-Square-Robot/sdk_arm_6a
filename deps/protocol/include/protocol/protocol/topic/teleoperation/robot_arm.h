#pragma once

#include <std_msgs/msg/float32.hpp>

#include "protocol/group.h"
#include "protocol/msg/custom_pose_stamped.hpp"
#include "protocol/msg/robot_arm.hpp"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 左从臂反馈数据同步,用于master端同步到databridge
TOPIC(SlaveLeftArm, "/teleoperation/master/slave_left_arm", protocol::msg::RobotArm, QoS::SystemDefaultQoS());
// 右从臂反馈数据同步,用于master端同步到databridge
TOPIC(SlaveRightArm, "/teleoperation/master/slave_right_arm", protocol::msg::RobotArm, QoS::SystemDefaultQoS());

// 左主臂控制数据同步,用于slave端同步到databridge
TOPIC(MasterLeftArm, "/teleoperation/slave/master_left_arm", protocol::msg::RobotArm, QoS::SystemDefaultQoS());
// 右主臂控制数据同步,用于slave端同步到databridge
TOPIC(MasterRightArm, "/teleoperation/slave/master_right_arm", protocol::msg::RobotArm, QoS::SystemDefaultQoS());

// 左主臂全局位姿控制数据同步,用于slave端同步到databridge
TOPIC(MasterLeftArmPoseWorld,
      "/teleoperation/slave/master_left_arm_pose_world",
      protocol::msg::CustomPoseStamped,
      QoS::SystemDefaultQoS());
// 右主臂全局位姿控制数据同步,用于slave端同步到databridge
TOPIC(MasterRightArmPoseWorld,
      "/teleoperation/slave/master_right_arm_pose_world",
      protocol::msg::CustomPoseStamped,
      QoS::SystemDefaultQoS());

// 左臂末端六维力反馈数据同步,用于master端同步到databridge
TOPIC(MasterLeftArmWristWrench,
      "/teleoperation/master/left_arm_wrist_wrench",
      std_msgs::msg::Float32,
      QoS::SystemDefaultQoS());
// 右臂末端六维力反馈数据同步,用于master端同步到databridge
TOPIC(MasterRightArmWristWrench,
      "/teleoperation/master/right_arm_wrist_wrench",
      std_msgs::msg::Float32,
      QoS::SystemDefaultQoS());

using MasterArmGroup = TopicGroup<MasterLeftArm, MasterRightArm>;

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
