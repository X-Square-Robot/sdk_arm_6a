#pragma once

#include <std_msgs/msg/float32.hpp>

#include "protocol/msg/waist_control_data.hpp"
#include "protocol/topic.h"

namespace xr {
namespace databridge {
namespace topic {

// 腰部相对位置控制指令发布topic
TOPIC(WaistControl, "/databridge/master/waist_control", protocol::msg::WaistControlData, QoS::SystemDefaultQoS());
// 从机反馈腰部状态数据topic
TOPIC(WaistFeedback, "/databridge/slave/waist_feedback", std_msgs::msg::Float32, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace databridge
}  // namespace xr
