#pragma once

#include <std_msgs/msg/float32.hpp>

#include "protocol/msg/waist_control_data.hpp"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 转发主设备的腰部相对位置控制指令发布topic
TOPIC(WaistControl, "/teleoperation/slave/waist_control", protocol::msg::WaistControlData, QoS::SystemDefaultQoS());

// 转发从设备腰部高度位置数据反馈topic
TOPIC(WaistFeedback, "/teleoperation/master/waist_feedback", std_msgs::msg::Float32, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
