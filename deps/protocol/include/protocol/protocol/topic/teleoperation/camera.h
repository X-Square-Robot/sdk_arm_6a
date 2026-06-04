#pragma once

#include <sensor_msgs/msg/compressed_image.hpp>
#include <sensor_msgs/msg/image.hpp>

#include "protocol/msg/camera_self_check.hpp"
#include "protocol/msg/camera_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 左机械臂相机
TOPIC(LeftHandCamera,
      "/camera1/usb_cam1/image_raw/image_compressed",
      sensor_msgs::msg::CompressedImage,
      QoS::SystemDefaultQoS());
// 头部相机
TOPIC(HeadCamera,
      "/camera2/usb_cam2/image_raw/image_compressed",
      sensor_msgs::msg::CompressedImage,
      QoS::SystemDefaultQoS());
// 右机械臂相机
TOPIC(RightHandCamera,
      "/camera3/usb_cam3/image_raw/image_compressed",
      sensor_msgs::msg::CompressedImage,
      QoS::SystemDefaultQoS());

// 左机械臂拉流帧
TOPIC(LeftHandFrame, "/teleoperation/master/video0/frame_image", sensor_msgs::msg::Image, QoS::SystemDefaultQoS());
// 头部拉流帧
TOPIC(HeadFrame, "/teleoperation/master/video1/frame_image", sensor_msgs::msg::Image, QoS::SystemDefaultQoS());
// 右机械臂拉流帧
TOPIC(RightHandFrame, "/teleoperation/master/video2/frame_image", sensor_msgs::msg::Image, QoS::SystemDefaultQoS());

// 相机状态发布
TOPIC(CameraStatus, "/teleoperation/master/camera_status", protocol::msg::CameraStatus, QoS::SystemDefaultQoS());

// 左机械臂推流帧
TOPIC(LeftHandRaw, "/camera1/usb_cam1/image_raw", sensor_msgs::msg::Image, QoS::SystemDefaultQoS());
// 头部推流帧
TOPIC(HeadRaw, "/camera2/usb_cam2/image_raw", sensor_msgs::msg::Image, QoS::SystemDefaultQoS());
// 右机械臂推流帧
TOPIC(RightHandRaw, "/camera3/usb_cam3/image_raw", sensor_msgs::msg::Image, QoS::SystemDefaultQoS());

// 左机械臂压缩推流帧
TOPIC(LeftHandCompressed, "/camera1/usb_cam1/image_raw/compressed", sensor_msgs::msg::CompressedImage, QoS::SystemDefaultQoS());
// 头部压缩推流帧
TOPIC(HeadCompressed, "/camera2/usb_cam2/image_raw/compressed", sensor_msgs::msg::CompressedImage, QoS::SystemDefaultQoS());
// 右机械臂压缩推流帧
TOPIC(RightHandCompressed, "/camera3/usb_cam3/image_raw/compressed", sensor_msgs::msg::CompressedImage, QoS::SystemDefaultQoS());

// 左手相机自检
TOPIC(LeftCameraSelfCheck, "/camera_left/camera_self_check", protocol::msg::CameraSelfCheck, QoS::SystemDefaultQoS());
// 右手相机自检
TOPIC(RightCameraSelfCheck, "/camera_right/camera_self_check", protocol::msg::CameraSelfCheck, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
