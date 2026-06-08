#pragma once

#include "protocol/msg/bag_record_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace recorder {
namespace topic {

// 广播bag录制状态
TOPIC(BagRecordStatus, "recorder/bag_record_status", protocol::msg::BagRecordStatus, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace recorder
}  // namespace xr
