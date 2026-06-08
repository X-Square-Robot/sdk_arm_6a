#pragma once

#include "protocol/service.h"
#include "protocol/srv/audio_sync.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 音频切换服务
SERVICE(AudioSync, "/teleoperation/master/audio_sync", protocol::srv::AudioSync);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
