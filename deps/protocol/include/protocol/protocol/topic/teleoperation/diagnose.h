#pragma once

#include "protocol/msg/diagnose_control_channel.hpp"
#include "protocol/msg/diagnose_videostream.hpp"
#include "protocol/msg/diagnose_modem.hpp"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 左臂拉流诊断信息
TOPIC(LeftVideoStreamDiagnose,
      "/teleoperation/master/video0/stream_diagnose",
      protocol::msg::DiagnoseVideostream,
      QoS::SystemDefaultQoS());

// 头部拉流诊断信息
TOPIC(HeadVideoStreamDiagnose,
      "/teleoperation/master/video1/stream_diagnose",
      protocol::msg::DiagnoseVideostream,
      QoS::SystemDefaultQoS());

// 右臂拉流诊断信息
TOPIC(RightVideoStreamDiagnose,
      "/teleoperation/master/video2/stream_diagnose",
      protocol::msg::DiagnoseVideostream,
      QoS::SystemDefaultQoS());

// 控制链路诊断信息
TOPIC(DiagnoseControlChannel,
      "/teleoperation/master/diagnose_control_channel",
      protocol::msg::DiagnoseControlChannel,
      QoS::SystemDefaultQoS());

// 移动通信模块诊断信息
TOPIC(DiagnoseModem,
      "/teleoperation/master/diagnose_modem",
      protocol::msg::DiagnoseModem,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr