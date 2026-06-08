#pragma once
#include <vector>

#include "protocol/msg/error_codes.hpp"
#include "protocol/topic.h"

namespace xr {
namespace application {

namespace topic {

// 向系统发布状态码，统一使用
TOPIC(ErrorCodes, "/application/error_codes", protocol::msg::ErrorCodes, QoS::SystemDefaultQoS());
}  // namespace topic
}  // namespace application
}  // namespace xr
