// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from x2robot_msgs:msg/TashanTactileData.idl
// generated code does not contain a copyright notice

#include "x2robot_msgs/msg/detail/tashan_tactile_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_x2robot_msgs
const rosidl_type_hash_t *
x2robot_msgs__msg__TashanTactileData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf4, 0x1b, 0x05, 0x0c, 0xf2, 0x15, 0x40, 0x0e,
      0x9e, 0x86, 0x78, 0x0b, 0x81, 0xd6, 0x4f, 0xea,
      0x15, 0xe4, 0xea, 0xf7, 0x68, 0xa6, 0x26, 0x30,
      0xf4, 0x6b, 0x8c, 0x11, 0x39, 0x46, 0x77, 0x9b,
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

static char x2robot_msgs__msg__TashanTactileData__TYPE_NAME[] = "x2robot_msgs/msg/TashanTactileData";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char x2robot_msgs__msg__TashanTactileData__FIELD_NAME__stamp[] = "stamp";
static char x2robot_msgs__msg__TashanTactileData__FIELD_NAME__sensor_names[] = "sensor_names";
static char x2robot_msgs__msg__TashanTactileData__FIELD_NAME__frame_ids[] = "frame_ids";
static char x2robot_msgs__msg__TashanTactileData__FIELD_NAME__normal_forces[] = "normal_forces";
static char x2robot_msgs__msg__TashanTactileData__FIELD_NAME__tangential_forces[] = "tangential_forces";
static char x2robot_msgs__msg__TashanTactileData__FIELD_NAME__directions[] = "directions";
static char x2robot_msgs__msg__TashanTactileData__FIELD_NAME__capacitances[] = "capacitances";
static char x2robot_msgs__msg__TashanTactileData__FIELD_NAME__error_codes[] = "error_codes";

static rosidl_runtime_c__type_description__Field x2robot_msgs__msg__TashanTactileData__FIELDS[] = {
  {
    {x2robot_msgs__msg__TashanTactileData__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__msg__TashanTactileData__FIELD_NAME__sensor_names, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__msg__TashanTactileData__FIELD_NAME__frame_ids, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__msg__TashanTactileData__FIELD_NAME__normal_forces, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__msg__TashanTactileData__FIELD_NAME__tangential_forces, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__msg__TashanTactileData__FIELD_NAME__directions, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__msg__TashanTactileData__FIELD_NAME__capacitances, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__msg__TashanTactileData__FIELD_NAME__error_codes, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription x2robot_msgs__msg__TashanTactileData__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
x2robot_msgs__msg__TashanTactileData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {x2robot_msgs__msg__TashanTactileData__TYPE_NAME, 34, 34},
      {x2robot_msgs__msg__TashanTactileData__FIELDS, 8, 8},
    },
    {x2robot_msgs__msg__TashanTactileData__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
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
  "string[] sensor_names\n"
  "string[] frame_ids\n"
  "float32[] normal_forces\n"
  "float32[] tangential_forces\n"
  "int16[] directions\n"
  "uint32[] capacitances\n"
  "uint8[] error_codes";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
x2robot_msgs__msg__TashanTactileData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {x2robot_msgs__msg__TashanTactileData__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 184, 184},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
x2robot_msgs__msg__TashanTactileData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *x2robot_msgs__msg__TashanTactileData__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
