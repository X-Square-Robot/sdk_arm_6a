#pragma once

#include "protocol/msg/head_als.hpp"
#include "protocol/topic.h"

namespace xr {
namespace hal {
namespace topic {

// 头部环境光强
TOPIC(HeadALS, "/hal/head/als", protocol::msg::HeadALS, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace hal
}  // namespace xr
