// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/RecorderErrorEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/recorder_error_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__RecorderErrorEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbc, 0xaa, 0xf6, 0x1f, 0xca, 0x82, 0x94, 0x34,
      0x61, 0x95, 0x4d, 0xe8, 0x40, 0xc0, 0xb1, 0x96,
      0x34, 0x92, 0x02, 0xe6, 0x82, 0x45, 0x19, 0xfa,
      0x8d, 0xdf, 0x0b, 0x49, 0x2b, 0x98, 0xb6, 0x39,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__RecorderErrorEnum__TYPE_NAME[] = "protocol/msg/RecorderErrorEnum";

// Define type names, field names, and default values
static char protocol__msg__RecorderErrorEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__RecorderErrorEnum__FIELDS[] = {
  {
    {protocol__msg__RecorderErrorEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
protocol__msg__RecorderErrorEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__RecorderErrorEnum__TYPE_NAME, 30, 30},
      {protocol__msg__RecorderErrorEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Unit: RECORDER\n"
  "# topic\\xe9\\xa2\\x91\\xe7\\x8e\\x87\\xe8\\xbf\\x87\\xe4\\xbd\\x8e\n"
  "uint32 TOPIC_FREQ_LOW = 0x01\n"
  "# \\xe5\\xae\\x8c\\xe5\\x85\\xa8\\xe6\\x97\\xa0\\xe6\\x95\\xb0\\xe6\\x8d\\xae\n"
  "uint32 TOPIC_NO_DATA = 0x02\n"
  "# \\xe6\\x97\\xa0\\xe6\\xb3\\x95\\xe5\\xbc\\x80\\xe5\\xa7\\x8b\\xe5\\xbd\\x95\\xe5\\x88\\xb6\\xef\\xbc\\x9a\\xe6\\xad\\xa3\\xe5\\x9c\\xa8\\xe6\\x89\\x93\\xe5\\x8c\\x85\n"
  "uint32 RECORD_BLOCKED_COMPRESSING = 0x03\n"
  "# \\xe6\\x97\\xa0\\xe6\\xb3\\x95\\xe5\\xbc\\x80\\xe5\\xa7\\x8b\\xe5\\xbd\\x95\\xe5\\x88\\xb6\\xef\\xbc\\x9a\\xe6\\xad\\xa3\\xe5\\x9c\\xa8\\xe4\\xb8\\x8a\\xe4\\xbc\\xa0\n"
  "uint32 RECORD_BLOCKED_UPLOADING = 0x04\n"
  "# \\xe5\\xbd\\x95\\xe5\\x88\\xb6\\xe6\\x97\\xb6\\xe9\\x97\\xb4\\xe8\\xbf\\x87\\xe9\\x95\\xbf\n"
  "uint32 RECORDING_TIME_TOO_LONG = 0x05\n"
  "# \\xe7\\xa3\\x81\\xe7\\x9b\\x98\\xe7\\xa9\\xba\\xe9\\x97\\xb4\\xe4\\xb8\\x8d\\xe8\\xb6\\xb3\n"
  "uint32 DISK_SPACE_LOW_WARNING = 0x06\n"
  "# \\xe7\\xa3\\x81\\xe7\\x9b\\x98\\xe7\\xa9\\xba\\xe9\\x97\\xb4\\xe4\\xb8\\xa5\\xe9\\x87\\x8d\\xe4\\xb8\\x8d\\xe8\\xb6\\xb3\n"
  "uint32 DISK_SPACE_CRITICALLY_LOW = 0x07";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__RecorderErrorEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__RecorderErrorEnum__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 346, 346},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__RecorderErrorEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__RecorderErrorEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
