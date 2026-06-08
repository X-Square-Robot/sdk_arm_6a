#pragma once

#include "protocol/msg/fold_waist_control_data.hpp"
#include "protocol/msg/robot_arm.hpp"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 转发主设备的折叠腰速度控制指令发布topic
TOPIC(FoldWaistControl,
      "/teleoperation/slave/fold_waist_control",
      protocol::msg::FoldWaistControlData,
      QoS::SystemDefaultQoS());

// 转发被控端折叠腰状态数据反馈topic
TOPIC(FoldWaistFeedback, "/teleoperation/master/fold_waist_feedback", protocol::msg::RobotArm, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
