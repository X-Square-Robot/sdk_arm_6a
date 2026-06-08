// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from x2robot_msgs:msg/EnumControllerMode.idl
// generated code does not contain a copyright notice

#include "x2robot_msgs/msg/detail/enum_controller_mode__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_x2robot_msgs
const rosidl_type_hash_t *
x2robot_msgs__msg__EnumControllerMode__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x90, 0xe2, 0x4e, 0x1d, 0xe8, 0xb6, 0x2e, 0xa9,
      0x97, 0x50, 0x80, 0x2a, 0x5c, 0x1d, 0x47, 0x9a,
      0x8e, 0xaf, 0xdf, 0x3e, 0x8d, 0xe8, 0x61, 0xeb,
      0x43, 0xff, 0xc7, 0x87, 0xc8, 0x9c, 0x34, 0x64,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char x2robot_msgs__msg__EnumControllerMode__TYPE_NAME[] = "x2robot_msgs/msg/EnumControllerMode";

// Define type names, field names, and default values
static char x2robot_msgs__msg__EnumControllerMode__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field x2robot_msgs__msg__EnumControllerMode__FIELDS[] = {
  {
    {x2robot_msgs__msg__EnumControllerMode__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
x2robot_msgs__msg__EnumControllerMode__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {x2robot_msgs__msg__EnumControllerMode__TYPE_NAME, 35, 35},
      {x2robot_msgs__msg__EnumControllerMode__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 IDLE = 1\n"
  "uint8 SWITHCING = 255\n"
  "uint8 DATA_COLLECT = 2\n"
  "uint8 REPLAY = 3\n"
  "uint8 INFERENCE = 4";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
x2robot_msgs__msg__EnumControllerMode__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {x2robot_msgs__msg__EnumControllerMode__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 97, 97},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
x2robot_msgs__msg__EnumControllerMode__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *x2robot_msgs__msg__EnumControllerMode__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
