#pragma once
#include "protocol/topic.h"
#include "std_msgs/msg/bool.hpp"
#include "std_msgs/msg/int32.hpp"
#include "std_msgs/msg/string.hpp"
namespace xr {
namespace mediacenter {
namespace topic {

// MIC状态信息
TOPIC(AudioState, "/mediacenter/mic_enable", std_msgs::msg::Bool, QoS::SystemDefaultQoS());
// Audio_PULL URL
TOPIC(AudioPullURL, "/mediacenter/audio/pull", std_msgs::msg::String, QoS::SystemDefaultQoS());
// AudioSize 用于状态统计
TOPIC(AudioSize, "/mediacenter/audio/size", std_msgs::msg::Int32, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace mediacenter
}  // namespace xr
