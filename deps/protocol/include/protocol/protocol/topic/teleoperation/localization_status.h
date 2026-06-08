#pragma once

#include "protocol/msg/localization_feedback_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 机器人定位导航算法模块状态反馈
TOPIC(LocalizationStatus,
      "/teleoperation/master/localizaton_status",
      protocol::msg::LocalizationFeedbackStatus,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
