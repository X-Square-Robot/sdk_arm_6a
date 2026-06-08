#pragma once

#include "protocol/msg/app_mqtt_message.hpp"
#include "protocol/topic.h"

namespace xr {
namespace application {
namespace topic {

// Robot -> App 上行消息通道。
// Application 根据 robot 回调状态封装为 AppMqttMessage 并发布到该 topic。
TOPIC(AppUplinkInfo, "/application/app/uplink_info", protocol::msg::AppMqttMessage, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace application
}  // namespace xr
