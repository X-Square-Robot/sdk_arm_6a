// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/TaskManagerErrorEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/task_manager_error_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__TaskManagerErrorEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x50, 0x40, 0xc8, 0x64, 0xaf, 0xf3, 0xc7, 0x53,
      0xae, 0x1d, 0x5a, 0xa2, 0xce, 0xfa, 0x8e, 0x30,
      0xa1, 0x2a, 0xee, 0x6b, 0x96, 0xaa, 0xc0, 0x75,
      0x62, 0xf9, 0xb1, 0xf5, 0x8c, 0x13, 0x49, 0x57,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__TaskManagerErrorEnum__TYPE_NAME[] = "protocol/msg/TaskManagerErrorEnum";

// Define type names, field names, and default values
static char protocol__msg__TaskManagerErrorEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__TaskManagerErrorEnum__FIELDS[] = {
  {
    {protocol__msg__TaskManagerErrorEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
protocol__msg__TaskManagerErrorEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__TaskManagerErrorEnum__TYPE_NAME, 33, 33},
      {protocol__msg__TaskManagerErrorEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Unit: TASK_MANAGER\n"
  "# \\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe5\\x88\\x9d\\xe5\\xa7\\x8b\\xe5\\x8c\\x96\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 TASK_INIT_FAILED = 0x10\n"
  "# \\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe8\\xbf\\x90\\xe8\\xa1\\x8c\\xe9\\x94\\x99\\xe8\\xaf\\xaf\n"
  "uint32 TASK_RUNNING_ERROR = 0x11\n"
  "# \\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe6\\x9a\\x82\\xe5\\x81\\x9c\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 TASK_PAUSED_FAILED = 0x12\n"
  "# \\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe7\\xbb\\xa7\\xe7\\xbb\\xad\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 TASK_RESUME_FAILED = 0x13\n"
  "# \\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe7\\xbb\\x88\\xe6\\xad\\xa2\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 TASK_TERMINATE_FAILED = 0x14\n"
  "# \\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe6\\x8c\\x82\\xe8\\xb5\\xb7\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 TASK_SUSPEND_FAILED = 0x15\n"
  "# \\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe9\\x80\\x80\\xe5\\x87\\xba\\xe6\\x8c\\x82\\xe8\\xb5\\xb7\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 TASK_EXIT_SUSPEND_FAILED = 0x16\n"
  "# \\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe5\\xae\\x8c\\xe6\\x88\\x90\\xe5\\x90\\x8e\\xe6\\xb8\\x85\\xe7\\x90\\x86\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 TASK_FINISH_FAILED = 0x17";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__TaskManagerErrorEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__TaskManagerErrorEnum__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 371, 371},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__TaskManagerErrorEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__TaskManagerErrorEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
