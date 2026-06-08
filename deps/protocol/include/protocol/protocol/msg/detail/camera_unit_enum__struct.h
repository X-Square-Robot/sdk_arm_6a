// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/CameraUnitEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/camera_unit_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__CAMERA_UNIT_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__CAMERA_UNIT_ENUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'HEARTBEAT_TIMEOUT'.
enum
{
  protocol__msg__CameraUnitEnum__HEARTBEAT_TIMEOUT = 1ul
};

/// Constant 'CAMERA_TYPE_LEFT_HAND_DISCONNECT'.
/**
  * /dev/ArmCamLeft设备节点连接失败
 */
enum
{
  protocol__msg__CameraUnitEnum__CAMERA_TYPE_LEFT_HAND_DISCONNECT = 17ul
};

/// Constant 'CAMERA_TYPE_RIGHT_HAND_DISCONNECT'.
/**
  * /dev/ArmCamRight设备节点连接失败
 */
enum
{
  protocol__msg__CameraUnitEnum__CAMERA_TYPE_RIGHT_HAND_DISCONNECT = 18ul
};

/// Constant 'CAMERA_TYPE_CHEST_BACK_DISCONNECT'.
/**
  * /dev/BackCamLeft设备节点连接失败
 */
enum
{
  protocol__msg__CameraUnitEnum__CAMERA_TYPE_CHEST_BACK_DISCONNECT = 19ul
};

/// Constant 'CAMERA_TYPE_HEAD_STEREO_DISCONNECT'.
/**
  * /dev/HeadStereoRGB设备节点连接失败
 */
enum
{
  protocol__msg__CameraUnitEnum__CAMERA_TYPE_HEAD_STEREO_DISCONNECT = 20ul
};

/// Constant 'CAMERA_TYPE_SHOULDER_FISHEYE_LEFT_DISCONNECT'.
/**
  * /dev/BirdEyeViewCamLeft 设备节点连接失败
 */
enum
{
  protocol__msg__CameraUnitEnum__CAMERA_TYPE_SHOULDER_FISHEYE_LEFT_DISCONNECT = 21ul
};

/// Constant 'CAMERA_TYPE_SHOULDER_FISHEYE_RIGHT_DISCONNECT'.
/**
  * /dev/BirdEyeViewCamRight设备节点连接失败
 */
enum
{
  protocol__msg__CameraUnitEnum__CAMERA_TYPE_SHOULDER_FISHEYE_RIGHT_DISCONNECT = 22ul
};

/// Constant 'CAMERA_TYPE_CHEST_FRONT_DISCONNECT'.
/**
  * /dev/BellyCamRight设备节点连接失败
 */
enum
{
  protocol__msg__CameraUnitEnum__CAMERA_TYPE_CHEST_FRONT_DISCONNECT = 23ul
};

/// Constant 'CAMERA_TYPE_LEFT_HAND_FRAME_RATE_ABNORMAL'.
/**
  * CAMERA_TYPE_LEFT_HAND 相机帧率异常
 */
enum
{
  protocol__msg__CameraUnitEnum__CAMERA_TYPE_LEFT_HAND_FRAME_RATE_ABNORMAL = 65ul
};

/// Constant 'CAMERA_TYPE_HEAD_FRAME_RATE_ABNORMAL'.
/**
  * CAMERA_TYPE_HEAD 相机帧率异常
 */
enum
{
  protocol__msg__CameraUnitEnum__CAMERA_TYPE_HEAD_FRAME_RATE_ABNORMAL = 66ul
};

/// Constant 'CAMERA_TYPE_RIGHT_HAND_FRAME_RATE_ABNORMAL'.
/**
  * CAMERA_TYPE_RIGHT_HAND 相机帧率异常
 */
enum
{
  protocol__msg__CameraUnitEnum__CAMERA_TYPE_RIGHT_HAND_FRAME_RATE_ABNORMAL = 67ul
};

/// Constant 'CAMERA_TYPE_CHEST_BACK_FRAME_RATE_ABNORMAL'.
/**
  * CAMERA_TYPE_CHEST_BACK 相机帧率异常
 */
enum
{
  protocol__msg__CameraUnitEnum__CAMERA_TYPE_CHEST_BACK_FRAME_RATE_ABNORMAL = 68ul
};

/// Constant 'CAMERA_TYPE_CHASSIS_FRAME_RATE_ABNORMAL'.
/**
  * CAMERA_TYPE_CHASSIS_FRAME_RATE 相机帧率异常
 */
enum
{
  protocol__msg__CameraUnitEnum__CAMERA_TYPE_CHASSIS_FRAME_RATE_ABNORMAL = 69ul
};

/// Constant 'CAMERA_TYPE_HEAD_STEREO_FRAME_RATE_ABNORMAL'.
/**
  * CAMERA_TYPE_HEAD_STEREO 相机帧率异常
 */
enum
{
  protocol__msg__CameraUnitEnum__CAMERA_TYPE_HEAD_STEREO_FRAME_RATE_ABNORMAL = 70ul
};

/// Constant 'CAMERA_TYPE_SHOULDER_FISHEYE_LEFT_FRAME_RATE_ABNORMAL'.
/**
  * CAMERA_TYPE_SHOULDER_FISHEYE_LEFT 相机帧率异常
 */
enum
{
  protocol__msg__CameraUnitEnum__CAMERA_TYPE_SHOULDER_FISHEYE_LEFT_FRAME_RATE_ABNORMAL = 71ul
};

/// Constant 'CAMERA_TYPE_SHOULDER_FISHEYE_RIGHT_FRAME_RATE_ABNORMAL'.
/**
  * CAMERA_TYPE_SHOULDER_FISHEYE_RIGHT 相机帧率异常
 */
enum
{
  protocol__msg__CameraUnitEnum__CAMERA_TYPE_SHOULDER_FISHEYE_RIGHT_FRAME_RATE_ABNORMAL = 72ul
};

/// Constant 'CAMERA_TYPE_BEV_FRAME_RATE_ABNORMAL'.
/**
  * CAMERA_TYPE_BEV 相机帧率异常
 */
enum
{
  protocol__msg__CameraUnitEnum__CAMERA_TYPE_BEV_FRAME_RATE_ABNORMAL = 73ul
};

/// Constant 'CAMERA_TYPE_CHEST_FRONT_FRAME_RATE_ABNORMAL'.
/**
  * CAMERA_TYPE_CHEST_FRONT 相机帧率异常
 */
enum
{
  protocol__msg__CameraUnitEnum__CAMERA_TYPE_CHEST_FRONT_FRAME_RATE_ABNORMAL = 74ul
};

/// Struct defined in msg/CameraUnitEnum in the package protocol.
/**
  * Unit: CAMERA
  * 相机节点获取状态超时
 */
typedef struct protocol__msg__CameraUnitEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__CameraUnitEnum;

// Struct for a sequence of protocol__msg__CameraUnitEnum.
typedef struct protocol__msg__CameraUnitEnum__Sequence
{
  protocol__msg__CameraUnitEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__CameraUnitEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__CAMERA_UNIT_ENUM__STRUCT_H_
