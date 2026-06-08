#pragma once

#include "protocol/msg/error_message.hpp"
#include "protocol/topic.h"

namespace xr {
namespace hmi {
namespace topic {

// 异常信号，提供给ui显示提示信息
TOPIC(ErrorMessage, "/hmi/error_message", protocol::msg::ErrorMessage, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace hmi
}  // namespace xr
