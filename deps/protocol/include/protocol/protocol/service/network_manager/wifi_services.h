#pragma once

#include "protocol/service.h"
#include "protocol/srv/connect_wifi.hpp"
#include "protocol/srv/create_hotspot.hpp"
#include "protocol/srv/get_hotspot_info.hpp"
#include "protocol/srv/get_wifi_list.hpp"
#include "protocol/srv/stop_hotspot.hpp"
#include "protocol/srv/get_hotspot_static_ip_map.hpp"
#include "protocol/srv/append_hotspot_static_ip_map.hpp"
#include "protocol/srv/clear_hotspot_static_ip_map.hpp"

namespace xr {
namespace network_manager {
namespace service {

// 获取WiFi列表
SERVICE(GetWifiList, "/network_manager/get_wifi_list", protocol::srv::GetWifiList);
// 连接WiFi
SERVICE(ConnectWifi, "/network_manager/connect_wifi", protocol::srv::ConnectWifi);

// 创建热点
SERVICE(CreateHotspot, "/network_manager/create_hotspot", protocol::srv::CreateHotspot);
// 关闭热点
SERVICE(StopHotspot, "/network_manager/stop_hotspot", protocol::srv::StopHotspot);
// 获取热点信息
SERVICE(GetHotspotInfo, "/network_manager/get_hotspot_info", protocol::srv::GetHotspotInfo);

// 获取热点静态IP表
SERVICE(GetHotspotStaticIpMap, "/network_manager/get_hotspot_static_ip_map", protocol::srv::GetHotspotStaticIpMap);
// 添加热点静态IP
SERVICE(AppendHotspotStaticIpMap, "/network_manager/append_hotspot_static_ip_map", protocol::srv::AppendHotspotStaticIpMap);
// 清空热点静态IP表
SERVICE(ClearHotspotStaticIpMap, "/network_manager/clear_hotspot_static_ip_map", protocol::srv::ClearHotspotStaticIpMap);

}  // namespace service
}  // namespace network_manager
}  // namespace xr