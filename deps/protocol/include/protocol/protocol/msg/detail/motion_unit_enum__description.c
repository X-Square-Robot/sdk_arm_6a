// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/MotionUnitEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/motion_unit_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__MotionUnitEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x73, 0x9e, 0xa3, 0xef, 0xae, 0xaa, 0x6b, 0x2e,
      0x80, 0x73, 0x80, 0xdb, 0xe7, 0x71, 0x13, 0x4b,
      0xd1, 0xbd, 0xc7, 0x80, 0xa5, 0x48, 0x78, 0x10,
      0x4c, 0xc5, 0xf1, 0x68, 0x00, 0xbe, 0x44, 0x0a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__MotionUnitEnum__TYPE_NAME[] = "protocol/msg/MotionUnitEnum";

// Define type names, field names, and default values
static char protocol__msg__MotionUnitEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__MotionUnitEnum__FIELDS[] = {
  {
    {protocol__msg__MotionUnitEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
protocol__msg__MotionUnitEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__MotionUnitEnum__TYPE_NAME, 27, 27},
      {protocol__msg__MotionUnitEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 REALTIME_CONTROLLER = 0x01\n"
  "uint8 MOVEIT_SERVER = 0x02\n"
  "uint8 LEFT_ARM = 0x11\n"
  "uint8 RIGHT_ARM = 0x12\n"
  "uint8 LEFT_TIANJI_ARM = 0x13\n"
  "uint8 RIGHT_TIANJI_ARM = 0x14\n"
  "uint8 LEFT_RM_GRIPPER = 0x51\n"
  "uint8 RIGHT_RM_GRIPPER = 0x52\n"
  "uint8 TI5_WAIST = 0xB2\n"
  "uint8 KINCO_LIFT_WAIST = 0xB1\n"
  "uint8 MASTER_LEFT_ARM = 0x21\n"
  "uint8 MASTER_RIGHT_ARM = 0x22\n"
  "uint8 QP_CONTROLLER = 0x15";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__MotionUnitEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__MotionUnitEnum__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 362, 362},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__MotionUnitEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__MotionUnitEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
