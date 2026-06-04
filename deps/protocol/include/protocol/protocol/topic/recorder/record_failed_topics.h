#pragma once

#include "protocol/msg/record_failed_topics.hpp"
#include "protocol/topic.h"

namespace xr {
namespace recorder {
namespace topic {

// 对外通知bag包采集失败的topic
TOPIC(RecordFailedTopics, "recorder/record_failed_topics", protocol::msg::RecordFailedTopics, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace recorder
}  // namespace xr
