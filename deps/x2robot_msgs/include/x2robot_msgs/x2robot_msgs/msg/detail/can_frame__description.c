// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from x2robot_msgs:msg/CanFrame.idl
// generated code does not contain a copyright notice

#include "x2robot_msgs/msg/detail/can_frame__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_x2robot_msgs
const rosidl_type_hash_t *
x2robot_msgs__msg__CanFrame__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xca, 0xe0, 0x2e, 0x4a, 0x92, 0x68, 0xf6, 0xe0,
      0x7f, 0x1c, 0xee, 0x24, 0xcb, 0x17, 0xfd, 0x41,
      0x22, 0xd7, 0xda, 0x34, 0xec, 0x44, 0x0f, 0xba,
      0x88, 0x55, 0xb3, 0x4f, 0x22, 0x7d, 0xb7, 0xde,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char x2robot_msgs__msg__CanFrame__TYPE_NAME[] = "x2robot_msgs/msg/CanFrame";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char x2robot_msgs__msg__CanFrame__FIELD_NAME__stamp[] = "stamp";
static char x2robot_msgs__msg__CanFrame__FIELD_NAME__can_id[] = "can_id";
static char x2robot_msgs__msg__CanFrame__FIELD_NAME__dlc[] = "dlc";
static char x2robot_msgs__msg__CanFrame__FIELD_NAME__data[] = "data";
static char x2robot_msgs__msg__CanFrame__FIELD_NAME__err[] = "err";
static char x2robot_msgs__msg__CanFrame__FIELD_NAME__rtr[] = "rtr";
static char x2robot_msgs__msg__CanFrame__FIELD_NAME__eff[] = "eff";
static char x2robot_msgs__msg__CanFrame__FIELD_NAME__fd[] = "fd";
static char x2robot_msgs__msg__CanFrame__FIELD_NAME__brs[] = "brs";

static rosidl_runtime_c__type_description__Field x2robot_msgs__msg__CanFrame__FIELDS[] = {
  {
    {x2robot_msgs__msg__CanFrame__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__msg__CanFrame__FIELD_NAME__can_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__msg__CanFrame__FIELD_NAME__dlc, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__msg__CanFrame__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      64,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__msg__CanFrame__FIELD_NAME__err, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__msg__CanFrame__FIELD_NAME__rtr, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__msg__CanFrame__FIELD_NAME__eff, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__msg__CanFrame__FIELD_NAME__fd, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__msg__CanFrame__FIELD_NAME__brs, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription x2robot_msgs__msg__CanFrame__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
x2robot_msgs__msg__CanFrame__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {x2robot_msgs__msg__CanFrame__TYPE_NAME, 25, 25},
      {x2robot_msgs__msg__CanFrame__FIELDS, 9, 9},
    },
    {x2robot_msgs__msg__CanFrame__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "builtin_interfaces/Time stamp\n"
  "uint32 can_id\n"
  "uint8 dlc\n"
  "uint8[64] data\n"
  "uint8 err\n"
  "uint8 rtr\n"
  "uint8 eff\n"
  "uint8 fd\n"
  "uint8 brs";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
x2robot_msgs__msg__CanFrame__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {x2robot_msgs__msg__CanFrame__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 118, 118},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
x2robot_msgs__msg__CanFrame__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *x2robot_msgs__msg__CanFrame__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
