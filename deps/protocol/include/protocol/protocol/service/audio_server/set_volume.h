#pragma once

#include "protocol/service.h"
#include "protocol/srv/set_volume.hpp"

namespace xr {
namespace audio {
namespace service {

// 设置系统音量
SERVICE(SetVolume, "/audio_server/set_volume", protocol::srv::SetVolume);

}  // namespace service
}  // namespace audio
}  // namespace xr
