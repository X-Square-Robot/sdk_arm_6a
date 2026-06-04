#pragma once

#include "protocol/msg/data_collection_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 主设备端广播从设备端当前正在执行的数采任务状态
TOPIC(MasterDataCollectionStatus,
      "/teleoperation/master/data_collection_status",
      protocol::msg::DataCollectionStatus,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr