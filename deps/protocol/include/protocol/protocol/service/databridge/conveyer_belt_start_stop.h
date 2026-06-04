#pragma once

#include "protocol/service.h"
#include "protocol/srv/conveyer_belt_start_stop.hpp"

namespace xr {
namespace databridge {
namespace service {

// 传送带启停服务（桌面主从：databridge slave 提供，srv 定义在 protocol/srv/databridge/）
SERVICE(ConveyerBeltStartStop, "/databridge/slave/conveyer_belt_start_stop", protocol::srv::ConveyerBeltStartStop);

}  // namespace service
}  // namespace databridge
}  // namespace xr
