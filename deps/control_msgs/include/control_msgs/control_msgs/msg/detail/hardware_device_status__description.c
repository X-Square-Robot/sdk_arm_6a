// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from control_msgs:msg/HardwareDeviceStatus.idl
// generated code does not contain a copyright notice

#include "control_msgs/msg/detail/hardware_device_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__msg__HardwareDeviceStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xec, 0xbd, 0xff, 0x25, 0x72, 0xd2, 0x9a, 0xfc,
      0x68, 0x7e, 0x31, 0xfe, 0x6e, 0x20, 0x06, 0xc9,
      0x5e, 0xda, 0x8d, 0x7b, 0xb5, 0xbb, 0x98, 0xfc,
      0xa1, 0xa2, 0x62, 0x94, 0x2c, 0x5e, 0x96, 0xcd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "control_msgs/msg/detail/generic_hardware_state__functions.h"
#include "diagnostic_msgs/msg/detail/key_value__functions.h"
#include "control_msgs/msg/detail/vda5050_state__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "control_msgs/msg/detail/ether_cat_state__functions.h"
#include "control_msgs/msg/detail/ca_nopen_state__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t control_msgs__msg__CANopenState__EXPECTED_HASH = {1, {
    0x9a, 0x99, 0x90, 0x9f, 0xeb, 0x08, 0xbe, 0x78,
    0x06, 0x6d, 0xc0, 0x92, 0x2d, 0xad, 0x6d, 0x98,
    0xe4, 0xe1, 0x56, 0x88, 0x3b, 0xca, 0x5b, 0xfa,
    0xc6, 0xf6, 0x9d, 0x7c, 0xfa, 0x0d, 0x8c, 0x59,
  }};
static const rosidl_type_hash_t control_msgs__msg__EtherCATState__EXPECTED_HASH = {1, {
    0xba, 0xea, 0x23, 0xcd, 0xc1, 0x77, 0x2b, 0x7c,
    0x5b, 0x01, 0x2b, 0xca, 0xad, 0xee, 0x0a, 0x76,
    0x3b, 0x02, 0x93, 0x8b, 0x9b, 0xc4, 0x63, 0xfe,
    0x58, 0x98, 0xa0, 0x02, 0x1c, 0x7b, 0x1e, 0x09,
  }};
static const rosidl_type_hash_t control_msgs__msg__GenericHardwareState__EXPECTED_HASH = {1, {
    0xbc, 0xaf, 0x0d, 0xe2, 0x18, 0x67, 0x57, 0x41,
    0x8e, 0xd4, 0xbb, 0x21, 0x17, 0x38, 0xc0, 0xbb,
    0x59, 0xfc, 0xcb, 0x10, 0xf0, 0x61, 0x26, 0x60,
    0xe2, 0xc5, 0x04, 0x8e, 0xb5, 0x67, 0xd7, 0xbc,
  }};
