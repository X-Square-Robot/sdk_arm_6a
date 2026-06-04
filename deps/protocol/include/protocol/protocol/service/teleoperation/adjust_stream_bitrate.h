#pragma once

#include "protocol/service.h"
#include "protocol/srv/adjust_stream_bitrate.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 调整视频流码率服务
SERVICE(AdjustStreamBitrate, "/teleoperation/master/adjust_stream_bitrate", protocol::srv::AdjustStreamBitrate);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
