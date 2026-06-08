// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from x2robot_msgs:msg/EnumMotionState.idl
// generated code does not contain a copyright notice

#include "x2robot_msgs/msg/detail/enum_motion_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_x2robot_msgs
const rosidl_type_hash_t *
x2robot_msgs__msg__EnumMotionState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8e, 0x4e, 0x5c, 0x48, 0x64, 0x75, 0x0d, 0x9c,
      0x93, 0xdc, 0x73, 0xc9, 0x51, 0xd5, 0x5c, 0x06,
      0x53, 0x18, 0xee, 0x92, 0xdc, 0xc1, 0x5f, 0x17,
      0xc7, 0x29, 0xf8, 0x14, 0x35, 0xb6, 0x0d, 0x98,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char x2robot_msgs__msg__EnumMotionState__TYPE_NAME[] = "x2robot_msgs/msg/EnumMotionState";

// Define type names, field names, and default values
static char x2robot_msgs__msg__EnumMotionState__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field x2robot_msgs__msg__EnumMotionState__FIELDS[] = {
  {
    {x2robot_msgs__msg__EnumMotionState__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
x2robot_msgs__msg__EnumMotionState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {x2robot_msgs__msg__EnumMotionState__TYPE_NAME, 32, 32},
      {x2robot_msgs__msg__EnumMotionState__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 BAGGING = 1\n"
  "uint8 SLACKING_OFF = 2\n"
  "uint8 REPLAY_BAG = 3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
x2robot_msgs__msg__EnumMotionState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {x2robot_msgs__msg__EnumMotionState__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 62, 62},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
x2robot_msgs__msg__EnumMotionState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *x2robot_msgs__msg__EnumMotionState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
