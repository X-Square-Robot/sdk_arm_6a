#pragma once

#include <std_msgs/msg/empty.hpp>

#include "protocol/topic.h"

namespace xr {
namespace databridge {
namespace topic {

// 外设事件，用于自定义交互功能

// 按键1短按事件topic
TOPIC(Button1ShortPressed, "/custom_event/button1_short_pressed", std_msgs::msg::Empty, QoS::SystemDefaultQoS());

// 按键2短按事件topic
TOPIC(Button2ShortPressed, "/custom_event/button2_short_pressed", std_msgs::msg::Empty, QoS::SystemDefaultQoS());

// 按键3短按事件topic
TOPIC(Button3ShortPressed, "/custom_event/button3_short_pressed", std_msgs::msg::Empty, QoS::SystemDefaultQoS());

// 按键4短按事件topic
TOPIC(Button4ShortPressed, "/custom_event/button4_short_pressed", std_msgs::msg::Empty, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace databridge
}  // namespace xr
