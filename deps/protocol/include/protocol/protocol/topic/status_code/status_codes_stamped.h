#pragma once

#include "protocol/topic/status_code/status_code.h"
#include "protocol/topic/status_code/status_codes.h"
#include "protocol/msg/status_code.hpp"

#include "protocol/topic.h"

namespace xr {
namespace status_code {

namespace topic {

// 应用层状态码
TOPIC(ExampleStatusCode, "/application/status_codes", protocol::msg::StatusCode, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace status_code
}  // namespace xr
