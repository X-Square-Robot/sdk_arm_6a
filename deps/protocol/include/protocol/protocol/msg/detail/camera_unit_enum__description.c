// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/CameraUnitEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/camera_unit_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__CameraUnitEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb3, 0x4b, 0x8a, 0x28, 0xb2, 0x7d, 0xd3, 0x75,
      0x24, 0xa4, 0xe4, 0x43, 0x85, 0xd3, 0xa6, 0xbd,
      0xd0, 0xee, 0xc3, 0x1c, 0xf8, 0x75, 0xbe, 0x9a,
      0xe9, 0xcd, 0x62, 0x5c, 0x47, 0x2b, 0xd6, 0x29,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__CameraUnitEnum__TYPE_NAME[] = "protocol/msg/CameraUnitEnum";

// Define type names, field names, and default values
static char protocol__msg__CameraUnitEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__CameraUnitEnum__FIELDS[] = {
  {
    {protocol__msg__CameraUnitEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
protocol__msg__CameraUnitEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__CameraUnitEnum__TYPE_NAME, 27, 27},
      {protocol__msg__CameraUnitEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Unit: CAMERA\n"
  "# \\xe7\\x9b\\xb8\\xe6\\x9c\\xba\\xe8\\x8a\\x82\\xe7\\x82\\xb9\\xe8\\x8e\\xb7\\xe5\\x8f\\x96\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe8\\xb6\\x85\\xe6\\x97\\xb6\n"
  "uint32 HEARTBEAT_TIMEOUT = 0x01\n"
  "# /dev/ArmCamLeft\\xe8\\xae\\xbe\\xe5\\xa4\\x87\\xe8\\x8a\\x82\\xe7\\x82\\xb9\\xe8\\xbf\\x9e\\xe6\\x8e\\xa5\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 CAMERA_TYPE_LEFT_HAND_DISCONNECT = 0x11\n"
  "# /dev/ArmCamRight\\xe8\\xae\\xbe\\xe5\\xa4\\x87\\xe8\\x8a\\x82\\xe7\\x82\\xb9\\xe8\\xbf\\x9e\\xe6\\x8e\\xa5\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 CAMERA_TYPE_RIGHT_HAND_DISCONNECT = 0x12\n"
  "# /dev/BackCamLeft\\xe8\\xae\\xbe\\xe5\\xa4\\x87\\xe8\\x8a\\x82\\xe7\\x82\\xb9\\xe8\\xbf\\x9e\\xe6\\x8e\\xa5\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 CAMERA_TYPE_CHEST_BACK_DISCONNECT = 0x13\n"
  "# /dev/HeadStereoRGB\\xe8\\xae\\xbe\\xe5\\xa4\\x87\\xe8\\x8a\\x82\\xe7\\x82\\xb9\\xe8\\xbf\\x9e\\xe6\\x8e\\xa5\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 CAMERA_TYPE_HEAD_STEREO_DISCONNECT = 0x14\n"
  "# /dev/BirdEyeViewCamLeft \\xe8\\xae\\xbe\\xe5\\xa4\\x87\\xe8\\x8a\\x82\\xe7\\x82\\xb9\\xe8\\xbf\\x9e\\xe6\\x8e\\xa5\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 CAMERA_TYPE_SHOULDER_FISHEYE_LEFT_DISCONNECT = 0x15\n"
  "# /dev/BirdEyeViewCamRight\\xe8\\xae\\xbe\\xe5\\xa4\\x87\\xe8\\x8a\\x82\\xe7\\x82\\xb9\\xe8\\xbf\\x9e\\xe6\\x8e\\xa5\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 CAMERA_TYPE_SHOULDER_FISHEYE_RIGHT_DISCONNECT = 0x16\n"
  "# /dev/BellyCamRight\\xe8\\xae\\xbe\\xe5\\xa4\\x87\\xe8\\x8a\\x82\\xe7\\x82\\xb9\\xe8\\xbf\\x9e\\xe6\\x8e\\xa5\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 CAMERA_TYPE_CHEST_FRONT_DISCONNECT = 0x17\n"
  "# CAMERA_TYPE_LEFT_HAND \\xe7\\x9b\\xb8\\xe6\\x9c\\xba\\xe5\\xb8\\xa7\\xe7\\x8e\\x87\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint32 CAMERA_TYPE_LEFT_HAND_FRAME_RATE_ABNORMAL = 0x41\n"
  "# CAMERA_TYPE_HEAD \\xe7\\x9b\\xb8\\xe6\\x9c\\xba\\xe5\\xb8\\xa7\\xe7\\x8e\\x87\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint32 CAMERA_TYPE_HEAD_FRAME_RATE_ABNORMAL = 0x42\n"
  "# CAMERA_TYPE_RIGHT_HAND \\xe7\\x9b\\xb8\\xe6\\x9c\\xba\\xe5\\xb8\\xa7\\xe7\\x8e\\x87\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint32 CAMERA_TYPE_RIGHT_HAND_FRAME_RATE_ABNORMAL = 0x43\n"
  "# CAMERA_TYPE_CHEST_BACK \\xe7\\x9b\\xb8\\xe6\\x9c\\xba\\xe5\\xb8\\xa7\\xe7\\x8e\\x87\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint32 CAMERA_TYPE_CHEST_BACK_FRAME_RATE_ABNORMAL = 0x44\n"
  "# CAMERA_TYPE_CHASSIS_FRAME_RATE \\xe7\\x9b\\xb8\\xe6\\x9c\\xba\\xe5\\xb8\\xa7\\xe7\\x8e\\x87\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint32 CAMERA_TYPE_CHASSIS_FRAME_RATE_ABNORMAL = 0x45\n"
  "# CAMERA_TYPE_HEAD_STEREO \\xe7\\x9b\\xb8\\xe6\\x9c\\xba\\xe5\\xb8\\xa7\\xe7\\x8e\\x87\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint32 CAMERA_TYPE_HEAD_STEREO_FRAME_RATE_ABNORMAL = 0x46\n"
  "# CAMERA_TYPE_SHOULDER_FISHEYE_LEFT \\xe7\\x9b\\xb8\\xe6\\x9c\\xba\\xe5\\xb8\\xa7\\xe7\\x8e\\x87\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint32 CAMERA_TYPE_SHOULDER_FISHEYE_LEFT_FRAME_RATE_ABNORMAL = 0x47\n"
  "# CAMERA_TYPE_SHOULDER_FISHEYE_RIGHT \\xe7\\x9b\\xb8\\xe6\\x9c\\xba\\xe5\\xb8\\xa7\\xe7\\x8e\\x87\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint32 CAMERA_TYPE_SHOULDER_FISHEYE_RIGHT_FRAME_RATE_ABNORMAL = 0x48\n"
  "# CAMERA_TYPE_BEV \\xe7\\x9b\\xb8\\xe6\\x9c\\xba\\xe5\\xb8\\xa7\\xe7\\x8e\\x87\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint32 CAMERA_TYPE_BEV_FRAME_RATE_ABNORMAL = 0x49\n"
  "# CAMERA_TYPE_CHEST_FRONT \\xe7\\x9b\\xb8\\xe6\\x9c\\xba\\xe5\\xb8\\xa7\\xe7\\x8e\\x87\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint32 CAMERA_TYPE_CHEST_FRONT_FRAME_RATE_ABNORMAL = 0x4A";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__CameraUnitEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__CameraUnitEnum__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1545, 1545},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__CameraUnitEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__CameraUnitEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
