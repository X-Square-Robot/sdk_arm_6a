// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/LidarUnitEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/lidar_unit_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__LidarUnitEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3a, 0x11, 0x5f, 0xe7, 0xc3, 0x6e, 0x41, 0x5f,
      0x88, 0x5a, 0x81, 0xac, 0x53, 0x65, 0x7d, 0x50,
      0xc5, 0x9a, 0xdd, 0x6f, 0x18, 0xbb, 0x00, 0x49,
      0x0d, 0x5a, 0x94, 0xa3, 0x96, 0xa9, 0xc7, 0xcd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__LidarUnitEnum__TYPE_NAME[] = "protocol/msg/LidarUnitEnum";

// Define type names, field names, and default values
static char protocol__msg__LidarUnitEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__LidarUnitEnum__FIELDS[] = {
  {
    {protocol__msg__LidarUnitEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
protocol__msg__LidarUnitEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__LidarUnitEnum__TYPE_NAME, 26, 26},
      {protocol__msg__LidarUnitEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Unit: LIDAR\n"
  "# \\xe9\\x9b\\xb7\\xe8\\xbe\\xbe\\xe8\\x8e\\xb7\\xe5\\x8f\\x96\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe8\\xb6\\x85\\xe6\\x97\\xb6\n"
  "uint32 HEARTBEAT_TIMEOUT = 0x01\n"
  "# \\xe8\\xbf\\x9e\\xe6\\x8e\\xa5\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 CONN_FAIL = 0x11\n"
  "# \\xe8\\xa7\\xa3\\xe6\\x9e\\x90\\xe6\\xa0\\xa1\\xe9\\xaa\\x8c\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 PARSE_CRC_FAIL = 0x12";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__LidarUnitEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__LidarUnitEnum__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 126, 126},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__LidarUnitEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__LidarUnitEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
