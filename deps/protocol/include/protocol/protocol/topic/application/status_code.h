#pragma once
#include <vector>

#include "protocol/msg/status_code.hpp"
#include "protocol/topic.h"

namespace xr {
namespace application {

namespace topic {

// 向系统发布状态码，统一使用
TOPIC(StatusCode, "/application/status_code", protocol::msg::StatusCode, QoS::AggregatedTopicQoS());
}  // namespace topic
}  // namespace application
}  // namespace xr
