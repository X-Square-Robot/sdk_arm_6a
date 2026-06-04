#pragma once

#include "protocol/service.h"
#include "protocol/srv/hdc_collect_step_callback.hpp"
#include "protocol/srv/hdc_upload_result.hpp"

namespace xr {
namespace sdk_server {
namespace service {

// 4.1.1 采集步骤切换通知 — application → sdk_server
// 链路：数采员按键 → databridge —[HdcTriggerStep]→ application —[本服务]→ sdk_server → WebSocket
SERVICE(HdcCollectStepCallback,
        "/sdk_server/hdc/collect_step_callback",
        protocol::srv::HdcCollectStepCallback);

// 4.2.1 异步上传结果通知 — recorder → sdk_server
// recorder 上传完成/失败后调用，sdk_server 封装成 {cmd:"uploadResult",...} 推送给 WebSocket 客户端
SERVICE(HdcUploadResult,
        "/sdk_server/hdc/upload_result",
        protocol::srv::HdcUploadResult);

}  // namespace service
}  // namespace sdk_server
}  // namespace xr
