#pragma once
#include "protocol/service.h"
#include "protocol/srv/adjust_video_stream_bitrate.hpp"
namespace xr {
namespace mediacenter {
namespace service {
// mediacenter 侧实现的码率调节（供 teleoperation / 工具调用）
SERVICE(AdjustVideoStreamBitrate, "/mediacenter/adjust_video_stream_bitrate", protocol::srv::AdjustVideoStreamBitrate);
}  // namespace service
}  // namespace mediacenter
}  // namespace xr