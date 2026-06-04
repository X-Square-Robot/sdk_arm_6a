// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from x2robot_msgs:msg/EnumDataCollectionMode.idl
// generated code does not contain a copyright notice

#include "x2robot_msgs/msg/detail/enum_data_collection_mode__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_x2robot_msgs
const rosidl_type_hash_t *
x2robot_msgs__msg__EnumDataCollectionMode__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x23, 0xe8, 0x5a, 0x5b, 0xad, 0xc7, 0xfb, 0x97,
      0x84, 0xbb, 0x87, 0xa7, 0x9a, 0x6c, 0xf6, 0x96,
      0x87, 0xbc, 0xa1, 0xab, 0x4e, 0x62, 0x43, 0x77,
      0xfe, 0x56, 0x36, 0xdf, 0x9f, 0x9d, 0x4c, 0x50,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char x2robot_msgs__msg__EnumDataCollectionMode__TYPE_NAME[] = "x2robot_msgs/msg/EnumDataCollectionMode";

// Define type names, field names, and default values
static char x2robot_msgs__msg__EnumDataCollectionMode__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field x2robot_msgs__msg__EnumDataCollectionMode__FIELDS[] = {
  {
    {x2robot_msgs__msg__EnumDataCollectionMode__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
x2robot_msgs__msg__EnumDataCollectionMode__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {x2robot_msgs__msg__EnumDataCollectionMode__TYPE_NAME, 39, 39},
      {x2robot_msgs__msg__EnumDataCollectionMode__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 TRACKER_TRIGGER = 1\n"
  "uint8 EXOSKELETON_ARM_TRIGGER = 2";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
x2robot_msgs__msg__EnumDataCollectionMode__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {x2robot_msgs__msg__EnumDataCollectionMode__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 60, 60},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
x2robot_msgs__msg__EnumDataCollectionMode__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *x2robot_msgs__msg__EnumDataCollectionMode__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
