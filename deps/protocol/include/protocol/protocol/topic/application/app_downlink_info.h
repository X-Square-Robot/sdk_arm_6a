#pragma once

#include "protocol/msg/app_mqtt_message.hpp"
#include "protocol/topic.h"

namespace xr {
namespace application {
namespace topic {

// App -> Robot 下行消息通道。
// Application 订阅该 topic，并根据 AppMqttMessage.mqtt_topic 分发到对应的下行 handler。
TOPIC(AppDownlinkInfo, "/application/app/downlink_info", protocol::msg::AppMqttMessage, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace application
}  // namespace xr
