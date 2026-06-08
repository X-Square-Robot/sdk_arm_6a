#pragma once

#include "protocol/msg/data_collection_upload_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace recorder {
namespace topic {

// 广播数据上传状态
TOPIC(DataCollectionUploadStatus,
      "recorder/data_collection_upload_status",
      protocol::msg::DataCollectionUploadStatus,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace recorder
}  // namespace xr
