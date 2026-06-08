#pragma once

#include "protocol/service.h"
#include "protocol/srv/get_sub_topic_status.hpp"

namespace xr {
namespace recorder {
namespace service {

// 查询订阅话题状态服务
SERVICE(GetSubTopicStatus, "bag_recorder/get_sub_topic_status", protocol::srv::GetSubTopicStatus);

}  // namespace service
}  // namespace recorder
}  // namespace xr
