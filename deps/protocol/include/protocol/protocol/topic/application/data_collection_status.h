#pragma once

#include "protocol/msg/data_collection_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace application {
namespace topic {

// 多样性任务进度数据
TOPIC(DataCollectionStatus,
      "/application/data_collection_status",
      protocol::msg::DataCollectionStatus,
      QoS::DiversityQoS());

}  // namespace topic
}  // namespace application
}  // namespace xr
