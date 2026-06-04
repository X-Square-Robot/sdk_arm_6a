#pragma once

#include "protocol/msg/bag_record_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 广播从机bag录制状态
TOPIC(BagRecordStatus,
      "/teleoperation/master/bag_record_status",
      protocol::msg::BagRecordStatus,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
