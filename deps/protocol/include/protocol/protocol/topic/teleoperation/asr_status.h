#pragma once

#include "protocol/msg/asr_result.hpp"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 同步机器人端的语音数采模式下的ASR语音识别结果列表
TOPIC(DataCollectionASRResult, "/teleoperation/master/asr_result", protocol::msg::ASRResult, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
