#pragma once

#include "protocol/msg/enum_emoji_seq.hpp"
#include "protocol/msg/head_emoji_control.hpp"
#include "protocol/topic.h"

namespace xr {
namespace hal {
namespace topic {

// 头部表情控制
TOPIC(HeadEmojiControl, "/hal/head/emoji_control", protocol::msg::HeadEmojiControl, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace hal
}  // namespace xr
