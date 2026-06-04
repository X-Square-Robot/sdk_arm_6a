// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from x2robot_msgs:msg/RobotArmState.idl
// generated code does not contain a copyright notice

#include "x2robot_msgs/msg/detail/robot_arm_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_x2robot_msgs
const rosidl_type_hash_t *
x2robot_msgs__msg__RobotArmState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xeb, 0xea, 0xd1, 0x4a, 0x2b, 0x38, 0x18, 0x1e,
      0x2a, 0x76, 0xca, 0xaf, 0x65, 0xad, 0x9f, 0xaf,
      0xe0, 0x9c, 0xb6, 0x7e, 0xbd, 0x4c, 0x89, 0x17,
      0x73, 0xe8, 0xa2, 0xb7, 0x94, 0x43, 0x69, 0x04,
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

static char x2robot_msgs__msg__RobotArmState__TYPE_NAME[] = "x2robot_msgs/msg/RobotArmState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char x2robot_msgs__msg__RobotArmState__FIELD_NAME__stamp[] = "stamp";
static char x2robot_msgs__msg__RobotArmState__FIELD_NAME__robot_state[] = "robot_state";
static char x2robot_msgs__msg__RobotArmState__FIELD_NAME__current_control_mode[] = "current_control_mode";
static char x2robot_msgs__msg__RobotArmState__FIELD_NAME__error_msg[] = "error_msg";

static rosidl_runtime_c__type_description__Field x2robot_msgs__msg__RobotArmState__FIELDS[] = {
  {
    {x2robot_msgs__msg__RobotArmState__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__msg__RobotArmState__FIELD_NAME__robot_state, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__msg__RobotArmState__FIELD_NAME__current_control_mode, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__msg__RobotArmState__FIELD_NAME__error_msg, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription x2robot_msgs__msg__RobotArmState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
x2robot_msgs__msg__RobotArmState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {x2robot_msgs__msg__RobotArmState__TYPE_NAME, 30, 30},
      {x2robot_msgs__msg__RobotArmState__FIELDS, 4, 4},
    },
    {x2robot_msgs__msg__RobotArmState__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 NO_ERROR = 0\n"
  "uint8 READY = 1\n"
  "uint8 EMCY_STOPPED = 2\n"
  "uint8 POWER_OFF = 3\n"
  "uint8 NOT_ENABLED = 4\n"
  "uint8 MOTOR_ERROR = 5\n"
  "uint8 COMM_BUS_ERROR = 6\n"
  "\n"
  "uint8 CYCLIC_POSITION_MODE = 8\n"
  "uint8 FORCE_MODE_TORQUE_SENSOR = 15\n"
  "\n"
  "builtin_interfaces/Time stamp\n"
  "uint8 robot_state\n"
  "uint8 current_control_mode\n"
  "string error_msg";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
x2robot_msgs__msg__RobotArmState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {x2robot_msgs__msg__RobotArmState__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 308, 308},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
x2robot_msgs__msg__RobotArmState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *x2robot_msgs__msg__RobotArmState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
