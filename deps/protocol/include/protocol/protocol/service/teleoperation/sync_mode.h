#pragma once

#include "protocol/service.h"
#include "protocol/srv/sync_mode.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 强制修改teleoperation维护的状态，仅在CX002上使用。目前仅用于处理急停拍下后同步teleoperation与databridge的空闲状态
SERVICE(SyncMode, "/teleoperation/slave/sync_mode", protocol::srv::SyncMode);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
