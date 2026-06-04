#pragma once

#include <geometry_msgs/msg/pose_stamped.hpp>
#include <geometry_msgs/msg/twist_stamped.hpp>
#include <sensor_msgs/msg/joint_state.hpp>
#include <std_msgs/msg/float32.hpp>
#include <std_msgs/msg/float64_multi_array.hpp>

#include "protocol/group.h"
#include "protocol/topic.h"
#include "x2robot_msgs/msg/servo_drive_state.hpp"
#include "x2robot_msgs/msg/tashan_tactile_data.hpp"

namespace x2robot {
namespace topic {

// 机器人controller发出的joint_states
TOPIC(JointStates, "/joint_states", sensor_msgs::msg::JointState, QoS::SystemDefaultQoS());

// r5左臂关节控制topic
TOPIC(LeftR5SlaveArmControl,
      "/left_arm_joint_controller/commands",
      std_msgs::msg::Float64MultiArray,
      QoS::SystemDefaultQoS());

// r5右臂关节控制topic
TOPIC(RightR5SlaveArmControl,
      "/right_arm_joint_controller/commands",
      std_msgs::msg::Float64MultiArray,
      QoS::SystemDefaultQoS());

// r5左臂末端控制topic
TOPIC(LeftR5SlaveArmEndPoseControl,
      "/left_arm_cartesian_controller/pose_cmd",
      geometry_msgs::msg::PoseStamped,
      QoS::SystemDefaultQoS());

// r5右臂末端控制topic
TOPIC(RightR5SlaveArmEndPoseControl,
      "/right_arm_cartesian_controller/pose_cmd",
      geometry_msgs::msg::PoseStamped,
      QoS::SystemDefaultQoS());

// 左主臂关节控制topic
TOPIC(LeftMasterArmControl,
      "/master_left_arm_joint_controller/commands",
      std_msgs::msg::Float64MultiArray,
      QoS::SystemDefaultQoS());

// 右主臂关节控制topic
TOPIC(RightMasterArmControl,
      "/master_right_arm_joint_controller/commands",
      std_msgs::msg::Float64MultiArray,
      QoS::SystemDefaultQoS());

// 左主臂末端控制topic
TOPIC(LeftMasterArmEndPoseControl,
      "/master_left_arm_cartesian_controller/pose_cmd",
      geometry_msgs::msg::PoseStamped,
      QoS::SystemDefaultQoS());

// 右主臂末端控制topic
TOPIC(RightMasterArmEndPoseControl,
      "/master_right_arm_cartesian_controller/pose_cmd",
      geometry_msgs::msg::PoseStamped,
      QoS::SystemDefaultQoS());

// 方舟左夹爪控制topic
TOPIC(LeftSlaveGripperControl,
      "/left_gripper_controller/commands",
      std_msgs::msg::Float64MultiArray,
      QoS::SystemDefaultQoS());

// 方舟右夹爪控制topic
TOPIC(RightSlaveGripperControl,
      "/right_gripper_controller/commands",
      std_msgs::msg::Float64MultiArray,
      QoS::SystemDefaultQoS());

// 升降机控制topic
TOPIC(LiftControl, "/lift_controller/commands", std_msgs::msg::Float64MultiArray, QoS::SystemDefaultQoS());

// 麦克纳姆轮底盘控制topic
TOPIC(MecanumBaseControl,
      "/mecanum_base_controller/reference",
      geometry_msgs::msg::TwistStamped,
      QoS::SystemDefaultQoS());

// 头部云台控制topic
TOPIC(HeadGimbalControl, "/gimbal_controller/commands", std_msgs::msg::Float64MultiArray, QoS::SystemDefaultQoS());

// 左主臂末端位姿发布
TOPIC(LeftMainArmEndPose, "/master_left_arm/end_pose", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());
// 右主臂末端位姿发布
TOPIC(RightMainArmEndPose, "/master_right_arm/end_pose", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());
// 左主臂joint states 发布
TOPIC(LeftMainArmJointStates, "/master_left_arm/joint_states", sensor_msgs::msg::JointState, QoS::SystemDefaultQoS());
// 右主臂joint states 发布
TOPIC(RightMainArmJointStates, "/master_right_arm/joint_states", sensor_msgs::msg::JointState, QoS::SystemDefaultQoS());

// 天机臂左臂控制topic
TOPIC(LeftTianJiArmControl,
      "/left_forward_position_controller/commands",
      std_msgs::msg::Float64MultiArray,
      QoS::SystemDefaultQoS());

// 天机臂右臂控制topic
TOPIC(RightTianJiArmControl,
      "/right_forward_position_controller/commands",
      std_msgs::msg::Float64MultiArray,
      QoS::SystemDefaultQoS());

// 左夹爪控制topic
TOPIC(LeftGripperControl, "/gripper/cmd/left", std_msgs::msg::Float32, QoS::SystemDefaultQoS());
// 右夹爪控制topic
TOPIC(RightGripperControl, "/gripper/cmd/right", std_msgs::msg::Float32, QoS::SystemDefaultQoS());
// 左夹爪状态反馈topic
TOPIC(LeftGripperState, "/gripper/state/left", std_msgs::msg::Float32, QoS::SystemDefaultQoS());
// 右夹爪状态反馈topic
TOPIC(RightGripperState, "/gripper/state/right", std_msgs::msg::Float32, QoS::SystemDefaultQoS());

// zbl_g_gripper左夹爪控制topic
TOPIC(LeftGGripperControl,
      "/left_g_gripper_controller/commands",
      std_msgs::msg::Float64MultiArray,
      QoS::SystemDefaultQoS());
// zbl_g_gripper右夹爪控制topic
TOPIC(RightGGripperControl,
      "/right_g_gripper_controller/commands",
      std_msgs::msg::Float64MultiArray,
      QoS::SystemDefaultQoS());
// zbl_g_gripper左夹爪状态反馈topic
TOPIC(LeftGGripperState, "/left_g_gripper_states/joint_states", sensor_msgs::msg::JointState, QoS::SystemDefaultQoS());
// zbl_g_gripper右夹爪状态反馈topic
TOPIC(RightGGripperState,
      "/right_g_gripper_states/joint_states",
      sensor_msgs::msg::JointState,
      QoS::SystemDefaultQoS());

// 强脑灵巧手夹爪式开合（0~1）；ROS 控制器名 revo，全自由度见 LeftHandCommand
TOPIC(LeftBraincoHandGripperCommands,
      "/left_revo_gripper_like_controller/commands",
      std_msgs::msg::Float64MultiArray,
      QoS::SystemDefaultQoS());
TOPIC(RightBraincoHandGripperCommands,
      "/right_revo_gripper_like_controller/commands",
      std_msgs::msg::Float64MultiArray,
      QoS::SystemDefaultQoS());
// 强脑灵巧手夹爪式状态反馈，与 g_gripper 相同使用 JointState
TOPIC(LeftBraincoHandGripperState,
      "/left_revo_gripper_like_states/joint_states",
      sensor_msgs::msg::JointState,
      QoS::SystemDefaultQoS());
TOPIC(RightBraincoHandGripperState,
      "/right_revo_gripper_like_states/joint_states",
      sensor_msgs::msg::JointState,
      QoS::SystemDefaultQoS());

// 左天机臂末端位姿发布topic
TOPIC(LeftTianjiArmEndPose,
      "/left_arm/robot_end_effector_pose",
      geometry_msgs::msg::PoseStamped,
      QoS::SystemDefaultQoS());
// 右天机臂末端位姿发布topic
TOPIC(RightTianjiArmEndPose,
      "/right_arm/robot_end_effector_pose",
      geometry_msgs::msg::PoseStamped,
      QoS::SystemDefaultQoS());

// 左从臂外力发布topic
TOPIC(LeftArmExternalTorque, "/left_arm/joint_torque_ext", std_msgs::msg::Float64MultiArray, QoS::SystemDefaultQoS());
// 右从臂外力发布topic
TOPIC(RightArmExternalTorque, "/right_arm/joint_torque_ext", std_msgs::msg::Float64MultiArray, QoS::SystemDefaultQoS());

// 折叠腰末端位姿发布
TOPIC(FoldWaistEndPose, "/waist/robot_end_effector_pose", geometry_msgs::msg::PoseStamped, QoS::SystemDefaultQoS());

// 折叠腰电机角度控制topic
TOPIC(FoldWaistJointControl,
      "/waist_forward_position_controller/commands",
      std_msgs::msg::Float64MultiArray,
      QoS::SystemDefaultQoS());

// 左夹爪传感器
TOPIC(LeftGripperTactileSensor, "/gripper/tactile_sensor/left", x2robot_msgs::msg::TashanTactileData, QoS::SensorQoS());
// 右夹爪传感器
TOPIC(RightGripperTactileSensor,
      "/gripper/tactile_sensor/right",
      x2robot_msgs::msg::TashanTactileData,
      QoS::SensorQoS());

// 平滑控制输入topic,当前作为天机臂的关节控制指令
TOPIC(LeftTianjiArmSmoothCommandInput,
      "/smoother_command_input_left",
      std_msgs::msg::Float64MultiArray,
      QoS::SystemDefaultQoS());
TOPIC(RightTianjiArmSmoothCommandInput,
      "/smoother_command_input_right",
      std_msgs::msg::Float64MultiArray,
      QoS::SystemDefaultQoS());

// realtime controller servo state
TOPIC(ServoDriveState,
      "/realtime_controller_servo_states",
      x2robot_msgs::msg::ServoDriveState,
      QoS::SystemDefaultQoS());

// 左外骨骼手透传信息发布
TOPIC(LeftExoHandStates, "/exo_hand/cmd/left", sensor_msgs::msg::JointState, QoS::SensorQoS());
// 右外骨骼手透传信息发布
TOPIC(RightExoHandStates, "/exo_hand/cmd/right", sensor_msgs::msg::JointState, QoS::SensorQoS());

// 外骨骼控制左机械臂的指令
TOPIC(LeftExoskeletonArmControllerCommand,
      "/exoskeleton_arm_controller/cmd/left",
      std_msgs::msg::Float64MultiArray,
      QoS::SystemDefaultQoS());
// 外骨骼控制右机械臂的指令
TOPIC(RightExoskeletonArmControllerCommand,
      "/exoskeleton_arm_controller/cmd/right",
      std_msgs::msg::Float64MultiArray,
      QoS::SystemDefaultQoS());

// 左灵巧手关节状态
TOPIC(LeftHandJointStates, "/left_hand_states/joint_states", sensor_msgs::msg::JointState, QoS::SystemDefaultQoS());
// 右灵巧手关节状态
TOPIC(RightHandJointStates, "/right_hand_states/joint_states", sensor_msgs::msg::JointState, QoS::SystemDefaultQoS());

// 左灵巧手控制指令
TOPIC(LeftHandCommand,
      "/left_hand_forward_position_controller/commands",
      std_msgs::msg::Float64MultiArray,
      QoS::SystemDefaultQoS());
// 右灵巧手控制指令
TOPIC(RightHandCommand,
      "/right_hand_forward_position_controller/commands",
      std_msgs::msg::Float64MultiArray,
      QoS::SystemDefaultQoS());

// 左灵巧手接收外骨骼范围指令
TOPIC(LeftExoHandRangeCommand,
      "/left_hand_range_command_controller/commands",
      std_msgs::msg::Float64MultiArray,
      QoS::SystemDefaultQoS());
// 右灵巧手接收外骨骼范围指令
TOPIC(RightExoHandRangeCommand,
      "/right_hand_range_command_controller/commands",
      std_msgs::msg::Float64MultiArray,
      QoS::SystemDefaultQoS());

// 主臂左夹爪关节状态
TOPIC(MasterLeftGripperJointStates,
      "/master_left_gripper/joint_states",
      sensor_msgs::msg::JointState,
      QoS::SystemDefaultQoS());

// 主臂右夹爪关节状态
TOPIC(MasterRightGripperJointStates,
      "/master_right_gripper/joint_states",
      sensor_msgs::msg::JointState,
      QoS::SystemDefaultQoS());

// 左手传感器
TOPIC(LeftHandTactileSensor,
      "/hand_tactile_sensor/status/left",
      x2robot_msgs::msg::TashanTactileData,
      QoS::SensorQoS());

// 右手传感器
TOPIC(RightHandTactileSensor,
      "/hand_tactile_sensor/status/right",
      x2robot_msgs::msg::TashanTactileData,
      QoS::SensorQoS());

}  // namespace topic
}  // namespace x2robot

namespace xr {

using ExoskeletonArmControllerCommandGroup = TopicGroup<::x2robot::topic::LeftExoskeletonArmControllerCommand,
                                                        ::x2robot::topic::RightExoskeletonArmControllerCommand>;

using ExoskeletonHandRangeCommandGroup =
    TopicGroup<::x2robot::topic::LeftExoHandRangeCommand, ::x2robot::topic::RightExoHandRangeCommand>;
using GripperJointStatesGroup =
    TopicGroup<::x2robot::topic::MasterLeftGripperJointStates, ::x2robot::topic::MasterRightGripperJointStates>;

using MainArmEndPoseGroup = TopicGroup<::x2robot::topic::LeftMainArmEndPose, ::x2robot::topic::RightMainArmEndPose>;

using MainArmJointStatesGroup =
    TopicGroup<::x2robot::topic::LeftMainArmJointStates, ::x2robot::topic::RightMainArmJointStates>;

using HandTactileSensorGroup =
    TopicGroup<::x2robot::topic::LeftHandTactileSensor, ::x2robot::topic::RightHandTactileSensor>;

}  // namespace xr
