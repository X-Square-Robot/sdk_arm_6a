#pragma once

#include "protocol/service.h"
#include "protocol/srv/trigger_voice_prompt.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 主端 UI 触发从端语音播报：UI → teleoperation(master) 透传到从端 → databridge 调用 /audio_server/play_voice_prompt
SERVICE(TriggerVoicePrompt, "/teleoperation/master/trigger_voice_prompt", protocol::srv::TriggerVoicePrompt);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
