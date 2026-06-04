#pragma once

#include "protocol/msg/sdk_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace sdk {
namespace topic {

// SDK状态发布
TOPIC(SdkStatus, "/sdk/status", protocol::msg::SdkStatus, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace sdk
}  // namespace xr
