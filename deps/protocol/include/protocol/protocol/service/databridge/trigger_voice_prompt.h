#pragma once

#include "protocol/service.h"
#include "protocol/srv/trigger_voice_prompt.hpp"

namespace xr {
namespace databridge {
namespace service {

// 从端 databridge 提供，由 teleoperation(slave) 调用：将枚举映射为 wav 文件并调用 /audio_server/play_voice_prompt
SERVICE(TriggerVoicePrompt, "/databridge/slave/trigger_voice_prompt", protocol::srv::TriggerVoicePrompt);

}  // namespace service
}  // namespace databridge
}  // namespace xr
