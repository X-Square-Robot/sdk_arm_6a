// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/HeadMountErrorEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/head_mount_error_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__HeadMountErrorEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x88, 0xc6, 0x0d, 0xfd, 0xe6, 0x86, 0x28, 0xdd,
      0x04, 0xb5, 0x71, 0xe3, 0x63, 0x37, 0xb5, 0xf6,
      0x91, 0xad, 0x27, 0xcd, 0x6b, 0x1c, 0x21, 0xaa,
      0x5b, 0x2f, 0x89, 0xcb, 0x68, 0xba, 0x33, 0x34,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__HeadMountErrorEnum__TYPE_NAME[] = "protocol/msg/HeadMountErrorEnum";

// Define type names, field names, and default values
static char protocol__msg__HeadMountErrorEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__HeadMountErrorEnum__FIELDS[] = {
  {
    {protocol__msg__HeadMountErrorEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
protocol__msg__HeadMountErrorEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__HeadMountErrorEnum__TYPE_NAME, 31, 31},
      {protocol__msg__HeadMountErrorEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Unit: HEAD_MOUNT\n"
  "# \\xe5\\xbf\\x83\\xe8\\xb7\\xb3\\xe8\\xb6\\x85\\xe6\\x97\\xb6\n"
  "uint32 HEARTBEAT_TIMEOUT = 0x01\n"
  "# \\xe6\\x8c\\x87\\xe7\\xa4\\xba\\xe7\\x81\\xaf\\xe9\\x85\\x8d\\xe7\\xbd\\xae\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint32 HEAD_LED_FAIL = 0x11\n"
  "# \\xe6\\x8c\\x89\\xe9\\x94\\xae\\xe9\\x85\\x8d\\xe7\\xbd\\xae\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint32 GRIPPER_BUTTON_FAIL = 0x12\n"
  "# IMU\\xe9\\x85\\x8d\\xe7\\xbd\\xae\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint32 GRIPPER_IMU_FAIL = 0x13\n"
  "# IMU\\xe9\\x85\\x8d\\xe7\\xbd\\xae\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint32 HEAD_IMU_FAIL = 0x15\n"
  "# \\xe7\\x94\\xb5\\xe6\\xb1\\xa0\\xe9\\x85\\x8d\\xe7\\xbd\\xae\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint32 HEAD_BATTERY_FAIL = 0x14";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__HeadMountErrorEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__HeadMountErrorEnum__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 259, 259},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__HeadMountErrorEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__HeadMountErrorEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
