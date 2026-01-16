// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from control_msgs:msg/HardwareDiagnostics.idl
// generated code does not contain a copyright notice

#include "control_msgs/msg/detail/hardware_diagnostics__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__msg__HardwareDiagnostics__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe3, 0xb2, 0x87, 0xcd, 0x0f, 0xba, 0x0f, 0x77,
      0x02, 0xbc, 0xd7, 0x28, 0xd7, 0x6c, 0x8e, 0x59,
      0x8b, 0x32, 0x9e, 0xdd, 0x63, 0x33, 0xfe, 0x6b,
      0x5d, 0x4b, 0x5f, 0xf6, 0xac, 0x54, 0xea, 0x22,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "diagnostic_msgs/msg/detail/key_value__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "control_msgs/msg/detail/hardware_device_diagnostics__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t control_msgs__msg__HardwareDeviceDiagnostics__EXPECTED_HASH = {1, {
    0x03, 0xc3, 0xfb, 0xf7, 0x6f, 0x7f, 0x28, 0xd4,
    0x56, 0x22, 0xb5, 0x03, 0x1f, 0x48, 0x78, 0x4b,
    0xb2, 0xd9, 0xbe, 0xe3, 0x85, 0x86, 0xd9, 0x73,
    0x02, 0x8a, 0x56, 0x97, 0x1d, 0x59, 0x2c, 0xe8,
  }};
static const rosidl_type_hash_t diagnostic_msgs__msg__KeyValue__EXPECTED_HASH = {1, {
    0xd6, 0x80, 0x81, 0xea, 0xa5, 0x40, 0x28, 0x8c,
    0x54, 0x40, 0x75, 0x3b, 0xae, 0xce, 0xf0, 0xc4,
    0xe1, 0x6e, 0x81, 0xa5, 0xf7, 0x8a, 0xd6, 0x89,
    0x02, 0xde, 0xd5, 0x10, 0x04, 0x13, 0xbb, 0x42,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char control_msgs__msg__HardwareDiagnostics__TYPE_NAME[] = "control_msgs/msg/HardwareDiagnostics";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char control_msgs__msg__HardwareDeviceDiagnostics__TYPE_NAME[] = "control_msgs/msg/HardwareDeviceDiagnostics";
static char diagnostic_msgs__msg__KeyValue__TYPE_NAME[] = "diagnostic_msgs/msg/KeyValue";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char control_msgs__msg__HardwareDiagnostics__FIELD_NAME__header[] = "header";
static char control_msgs__msg__HardwareDiagnostics__FIELD_NAME__hardware_id[] = "hardware_id";
static char control_msgs__msg__HardwareDiagnostics__FIELD_NAME__hardware_device_diagnostics[] = "hardware_device_diagnostics";

static rosidl_runtime_c__type_description__Field control_msgs__msg__HardwareDiagnostics__FIELDS[] = {
  {
    {control_msgs__msg__HardwareDiagnostics__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__HardwareDiagnostics__FIELD_NAME__hardware_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__HardwareDiagnostics__FIELD_NAME__hardware_device_diagnostics, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {control_msgs__msg__HardwareDeviceDiagnostics__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription control_msgs__msg__HardwareDiagnostics__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__HardwareDeviceDiagnostics__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {diagnostic_msgs__msg__KeyValue__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
control_msgs__msg__HardwareDiagnostics__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__msg__HardwareDiagnostics__TYPE_NAME, 36, 36},
      {control_msgs__msg__HardwareDiagnostics__FIELDS, 3, 3},
    },
    {control_msgs__msg__HardwareDiagnostics__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&control_msgs__msg__HardwareDeviceDiagnostics__EXPECTED_HASH, control_msgs__msg__HardwareDeviceDiagnostics__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = control_msgs__msg__HardwareDeviceDiagnostics__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&diagnostic_msgs__msg__KeyValue__EXPECTED_HASH, diagnostic_msgs__msg__KeyValue__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = diagnostic_msgs__msg__KeyValue__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message presents current hardware diagnostics\n"
  "\n"
  "# Header timestamp should be update time of device diagnostics\n"
  "std_msgs/Header header\n"
  "\n"
  "# Unique identifier per hardware component, ideally the name of the hardware derived from HardwareInfo e.g. \"pal_arm\"\n"
  "string hardware_id\n"
  "\n"
  "# --- Device Diagnostics Aggregation ---------------------------------\n"
  "# Diagnostics for individual devices within this hardware set\n"
  "HardwareDeviceDiagnostics[] hardware_device_diagnostics";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__msg__HardwareDiagnostics__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__msg__HardwareDiagnostics__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 468, 468},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__msg__HardwareDiagnostics__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__msg__HardwareDiagnostics__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *control_msgs__msg__HardwareDeviceDiagnostics__get_individual_type_description_source(NULL);
    sources[3] = *diagnostic_msgs__msg__KeyValue__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
