#pragma once

#include "protocol/msg/lift_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace hal {
namespace topic {

// 腰部状态反馈话题
TOPIC(LiftStatus, "/hal/lift/status", protocol::msg::LiftStatus, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace hal
}  // namespace xr