static const rosidl_type_hash_t control_msgs__msg__VDA5050State__EXPECTED_HASH = {1, {
    0xf8, 0x0f, 0xf1, 0x30, 0xc0, 0x12, 0xef, 0x7e,
    0xfd, 0x91, 0x8e, 0x80, 0x56, 0xbb, 0x91, 0x4b,
    0x38, 0xfb, 0x36, 0xe8, 0x43, 0x39, 0xd8, 0x89,
    0xbc, 0xa5, 0xfc, 0x56, 0x81, 0x41, 0x4a, 0x34,
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

static char control_msgs__msg__HardwareDeviceStatus__TYPE_NAME[] = "control_msgs/msg/HardwareDeviceStatus";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char control_msgs__msg__CANopenState__TYPE_NAME[] = "control_msgs/msg/CANopenState";
static char control_msgs__msg__EtherCATState__TYPE_NAME[] = "control_msgs/msg/EtherCATState";
static char control_msgs__msg__GenericHardwareState__TYPE_NAME[] = "control_msgs/msg/GenericHardwareState";
static char control_msgs__msg__VDA5050State__TYPE_NAME[] = "control_msgs/msg/VDA5050State";
static char diagnostic_msgs__msg__KeyValue__TYPE_NAME[] = "diagnostic_msgs/msg/KeyValue";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char control_msgs__msg__HardwareDeviceStatus__FIELD_NAME__header[] = "header";
static char control_msgs__msg__HardwareDeviceStatus__FIELD_NAME__device_id[] = "device_id";
static char control_msgs__msg__HardwareDeviceStatus__FIELD_NAME__hardware_status[] = "hardware_status";
static char control_msgs__msg__HardwareDeviceStatus__FIELD_NAME__canopen_states[] = "canopen_states";
static char control_msgs__msg__HardwareDeviceStatus__FIELD_NAME__ethercat_states[] = "ethercat_states";
static char control_msgs__msg__HardwareDeviceStatus__FIELD_NAME__vda5050_states[] = "vda5050_states";

static rosidl_runtime_c__type_description__Field control_msgs__msg__HardwareDeviceStatus__FIELDS[] = {
  {
    {control_msgs__msg__HardwareDeviceStatus__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__HardwareDeviceStatus__FIELD_NAME__device_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__HardwareDeviceStatus__FIELD_NAME__hardware_status, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {control_msgs__msg__GenericHardwareState__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__HardwareDeviceStatus__FIELD_NAME__canopen_states, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {control_msgs__msg__CANopenState__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__HardwareDeviceStatus__FIELD_NAME__ethercat_states, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {control_msgs__msg__EtherCATState__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__HardwareDeviceStatus__FIELD_NAME__vda5050_states, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {control_msgs__msg__VDA5050State__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription control_msgs__msg__HardwareDeviceStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__CANopenState__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__EtherCATState__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__GenericHardwareState__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__VDA5050State__TYPE_NAME, 29, 29},
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
control_msgs__msg__HardwareDeviceStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__msg__HardwareDeviceStatus__TYPE_NAME, 37, 37},
      {control_msgs__msg__HardwareDeviceStatus__FIELDS, 6, 6},
    },
    {control_msgs__msg__HardwareDeviceStatus__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&control_msgs__msg__CANopenState__EXPECTED_HASH, control_msgs__msg__CANopenState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = control_msgs__msg__CANopenState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&control_msgs__msg__EtherCATState__EXPECTED_HASH, control_msgs__msg__EtherCATState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = control_msgs__msg__EtherCATState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&control_msgs__msg__GenericHardwareState__EXPECTED_HASH, control_msgs__msg__GenericHardwareState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = control_msgs__msg__GenericHardwareState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&control_msgs__msg__VDA5050State__EXPECTED_HASH, control_msgs__msg__VDA5050State__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = control_msgs__msg__VDA5050State__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&diagnostic_msgs__msg__KeyValue__EXPECTED_HASH, diagnostic_msgs__msg__KeyValue__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = diagnostic_msgs__msg__KeyValue__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message presents current hardware device status information\n"
  "\n"
  "# Header timestamp should be update time of device status\n"
  "std_msgs/Header header\n"
  "\n"
  "# Unique identifier for the device, e.g. \"base_motor\", \"gripper_joint_1\"\n"
  "string device_id\n"
  "\n"
  "# --- Standard-Specific States --------------------------------------\n"
  "# States populated based on the standards relevant to this device.\n"
  "# A device will only fill the arrays for the standards it implements, rest will be empty\n"
  "\n"
  "# Generic hardware status information applicable to any device, it is suggested to fill this for all devices\n"
  "GenericHardwareState[] hardware_status\n"
  "\n"
  "# CANopen-specific device states (DS-301/DS-402 compliant devices)\n"
  "CANopenState[] canopen_states\n"
  "\n"
  "# EtherCAT-specific device states (CoE, FoE, etc.)\n"
  "EtherCATState[] ethercat_states\n"
  "\n"
  "# VDA5050-specific states for AGV/mobile robot devices\n"
  "VDA5050State[] vda5050_states";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__msg__HardwareDeviceStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__msg__HardwareDeviceStatus__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 884, 884},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__msg__HardwareDeviceStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__msg__HardwareDeviceStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *control_msgs__msg__CANopenState__get_individual_type_description_source(NULL);
    sources[3] = *control_msgs__msg__EtherCATState__get_individual_type_description_source(NULL);
    sources[4] = *control_msgs__msg__GenericHardwareState__get_individual_type_description_source(NULL);
    sources[5] = *control_msgs__msg__VDA5050State__get_individual_type_description_source(NULL);
    sources[6] = *diagnostic_msgs__msg__KeyValue__get_individual_type_description_source(NULL);
    sources[7] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
