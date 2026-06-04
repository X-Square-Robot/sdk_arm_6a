#pragma once

#include "protocol/service.h"
#include "std_srvs/srv/set_bool.hpp"

namespace xr {
namespace databridge {
namespace service {

// databridge节点的控制权限开关，打开时允许遥操数据转发，关闭时则关闭遥操数据链路。
SERVICE(EnableControl, "/databridge/enable_control", std_srvs::srv::SetBool);

}  // namespace service
}  // namespace databridge
}  // namespace xr
