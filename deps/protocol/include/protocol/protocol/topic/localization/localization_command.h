#pragma once

#include <std_msgs/msg/u_int8.hpp>

#include "protocol/topic.h"

namespace xr {
namespace localization {
namespace topic {

// localization状态切换指令，临时方案，后续需要切换为service实现。指令枚举定义在EnumLocalizationCommand.msg
TOPIC(LocalizationCommand, "/localization/command", std_msgs::msg::UInt8, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace localization
}  // namespace xr
