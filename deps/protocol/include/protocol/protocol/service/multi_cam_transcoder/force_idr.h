#pragma once

#include <std_srvs/srv/trigger.hpp>

#include "protocol/service.h"

namespace xr {
namespace multi_cam_transcoder {
namespace service {

// 强制IDR帧服务
SERVICE(ForceIdr, "/multi_cam_transcoder/force_idr", std_srvs::srv::Trigger);

}  // namespace service
}  // namespace multi_cam_transcoder
}  // namespace xr
