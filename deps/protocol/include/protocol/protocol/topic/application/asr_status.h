#pragma once

#include "protocol/msg/asr_result.hpp"
#include "protocol/topic.h"

namespace xr {
namespace application {
namespace topic {

// 语音数采模式下的ASR语音识别结果列表
TOPIC(DataCollectionASRResult,
      "/application/data_collection/asr_result",
      protocol::msg::ASRResult,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace application
}  // namespace xr
