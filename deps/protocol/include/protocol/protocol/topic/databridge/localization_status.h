#pragma once

#include "protocol/msg/localization_feedback_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace databridge {
namespace topic {

// 机器人定位导航算法模块状态反馈
TOPIC(LocalizationStatus, "/databridge/slave/localization_status", protocol::msg::LocalizationFeedbackStatus, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace databridge
}  // namespace xr
