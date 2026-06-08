#pragma once

#include "protocol/msg/data_notify.hpp"
#include "protocol/topic.h"

namespace xr {
namespace recorder {
namespace topic {

// 对外通知bag包采集状态
TOPIC(DataNotify, "recorder/data_notify", protocol::msg::DataNotify, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace recorder
}  // namespace xr
