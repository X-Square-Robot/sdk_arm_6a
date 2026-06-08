#pragma once

#include <sensor_msgs/msg/joint_state.hpp>
#include <std_msgs/msg/float64_multi_array.hpp>

#include "protocol/msg/exo_hand_sensor_data.hpp"
#include "protocol/topic.h"
#include "protocol/group.h"

namespace xr {
namespace databridge {
namespace topic {

// 主设备发布左外骨骼手控制指令topic
TOPIC(LeftExoHandControl, "/databridge/master/left_exo_hand_control", sensor_msgs::msg::JointState, QoS::SensorQoS());
// 主设备发布右外骨骼手控制指令topic
TOPIC(RightExoHandControl, "/databridge/master/right_exo_hand_control", sensor_msgs::msg::JointState, QoS::SensorQoS());

// 主设备发布左外骨骼手弧度控制指令topic
TOPIC(LeftExoHandRadControl,
      "/databridge/master/left_exo_hand_rad_control",
      std_msgs::msg::Float64MultiArray,
      QoS::SensorQoS());
// 主设备发布右外骨骼手弧度控制指令topic
TOPIC(RightExoHandRadControl,
      "/databridge/master/right_exo_hand_rad_control",
      std_msgs::msg::Float64MultiArray,
      QoS::SensorQoS());

// 从设备左灵巧手数据反馈topic
TOPIC(SlaveLeftExoHandFeedback,
      "/databridge/slave/left_exo_hand_feedback",
      protocol::msg::ExoHandSensorData,
      QoS::SystemDefaultQoS());
// 从设备右灵巧手数据反馈topic
TOPIC(SlaveRightExoHandFeedback,
      "/databridge/slave/right_exo_hand_feedback",
      protocol::msg::ExoHandSensorData,
      QoS::SystemDefaultQoS());

// 主设备左灵巧手数据反馈topic
TOPIC(MasterLeftExoHandFeedback,
      "/databridge/master/left_exo_hand_feedback",
      protocol::msg::ExoHandSensorData,
      QoS::SystemDefaultQoS());
// 主设备右灵巧手数据反馈topic
TOPIC(MasterRightExoHandFeedback,
      "/databridge/master/right_exo_hand_feedback",
      protocol::msg::ExoHandSensorData,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace databridge
}  // namespace xr

namespace xr {
using MasterExoHandFeedbackdGroup = TopicGroup<xr::databridge::topic::MasterLeftExoHandFeedback,
                                               xr::databridge::topic::MasterRightExoHandFeedback>;
}
