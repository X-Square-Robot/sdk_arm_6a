#pragma once

#include "protocol/msg/upload_info_map.hpp"
#include "protocol/topic.h"

namespace xr {
namespace application {
namespace topic {

TOPIC(UploadInfoMap, "/application/upload_info_map",
      protocol::msg::UploadInfoMap, QoS::DiversityQoS());

}  // namespace topic
}  // namespace application
}  // namespace xr
