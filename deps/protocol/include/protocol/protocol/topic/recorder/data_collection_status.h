#pragma once

#include "protocol/msg/data_collection_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace recorder {
namespace topic {

// 广播数采任务状态
TOPIC(DataCollectionStatus,
      "recorder/data_collection_status",
      protocol::msg::DataCollectionStatus,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace recorder
}  // namespace xr