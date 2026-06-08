#pragma once

#include "protocol/msg/calibration_params.hpp"
#include "protocol/topic.h"
#include "std_msgs/msg/string.hpp"

namespace xr {
namespace application {
namespace topic {

// 多样性任务数据
TOPIC(DiversityData, "/diversity_data", std_msgs::msg::String, QoS::DiversityQoS());
// 分发任务数据
TOPIC(DistributeData, "/distribute_data", std_msgs::msg::String, QoS::DiversityQoS());
// 插入任务数据
TOPIC(InstructionData, "/instruction_data", std_msgs::msg::String, QoS::DiversityQoS());
// 推理中接管相关的描述数据
TOPIC(TakeOverData, "/take_over_data", std_msgs::msg::String, QoS::DiversityQoS());
// 相机标定数据(待废弃)
TOPIC(CalibrationData, "/calibration_data", std_msgs::msg::String, QoS::DiversityQoS());
// 相机标定信息发布topic
TOPIC(CalibrationParams, "/calibration_params", protocol::msg::CalibrationParams, QoS::DiversityQoS());

}  // namespace topic
}  // namespace application
}  // namespace xr
