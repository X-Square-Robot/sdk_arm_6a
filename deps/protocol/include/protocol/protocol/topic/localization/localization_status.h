#pragma once

#include <std_msgs/msg/u_int8.hpp>

#include "protocol/topic.h"

namespace xr {
namespace localization {
namespace topic {

// localization状态发布，定义在protocol/msg/localization/EnumLocalizationStatus.msg
TOPIC(LocalizationStatus, "/localization/status", std_msgs::msg::UInt8, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace localization
}  // namespace xr
