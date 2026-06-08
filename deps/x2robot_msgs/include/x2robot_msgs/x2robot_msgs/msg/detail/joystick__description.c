// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from x2robot_msgs:msg/Joystick.idl
// generated code does not contain a copyright notice

#include "x2robot_msgs/msg/detail/joystick__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_x2robot_msgs
const rosidl_type_hash_t *
x2robot_msgs__msg__Joystick__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xba, 0xab, 0x2a, 0x41, 0x93, 0xbc, 0x39, 0x46,
      0xdf, 0x37, 0x6b, 0x0e, 0xd9, 0xea, 0xad, 0x68,
      0x59, 0x9b, 0xb7, 0x16, 0x82, 0x2e, 0x94, 0xcd,
      0x2f, 0x81, 0x6d, 0xfe, 0x25, 0x46, 0xcc, 0x1c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char x2robot_msgs__msg__Joystick__TYPE_NAME[] = "x2robot_msgs/msg/Joystick";

// Define type names, field names, and default values
static char x2robot_msgs__msg__Joystick__FIELD_NAME__joystick_x[] = "joystick_x";
static char x2robot_msgs__msg__Joystick__FIELD_NAME__joystick_y[] = "joystick_y";
static char x2robot_msgs__msg__Joystick__FIELD_NAME__trigger[] = "trigger";
static char x2robot_msgs__msg__Joystick__FIELD_NAME__joy_button[] = "joy_button";
static char x2robot_msgs__msg__Joystick__FIELD_NAME__sw1[] = "sw1";
static char x2robot_msgs__msg__Joystick__FIELD_NAME__sw2[] = "sw2";
static char x2robot_msgs__msg__Joystick__FIELD_NAME__sw3[] = "sw3";
static char x2robot_msgs__msg__Joystick__FIELD_NAME__sw4[] = "sw4";

static rosidl_runtime_c__type_description__Field x2robot_msgs__msg__Joystick__FIELDS[] = {
  {
    {x2robot_msgs__msg__Joystick__FIELD_NAME__joystick_x, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__msg__Joystick__FIELD_NAME__joystick_y, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__msg__Joystick__FIELD_NAME__trigger, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__msg__Joystick__FIELD_NAME__joy_button, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__msg__Joystick__FIELD_NAME__sw1, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__msg__Joystick__FIELD_NAME__sw2, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__msg__Joystick__FIELD_NAME__sw3, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__msg__Joystick__FIELD_NAME__sw4, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
x2robot_msgs__msg__Joystick__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {x2robot_msgs__msg__Joystick__TYPE_NAME, 25, 25},
      {x2robot_msgs__msg__Joystick__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\\xe6\\x91\\x87\\xe6\\x9d\\x86x\\xe8\\xbd\\xb4 [-1, 1]\n"
  "float64 joystick_x\n"
  "\n"
  "#\\xe6\\x91\\x87\\xe6\\x9d\\x86y\\xe8\\xbd\\xb4 [-1, 1]\n"
  "float64 joystick_y\n"
  "\n"
  "#\\xe6\\x89\\xb3\\xe6\\x9c\\xba [0, 1]\n"
  "float64 trigger\n"
  "\n"
  "#\\xe6\\x8c\\x89\\xe9\\x92\\xae True\\xe4\\xb8\\xba\\xe6\\x8c\\x89\\xe4\\xb8\\x8b\n"
  "bool joy_button\n"
  "bool sw1\n"
  "bool sw2\n"
  "bool sw3\n"
  "bool sw4";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
x2robot_msgs__msg__Joystick__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {x2robot_msgs__msg__Joystick__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 160, 160},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
x2robot_msgs__msg__Joystick__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *x2robot_msgs__msg__Joystick__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
