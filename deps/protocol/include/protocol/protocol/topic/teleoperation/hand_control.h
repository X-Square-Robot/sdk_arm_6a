#pragma once

#include <sensor_msgs/msg/joint_state.hpp>
#include <std_msgs/msg/float64_multi_array.hpp>

#include "protocol/msg/exo_hand_sensor_data.hpp"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 从设备转发左外骨骼手控制指令topic
TOPIC(LeftExoHandControl, "/teleoperation/slave/left_exo_hand_control", sensor_msgs::msg::JointState, QoS::SensorQoS());
// 从设备转发右外骨骼手控制指令topic
TOPIC(RightExoHandControl,
      "/teleoperation/slave/right_exo_hand_control",
      sensor_msgs::msg::JointState,
      QoS::SensorQoS());

// 从设备转发左外骨骼手弧度控制指令topic
TOPIC(LeftExoHandRadControl,
      "/teleoperation/slave/left_exo_hand_rad_control",
      std_msgs::msg::Float64MultiArray,
      QoS::SensorQoS());
// 从设备转发右外骨骼手弧度控制指令topic
TOPIC(RightExoHandRadControl,
      "/teleoperation/slave/right_exo_hand_rad_control",
      std_msgs::msg::Float64MultiArray,
      QoS::SensorQoS());

// 主设备转发左灵巧手数据反馈topic
TOPIC(LeftExoHandFeedback,
      "/teleoperation/master/left_exo_hand_feedback",
      protocol::msg::ExoHandSensorData,
      QoS::SystemDefaultQoS());
// 主设备转发右灵巧手数据反馈topic
TOPIC(RightExoHandFeedback,
      "/teleoperation/master/right_exo_hand_feedback",
      protocol::msg::ExoHandSensorData,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
