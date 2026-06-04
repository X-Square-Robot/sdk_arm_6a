#pragma once

#include "protocol/msg/data_collection_jobs.hpp"
#include "protocol/topic.h"

namespace xr {
namespace agent {
namespace topic {

// 数据采集任务信息同步
TOPIC(DataCollectionJobs, "/agent/data_collection_jobs", protocol::msg::DataCollectionJobs, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace agent
}  // namespace xr
