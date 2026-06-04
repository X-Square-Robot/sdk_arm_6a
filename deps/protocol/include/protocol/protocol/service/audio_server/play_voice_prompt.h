#pragma once

#include "protocol/service.h"
#include "protocol/srv/play_voice_prompt.hpp"

namespace xr {
namespace audio {
namespace service {

// 播放语音提示
SERVICE(PlayVoicePrompt, "/audio_server/play_voice_prompt", protocol::srv::PlayVoicePrompt);

}  // namespace service
}  // namespace audio
}  // namespace xr


