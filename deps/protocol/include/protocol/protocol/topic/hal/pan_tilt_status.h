#pragma once

#include "protocol/msg/head_pan_tilt_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace hal {
namespace topic {

// 头部云台
TOPIC(HeadPanTiltStatus, "/hal/head/pan_tilt_status", protocol::msg::HeadPanTiltStatus, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace hal
}  // namespace xr