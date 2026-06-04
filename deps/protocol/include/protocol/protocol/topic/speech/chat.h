#pragma once

#include <protocol/msg/audio_data_stamped.hpp>

#include "protocol/topic.h"

namespace xr {
namespace speech {
namespace topic {

// 语音服务客户端发布语音数据
TOPIC(ChatAudioData,
      "/speech/chat_audio_data",
      protocol::msg::AudioDataStamped,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace speech
}  // namespace xr