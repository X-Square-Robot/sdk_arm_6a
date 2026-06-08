// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/JointMotorStatus.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/joint_motor_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__JointMotorStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1c, 0xbc, 0x37, 0x4e, 0xb4, 0xe9, 0x60, 0x8e,
      0x7e, 0xb2, 0x22, 0x31, 0xee, 0x09, 0x29, 0xe9,
      0xab, 0x28, 0x3b, 0xde, 0x5c, 0x0e, 0xab, 0xd3,
      0x5b, 0xee, 0xcb, 0xe8, 0x7b, 0xdc, 0xe3, 0x85,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "protocol/msg/detail/motor_status__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t protocol__msg__MotorStatus__EXPECTED_HASH = {1, {
    0x01, 0x6a, 0xa7, 0x27, 0x0a, 0x66, 0xfe, 0x78,
    0xf1, 0xe2, 0xfe, 0x8e, 0x10, 0x5d, 0x43, 0x89,
    0xe4, 0x89, 0x26, 0x14, 0x21, 0x93, 0x22, 0xf6,
    0x41, 0x1d, 0xd1, 0xb8, 0xff, 0xf2, 0x86, 0xfa,
  }};
#endif

static char protocol__msg__JointMotorStatus__TYPE_NAME[] = "protocol/msg/JointMotorStatus";
static char protocol__msg__MotorStatus__TYPE_NAME[] = "protocol/msg/MotorStatus";

// Define type names, field names, and default values
static char protocol__msg__JointMotorStatus__FIELD_NAME__joint_motor_status[] = "joint_motor_status";
static char protocol__msg__JointMotorStatus__FIELD_NAME__all_joints_healthy[] = "all_joints_healthy";

static rosidl_runtime_c__type_description__Field protocol__msg__JointMotorStatus__FIELDS[] = {
  {
    {protocol__msg__JointMotorStatus__FIELD_NAME__joint_motor_status, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {protocol__msg__MotorStatus__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {protocol__msg__JointMotorStatus__FIELD_NAME__all_joints_healthy, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription protocol__msg__JointMotorStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {protocol__msg__MotorStatus__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
protocol__msg__JointMotorStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__JointMotorStatus__TYPE_NAME, 29, 29},
      {protocol__msg__JointMotorStatus__FIELDS, 2, 2},
    },
    {protocol__msg__JointMotorStatus__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&protocol__msg__MotorStatus__EXPECTED_HASH, protocol__msg__MotorStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = protocol__msg__MotorStatus__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# joint_motor_status \\xe7\\xb4\\xa2\\xe5\\xbc\\x95\\xe8\\xa7\\x84\\xe5\\x88\\x99\n"
  "## \\xe5\\xa4\\xb4\\xe9\\x83\\xa8\\xef\\xbc\\x9a\\xe6\\xb2\\xa1\\xe6\\x9c\\x89\\xe7\\x89\\xb9\\xe6\\xae\\x8a\\xe8\\xaf\\xb4\\xe6\\x98\\x8e\\xe6\\x83\\x85\\xe5\\x86\\xb5\\xe4\\xb8\\x8b\\xef\\xbc\\x8c\\xe9\\xbb\\x98\\xe8\\xae\\xa4\\xe4\\xbd\\xbf\\xe7\\x94\\xa8[pitch,yaw]\\xe7\\x9a\\x84\\xe9\\xa1\\xba\\xe5\\xba\\x8f\\xe3\\x80\\x82\\xe8\\x8b\\xa5\\xe4\\xb8\\x89\\xe4\\xb8\\xaa\\xe8\\x87\\xaa\\xe7\\x94\\xb1\\xe5\\xba\\xa6\\xe4\\xbd\\xbf\\xe7\\x94\\xa8[roll,pitch,yaw]\\xe7\\x9a\\x84\\xe9\\xa1\\xba\\xe5\\xba\\x8f\\xef\\xbc\\x8c\\xe4\\xb8\\xa5\\xe6\\xa0\\xbc\\xe6\\x8c\\x89\\xe7\\x85\\xa7rpy\\xe7\\x9a\\x84\\xe9\\xa1\\xba\\xe5\\xba\\x8f\\xe6\\x9d\\xa5\\xe3\\x80\\x82\n"
  "## \\xe6\\x9c\\xba\\xe6\\xa2\\xb0\\xe8\\x87\\x82\\xef\\xbc\\x9a\\xe4\\xb8\\x80\\xe5\\xae\\x9a\\xe6\\x98\\xaf\\xe4\\xbb\\x8e\\xe8\\x82\\xa9\\xe8\\x86\\x80\\xe5\\xbc\\x80\\xe5\\xa7\\x8b\\xe6\\x95\\xb0\\xe4\\xbb\\x8e 0 ~ n\n"
  "## \\xe5\\x8d\\x87\\xe9\\x99\\x8d\\xe5\\x85\\xb3\\xe8\\x8a\\x82\\xef\\xbc\\x9a\\xe5\\x8f\\xaa\\xe6\\x9c\\x89\\xe4\\xb8\\x80\\xe4\\xb8\\xaa\\xe7\\x94\\xb5\\xe6\\x9c\\xba\n"
  "\n"
  "MotorStatus[] joint_motor_status\n"
  "bool all_joints_healthy";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__JointMotorStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__JointMotorStatus__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 198, 198},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__JointMotorStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__JointMotorStatus__get_individual_type_description_source(NULL),
    sources[1] = *protocol__msg__MotorStatus__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
