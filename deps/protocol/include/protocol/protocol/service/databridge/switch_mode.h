#pragma once

#include "protocol/service.h"
#include "protocol/srv/switch_mode.hpp"

namespace xr {
namespace databridge {
namespace service {

// 从机转发整机模式切换服务
SERVICE(SlaveSwitchMode, "/databridge/slave/switch_mode", protocol::srv::SwitchMode);

}  // namespace service
}  // namespace databridge
}  // namespace xr