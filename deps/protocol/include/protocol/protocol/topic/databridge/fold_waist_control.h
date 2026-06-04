#pragma once

#include "protocol/msg/fold_waist_control_data.hpp"
#include "protocol/msg/robot_arm.hpp"
#include "protocol/topic.h"

namespace xr {
namespace databridge {
namespace topic {

// 折叠腰速度控制指令发布topic
TOPIC(FoldWaistControl,
      "/databridge/master/fold_waist_control",
      protocol::msg::FoldWaistControlData,
      QoS::SystemDefaultQoS());

// 折叠腰状态数据反馈topic
TOPIC(FoldWaistFeedback, "databridge/slave/fold_waist_feedback", protocol::msg::RobotArm, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace databridge
}  // namespace xr
