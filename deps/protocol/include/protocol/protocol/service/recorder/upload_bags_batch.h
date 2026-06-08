#pragma once

#include "protocol/service.h"
#include "protocol/srv/upload_bags_batch.hpp"

namespace xr {
namespace recorder {
namespace service {

SERVICE(UploadBagsBatch, "bag_recorder/upload_bags_batch", protocol::srv::UploadBagsBatch);

}  // namespace service
}  // namespace recorder
}  // namespace xr
