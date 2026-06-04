#pragma once
#include <protocol/srv/media_center_control.hpp>

#include "protocol/service.h"
namespace xr {
namespace mediacenter {
namespace service {
// mediacenter 使用推拉流控制（供外部UI调用）
SERVICE(MediaCenterControl, "/mediacenter/media_center_control", protocol::srv::MediaCenterControl);
}  // namespace service
}  // namespace mediacenter
}  // namespace xr