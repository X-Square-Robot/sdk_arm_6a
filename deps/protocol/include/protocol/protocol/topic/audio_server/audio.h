#pragma once

#include "protocol/msg/audio_data_stamped.hpp"
#include "protocol/msg/audio_wakeup_data.hpp"
#include "protocol/msg/voice_prompt_result.hpp"
#include "protocol/topic.h"
#include "std_msgs/msg/bool.hpp"

namespace xr {
namespace audio {
namespace topic {

// 声音采集
TOPIC(AudioDataStamped, "/audio_server/audiodata_stamped", protocol::msg::AudioDataStamped, QoS::SystemDefaultQoS());
// MIC状态信息
TOPIC(MicrophoneStatus, "/audio_server/microphone_status", std_msgs::msg::Bool, QoS::SystemDefaultQoS());

// 唤醒和DOA信号数据
TOPIC(AudioWakeupData, "/audio_server/audio_wakeup_data", protocol::msg::AudioWakeupData, QoS::SystemDefaultQoS());

// TTS
TOPIC(TTSText, "/audio_server/TTSText", std_msgs::msg::String, QoS::SystemDefaultQoS());

// 语音播报结果通知
TOPIC(VoicePromptResult,
      "/audio_server/voice_prompt_result",
      protocol::msg::VoicePromptResult,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace audio
}  // namespace xr
