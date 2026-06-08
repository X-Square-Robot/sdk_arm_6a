// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from x2robot_msgs:msg/EnumMoveitMoveResult.idl
// generated code does not contain a copyright notice

#include "x2robot_msgs/msg/detail/enum_moveit_move_result__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_x2robot_msgs
const rosidl_type_hash_t *
x2robot_msgs__msg__EnumMoveitMoveResult__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x52, 0xc5, 0xb8, 0xc2, 0x1b, 0xee, 0x7c, 0x2a,
      0xd1, 0xae, 0x23, 0x97, 0x26, 0xd0, 0x4c, 0xbf,
      0xc0, 0x90, 0xfe, 0xa6, 0xfd, 0x81, 0xec, 0x9c,
      0x23, 0x0c, 0x64, 0x6b, 0x4f, 0x7c, 0xa1, 0x98,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char x2robot_msgs__msg__EnumMoveitMoveResult__TYPE_NAME[] = "x2robot_msgs/msg/EnumMoveitMoveResult";

// Define type names, field names, and default values
static char x2robot_msgs__msg__EnumMoveitMoveResult__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field x2robot_msgs__msg__EnumMoveitMoveResult__FIELDS[] = {
  {
    {x2robot_msgs__msg__EnumMoveitMoveResult__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
x2robot_msgs__msg__EnumMoveitMoveResult__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {x2robot_msgs__msg__EnumMoveitMoveResult__TYPE_NAME, 37, 37},
      {x2robot_msgs__msg__EnumMoveitMoveResult__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 SUCCESS = 0  # \\xe8\\xa7\\x84\\xe5\\x88\\x92\\xe4\\xb8\\x8e\\xe6\\x89\\xa7\\xe8\\xa1\\x8c\\xe6\\x88\\x90\\xe5\\x8a\\x9f\n"
  "uint8 INVALID_TARGET = 1  # \\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe6\\x97\\xa0\\xe6\\x95\\x88\n"
  "uint8 INVALID_CURRENT_POS = 2  # \\xe6\\x9c\\xaa\\xe6\\x88\\x90\\xe5\\x8a\\x9f\\xe8\\x8e\\xb7\\xe5\\x8f\\x96\\xe5\\xbd\\x93\\xe5\\x89\\x8d\\xe4\\xbd\\x8d\\xe7\\xbd\\xae\n"
  "uint8 PLANING_ACTION_NOT_READY = 3  # Moveit\\xe8\\xa7\\x84\\xe5\\x88\\x92\\xe6\\x9c\\x8d\\xe5\\x8a\\xa1(/move_action)\\xe6\\x9c\\xaa\\xe5\\xb0\\xb1\\xe7\\xbb\\xaa\n"
  "uint8 PLANING_ACTION_REJECTED = 4  # \\xe8\\xa7\\x84\\xe5\\x88\\x92\\xe8\\xaf\\xb7\\xe6\\xb1\\x82\\xe8\\xa2\\xab\\xe6\\x8b\\x92\\xe7\\xbb\\x9d\n"
  "uint8 PLANING_TIMEOUT = 5  # \\xe8\\xa7\\x84\\xe5\\x88\\x92\\xe8\\xb6\\x85\\xe6\\x97\\xb6\n"
  "uint8 PLANING_FAILED = 6  # \\xe8\\xa7\\x84\\xe5\\x88\\x92\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint8 EXECUTING_ACTION_NOT_READY = 7  # \\xe6\\x89\\xa7\\xe8\\xa1\\x8c\\xe8\\xbd\\xa8\\xe8\\xbf\\xb9\\xe6\\x9c\\x8d\\xe5\\x8a\\xa1(/whole_body_joint_trajectory_controller/follow_joint_trajectory)\\xe6\\x9c\\xaa\\xe5\\xb0\\xb1\\xe7\\xbb\\xaa\n"
  "uint8 EXECUTING_ACTION_REJECTED = 8  # \\xe8\\xbd\\xa8\\xe8\\xbf\\xb9\\xe6\\x89\\xa7\\xe8\\xa1\\x8c\\xe8\\xaf\\xb7\\xe6\\xb1\\x82\\xe8\\xa2\\xab\\xe6\\x8b\\x92\\xe7\\xbb\\x9d\n"
  "uint8 EXECUTING_TIMEOUT = 9  # \\xe8\\xbd\\xa8\\xe8\\xbf\\xb9\\xe6\\x89\\xa7\\xe8\\xa1\\x8c\\xe8\\xb6\\x85\\xe6\\x97\\xb6\n"
  "uint8 EXECUTING_FAILED = 10  # \\xe8\\xbd\\xa8\\xe8\\xbf\\xb9\\xe6\\x89\\xa7\\xe8\\xa1\\x8c\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint8 EXCEPTION = 11  # \\xe6\\x89\\xa7\\xe8\\xa1\\x8c\\xe8\\xbf\\x87\\xe7\\xa8\\x8b\\xe4\\xb8\\xad\\xe5\\x87\\xba\\xe7\\x8e\\xb0\\xe5\\xbc\\x82\\xe5\\xb8\\xb8";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
x2robot_msgs__msg__EnumMoveitMoveResult__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {x2robot_msgs__msg__EnumMoveitMoveResult__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 557, 557},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
x2robot_msgs__msg__EnumMoveitMoveResult__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *x2robot_msgs__msg__EnumMoveitMoveResult__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
