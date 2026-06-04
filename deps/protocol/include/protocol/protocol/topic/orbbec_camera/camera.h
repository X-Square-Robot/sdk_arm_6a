#pragma once

#include <sensor_msgs/msg/compressed_image.hpp>
#include <sensor_msgs/msg/image.hpp>

#include "protocol/topic.h"

namespace xr {
namespace orbbec_camera {
namespace topic {

// 头部相机原始数据流
TOPIC(HeadCameraRaw, "/camera_head_front/color/image_raw", sensor_msgs::msg::Image, QoS::SystemDefaultQoS());

// 头部相机压缩数据流
TOPIC(HeadCameraCompressed,
      "/camera_head_front/color/image_raw/compressed",
      sensor_msgs::msg::CompressedImage,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace orbbec_camera
}  // namespace xr
