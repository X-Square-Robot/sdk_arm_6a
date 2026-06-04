#pragma once

#include "protocol/msg/active_wifi.hpp"
#include "protocol/msg/metrics_ping.hpp"
#include "protocol/msg/wifi_connect_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace network_manager {
namespace topic {

// 激活的WiFi信息
TOPIC(ActiveWifi, "/network_manager/active_wifi", protocol::msg::ActiveWifi, QoS::SystemDefaultQoS());

// WiFi连接过程状态，供UI/UX实时展示连接进度
TOPIC(WifiConnectStatus, "/network_manager/wifi_connect_status", protocol::msg::WifiConnectStatus,
      QoS::SystemDefaultQoS());

// 网络延迟指标（ping gateway / ping server）
TOPIC(MetricsPing, "/network_manager/metrics_ping", protocol::msg::MetricsPing, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace network_manager
}  // namespace xr
