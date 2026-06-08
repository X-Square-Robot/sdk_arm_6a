// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/HalUnitEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/hal_unit_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__HalUnitEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf0, 0x6a, 0x2f, 0xe0, 0x8f, 0x98, 0xba, 0x97,
      0xe7, 0x0d, 0xba, 0x15, 0x82, 0x1d, 0x4f, 0x3e,
      0x1b, 0x88, 0xa5, 0xdc, 0xd1, 0x85, 0x2d, 0xc0,
      0xb3, 0xfe, 0xa0, 0x56, 0x9d, 0x46, 0xe2, 0xc0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__HalUnitEnum__TYPE_NAME[] = "protocol/msg/HalUnitEnum";

// Define type names, field names, and default values
static char protocol__msg__HalUnitEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__HalUnitEnum__FIELDS[] = {
  {
    {protocol__msg__HalUnitEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
protocol__msg__HalUnitEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__HalUnitEnum__TYPE_NAME, 24, 24},
      {protocol__msg__HalUnitEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 HAL = 0x01\n"
  "uint8 CHASSIS = 0x02\n"
  "uint8 BODY = 0x03\n"
  "uint8 HEAD = 0x04\n"
  "uint8 LIDAR = 0x05\n"
  "uint8 GRIPPER_LEFT = 0x06\n"
  "uint8 GRIPPER_RIGHT = 0x07\n"
  "uint8 HEAD_MOUNT = 0x08\n"
  "# HAL\\xe8\\x8e\\xb7\\xe5\\x8f\\x96\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe8\\xb6\\x85\\xe6\\x97\\xb6\n"
  "uint32 HEARTBEAT_TIMEOUT = 0x01\n"
  "# \\xe5\\xba\\x95\\xe7\\x9b\\x98\\xe6\\x9d\\xbf\\xe6\\x96\\xad\\xe8\\xbf\\x9e\n"
  "uint32 CHASSIS_CONN_FAIL = 0x11\n"
  "# \\xe8\\xba\\xab\\xe4\\xbd\\x93\\xe6\\x9d\\xbf\\xe6\\x96\\xad\\xe8\\xbf\\x9e\n"
  "uint32 BODY_CONN_FAIL = 0x12\n"
  "# \\xe5\\xa4\\xb4\\xe9\\x83\\xa8\\xe6\\x9d\\xbf\\xe6\\x96\\xad\\xe8\\xbf\\x9e\n"
  "uint32 HEAD_CONN_FAIL = 0x13\n"
  "# \\xe7\\x94\\xb5\\xe6\\xba\\x90\\xe6\\x9d\\xbf\\xe6\\x96\\xad\\xe8\\xbf\\x9e\n"
  "uint32 POWER_CONN_FAIL = 0x14\n"
  "# \\xe5\\xa4\\xb4\\xe9\\x83\\xa8\\xe6\\x9d\\xbf\\xe7\\x89\\x88\\xe6\\x9c\\xac\\xe4\\xbf\\xa1\\xe6\\x81\\xaf\\xe8\\xa7\\xa3\\xe6\\x9e\\x90\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 PARSE_HEAD_VERSION_FAIL = 0x20\n"
  "# \\xe5\\xa4\\xb4\\xe9\\x83\\xa8\\xe6\\x9d\\xbf\\xe4\\xba\\x91\\xe5\\x8f\\xb0\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe6\\x95\\xb0\\xe6\\x8d\\xae\\xe8\\xa7\\xa3\\xe6\\x9e\\x90\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 PARSE_HEAD_JOINT_FAIL = 0x21\n"
  "# \\xe5\\xa4\\xb4\\xe9\\x83\\xa8\\xe6\\x9d\\xbfIMU\\xe6\\x95\\xb0\\xe6\\x8d\\xae\\xe8\\xa7\\xa3\\xe6\\x9e\\x90\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 PARSE_HEAD_IMU_FAIL = 0x22\n"
  "# \\xe5\\xa4\\xb4\\xe9\\x83\\xa8\\xe6\\x9d\\xbf\\xe6\\x97\\xa5\\xe5\\xbf\\x97\\xe6\\x95\\xb0\\xe6\\x8d\\xae\\xe8\\xa7\\xa3\\xe6\\x9e\\x90\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 PARSE_HEAD_LOG_FAIL = 0x23\n"
  "# \\xe5\\xa4\\xb4\\xe9\\x83\\xa8\\xe6\\x9d\\xbf\\xe7\\x94\\xb5\\xe6\\xba\\x90\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe6\\x95\\xb0\\xe6\\x8d\\xae\\xe8\\xa7\\xa3\\xe6\\x9e\\x90\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 PARSE_HEAD_POWER_FAIL = 0x24\n"
  "# \\xe8\\xba\\xab\\xe4\\xbd\\x93\\xe6\\x9d\\xbf\\xe7\\x89\\x88\\xe6\\x9c\\xac\\xe4\\xbf\\xa1\\xe6\\x81\\xaf\\xe8\\xa7\\xa3\\xe6\\x9e\\x90\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 PARSE_BODY_VERSION_FAIL = 0x25\n"
  "# \\xe8\\xba\\xab\\xe4\\xbd\\x93\\xe6\\x9d\\xbf\\xe4\\xba\\x91\\xe5\\x8f\\xb0\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe6\\x95\\xb0\\xe6\\x8d\\xae\\xe8\\xa7\\xa3\\xe6\\x9e\\x90\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 PARSE_BODY_HEAD_JOINT_FAIL = 0x26\n"
  "# \\xe8\\xba\\xab\\xe4\\xbd\\x93\\xe6\\x9d\\xbfIMU\\xe6\\x95\\xb0\\xe6\\x8d\\xae\\xe8\\xa7\\xa3\\xe6\\x9e\\x90\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 PARSE_BODY_IMU_FAIL = 0x27\n"
  "# \\xe8\\xba\\xab\\xe4\\xbd\\x93\\xe6\\x9d\\xbf\\xe6\\x97\\xa5\\xe5\\xbf\\x97\\xe6\\x95\\xb0\\xe6\\x8d\\xae\\xe8\\xa7\\xa3\\xe6\\x9e\\x90\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 PARSE_BODY_LOG_FAIL = 0x28\n"
  "# \\xe8\\xba\\xab\\xe4\\xbd\\x93\\xe6\\x9d\\xbf\\xe7\\x94\\xb5\\xe6\\xba\\x90\\xe7\\xb3\\xbb\\xe7\\xbb\\x9f\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe6\\x95\\xb0\\xe6\\x8d\\xae\\xe8\\xa7\\xa3\\xe6\\x9e\\x90\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 PARSE_BODY_POWER_FAIL = 0x29\n"
  "# \\xe5\\xba\\x95\\xe7\\x9b\\x98\\xe6\\x9d\\xbf\\xe7\\x89\\x88\\xe6\\x9c\\xac\\xe4\\xbf\\xa1\\xe6\\x81\\xaf\\xe8\\xa7\\xa3\\xe6\\x9e\\x90\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 PARSE_CHASSIS_VERSION_FAIL = 0x2A\n"
  "# \\xe5\\xba\\x95\\xe7\\x9b\\x98\\xe6\\x9d\\xbf\\xe7\\xb3\\xbb\\xe7\\xbb\\x9f\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe6\\x95\\xb0\\xe6\\x8d\\xae\\xe8\\xa7\\xa3\\xe6\\x9e\\x90\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 PARSE_CHASSIS_POWER_FAIL = 0x2B\n"
  "# \\xe5\\xba\\x95\\xe7\\x9b\\x98\\xe6\\x9d\\xbfTOF\\xe4\\xbc\\xa0\\xe6\\x84\\x9f\\xe5\\x99\\xa8\\xe6\\x95\\xb0\\xe6\\x8d\\xae\\xe8\\xa7\\xa3\\xe6\\x9e\\x90\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 PARSE_CHASSIS_TOF_FAIL = 0x2C\n"
  "# \\xe5\\xba\\x95\\xe7\\x9b\\x98\\xe6\\x9d\\xbf\\xe8\\xb6\\x85\\xe5\\xa3\\xb0\\xe6\\xb3\\xa2\\xe4\\xbc\\xa0\\xe6\\x84\\x9f\\xe5\\x99\\xa8\\xe6\\x95\\xb0\\xe6\\x8d\\xae\\xe8\\xa7\\xa3\\xe6\\x9e\\x90\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 PARSE_CHASSIS_ULTRASONIC_FAIL = 0x2D\n"
  "# \\xe5\\xba\\x95\\xe7\\x9b\\x98\\xe6\\x9d\\xbfIMU\\xe6\\x95\\xb0\\xe6\\x8d\\xae\\xe8\\xa7\\xa3\\xe6\\x9e\\x90\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 PARSE_CHASSIS_IMU_FAIL = 0x2E\n"
  "# \\xe5\\xba\\x95\\xe7\\x9b\\x98\\xe6\\x9d\\xbf\\xe6\\x97\\xa5\\xe5\\xbf\\x97\\xe6\\x95\\xb0\\xe6\\x8d\\xae\\xe8\\xa7\\xa3\\xe6\\x9e\\x90\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 PARSE_CHASSIS_LOG_FAIL = 0x2F\n"
  "# \\xe5\\xba\\x95\\xe7\\x9b\\x98\\xe6\\x9d\\xbf\\xe5\\x85\\x85\\xe7\\x94\\xb5\\xe6\\xa1\\xa9\\xe6\\x95\\xb0\\xe6\\x8d\\xae\\xe8\\xa7\\xa3\\xe6\\x9e\\x90\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 PARSE_CHASSIS_ROBOT_STATION_INFO_FAIL = 0x30\n"
  "# \\xe5\\xba\\x95\\xe7\\x9b\\x98\\xe6\\x9d\\xbf\\xe9\\x87\\x8c\\xe7\\xa8\\x8b\\xe8\\xae\\xa1Odom\\xe6\\x95\\xb0\\xe6\\x8d\\xae\\xe8\\xa7\\xa3\\xe6\\x9e\\x90\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 PARSE_CHASSIS_ODOM_FAIL = 0x31\n"
  "# \\xe8\\xba\\xab\\xe4\\xbd\\x93\\xe6\\x9d\\xbfTOF\\xe4\\xbc\\xa0\\xe6\\x84\\x9f\\xe5\\x99\\xa8\\xe6\\x95\\xb0\\xe6\\x8d\\xae\\xe8\\xa7\\xa3\\xe6\\x9e\\x90\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 PARSE_BODY_TOF_FAIL = 0x32\n"
  "# \\xe8\\xba\\xab\\xe4\\xbd\\x93\\xe6\\x9d\\xbf\\xe8\\xb6\\x85\\xe5\\xa3\\xb0\\xe6\\xb3\\xa2\\xe4\\xbc\\xa0\\xe6\\x84\\x9f\\xe5\\x99\\xa8\\xe6\\x95\\xb0\\xe6\\x8d\\xae\\xe8\\xa7\\xa3\\xe6\\x9e\\x90\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 PARSE_BODY_ULTRASONIC_FAIL = 0x33";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__HalUnitEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__HalUnitEnum__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1443, 1443},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__HalUnitEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__HalUnitEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
