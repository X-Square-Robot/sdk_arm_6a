// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/LeftRmGripperUnitEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/left_rm_gripper_unit_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__LeftRmGripperUnitEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6a, 0x5f, 0x54, 0xdf, 0xa5, 0x00, 0xb4, 0xbb,
      0x23, 0xaf, 0x77, 0x0d, 0x36, 0x91, 0x71, 0xa8,
      0x04, 0xa1, 0x81, 0x1c, 0x1d, 0x8a, 0x29, 0x7a,
      0xdb, 0x36, 0x24, 0xb5, 0x4e, 0xc0, 0xbb, 0xe9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__LeftRmGripperUnitEnum__TYPE_NAME[] = "protocol/msg/LeftRmGripperUnitEnum";

// Define type names, field names, and default values
static char protocol__msg__LeftRmGripperUnitEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__LeftRmGripperUnitEnum__FIELDS[] = {
  {
    {protocol__msg__LeftRmGripperUnitEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
protocol__msg__LeftRmGripperUnitEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__LeftRmGripperUnitEnum__TYPE_NAME, 34, 34},
      {protocol__msg__LeftRmGripperUnitEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Unit: LEFT_RM_GRIPPER\n"
  "# \\xe5\\xb7\\xa6 RM \\xe5\\xa4\\xb9\\xe7\\x88\\xaa\\xe8\\x8e\\xb7\\xe5\\x8f\\x96\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe8\\xb6\\x85\\xe6\\x97\\xb6\n"
  "uint32 HEARTBEAT_TIMEOUT = 0x01\n"
  "# \\xe5\\xb7\\xa6\\xe5\\xa4\\xb9\\xe7\\x88\\xaa\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe6\\xad\\xa3\\xe5\\xb8\\xb8\n"
  "uint32 MOTOR_NORMAL = 0x10\n"
  "# \\xe5\\xb7\\xa6\\xe5\\xa4\\xb9\\xe7\\x88\\xaa\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe8\\xbf\\x87\\xe5\\x8e\\x8b\n"
  "uint32 OVER_VOLTAGE = 0x11\n"
  "# \\xe5\\xb7\\xa6\\xe5\\xa4\\xb9\\xe7\\x88\\xaa\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe6\\xac\\xa0\\xe5\\x8e\\x8b\n"
  "uint32 UNDER_VOLTAGE = 0x12\n"
  "# \\xe5\\xb7\\xa6\\xe5\\xa4\\xb9\\xe7\\x88\\xaa\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe8\\xbf\\x87\\xe6\\xb5\\x81\n"
  "uint32 OVER_CURRENT = 0x13\n"
  "# \\xe5\\xb7\\xa6\\xe5\\xa4\\xb9\\xe7\\x88\\xaa\\xe7\\x94\\xb5\\xe6\\x9c\\xbaMOS\\xe8\\xbf\\x87\\xe6\\xb8\\xa9\n"
  "uint32 MOS_OVER_TEMP = 0x14\n"
  "# \\xe5\\xb7\\xa6\\xe5\\xa4\\xb9\\xe7\\x88\\xaa\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe7\\xba\\xbf\\xe5\\x9c\\x88\\xe8\\xbf\\x87\\xe7\\x83\\xad\n"
  "uint32 MOTOR_OVER_HEAT = 0x15\n"
  "# \\xe5\\xb7\\xa6\\xe5\\xa4\\xb9\\xe7\\x88\\xaa\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe9\\x80\\x9a\\xe8\\xae\\xaf\\xe4\\xb8\\xa2\\xe5\\xa4\\xb1\n"
  "uint32 COMMUNICATION_LOST = 0x16\n"
  "# \\xe5\\xb7\\xa6\\xe5\\xa4\\xb9\\xe7\\x88\\xaa\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe8\\xbf\\x87\\xe8\\xbd\\xbd\n"
  "uint32 OVERLOAD = 0x17\n"
  "# \\xe5\\xb7\\xa6\\xe5\\xa4\\xb9\\xe7\\x88\\xaa\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe7\\xbc\\xba\\xe7\\x9b\\xb8\n"
  "uint32 PHASE_LOSS = 0x18\n"
  "# \\xe5\\xb7\\xa6\\xe5\\xa4\\xb9\\xe7\\x88\\xaa\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe7\\x9f\\xad\\xe8\\xb7\\xaf\n"
  "uint32 MOTOR_SHORT_CIRCUIT = 0x19\n"
  "# \\xe5\\xb7\\xa6\\xe5\\xa4\\xb9\\xe7\\x88\\xaa\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe5\\xa0\\xb5\\xe8\\xbd\\xac\n"
  "uint32 MOTOR_STALL = 0x1A\n"
  "# \\xe5\\xb7\\xa6\\xe5\\xa4\\xb9\\xe7\\x88\\xaa\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe5\\xa4\\x8d\\xe4\\xbd\\x8d\\xe6\\x95\\x85\\xe9\\x9a\\x9c\n"
  "uint32 RESET_FAULT = 0x1B";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__LeftRmGripperUnitEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__LeftRmGripperUnitEnum__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 535, 535},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__LeftRmGripperUnitEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__LeftRmGripperUnitEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
