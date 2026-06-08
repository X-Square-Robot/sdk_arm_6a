// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from x2robot_msgs:msg/CanFrameBatch.idl
// generated code does not contain a copyright notice

#include "x2robot_msgs/msg/detail/can_frame_batch__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_x2robot_msgs
const rosidl_type_hash_t *
x2robot_msgs__msg__CanFrameBatch__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8e, 0xa9, 0x8e, 0xb4, 0xe5, 0x64, 0x44, 0x3b,
      0x8a, 0xc7, 0xfa, 0xa8, 0xa5, 0x3a, 0x17, 0xf8,
      0x68, 0x19, 0x37, 0x4f, 0x9a, 0x2c, 0x68, 0x14,
      0x69, 0xb0, 0xd1, 0x04, 0x1f, 0xeb, 0xcf, 0x1f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "x2robot_msgs/msg/detail/can_frame__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t x2robot_msgs__msg__CanFrame__EXPECTED_HASH = {1, {
    0xca, 0xe0, 0x2e, 0x4a, 0x92, 0x68, 0xf6, 0xe0,
    0x7f, 0x1c, 0xee, 0x24, 0xcb, 0x17, 0xfd, 0x41,
    0x22, 0xd7, 0xda, 0x34, 0xec, 0x44, 0x0f, 0xba,
    0x88, 0x55, 0xb3, 0x4f, 0x22, 0x7d, 0xb7, 0xde,
  }};
#endif

static char x2robot_msgs__msg__CanFrameBatch__TYPE_NAME[] = "x2robot_msgs/msg/CanFrameBatch";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char x2robot_msgs__msg__CanFrame__TYPE_NAME[] = "x2robot_msgs/msg/CanFrame";

// Define type names, field names, and default values
static char x2robot_msgs__msg__CanFrameBatch__FIELD_NAME__frames[] = "frames";

static rosidl_runtime_c__type_description__Field x2robot_msgs__msg__CanFrameBatch__FIELDS[] = {
  {
    {x2robot_msgs__msg__CanFrameBatch__FIELD_NAME__frames, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {x2robot_msgs__msg__CanFrame__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription x2robot_msgs__msg__CanFrameBatch__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__msg__CanFrame__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
x2robot_msgs__msg__CanFrameBatch__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {x2robot_msgs__msg__CanFrameBatch__TYPE_NAME, 30, 30},
      {x2robot_msgs__msg__CanFrameBatch__FIELDS, 1, 1},
    },
    {x2robot_msgs__msg__CanFrameBatch__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&x2robot_msgs__msg__CanFrame__EXPECTED_HASH, x2robot_msgs__msg__CanFrame__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = x2robot_msgs__msg__CanFrame__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "CanFrame[] frames";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
x2robot_msgs__msg__CanFrameBatch__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {x2robot_msgs__msg__CanFrameBatch__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 18, 18},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
x2robot_msgs__msg__CanFrameBatch__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *x2robot_msgs__msg__CanFrameBatch__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *x2robot_msgs__msg__CanFrame__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
