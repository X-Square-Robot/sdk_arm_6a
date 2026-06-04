#pragma once

#include <protocol/msg/audio_data_stamped.hpp>

#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 操作端发布机器人端音频数据
TOPIC(RobotAudioData,
      "/teleoperation/master/robot_audio_data",
      protocol::msg::AudioDataStamped,
      QoS::SystemDefaultQoS());

// 机器人端发布操作端音频数据
TOPIC(ControllerAudioData,
      "/teleoperation/slave/controller_audio_data",
      protocol::msg::AudioDataStamped,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
