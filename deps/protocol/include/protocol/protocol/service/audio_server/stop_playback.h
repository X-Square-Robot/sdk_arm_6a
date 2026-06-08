#pragma once

#include "protocol/service.h"
#include "protocol/srv/stop_playback.hpp"

namespace xr {
namespace audio {
namespace service {

// 停止语音播报
SERVICE(StopPlayback, "/audio_server/stop_playback", protocol::srv::StopPlayback);

}  // namespace service
}  // namespace audio
}  // namespace xr
