// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from control_msgs:msg/GenericHardwareState.idl
// generated code does not contain a copyright notice

#include "control_msgs/msg/detail/generic_hardware_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__msg__GenericHardwareState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbc, 0xaf, 0x0d, 0xe2, 0x18, 0x67, 0x57, 0x41,
      0x8e, 0xd4, 0xbb, 0x21, 0x17, 0x38, 0xc0, 0xbb,
      0x59, 0xfc, 0xcb, 0x10, 0xf0, 0x61, 0x26, 0x60,
      0xe2, 0xc5, 0x04, 0x8e, 0xb5, 0x67, 0xd7, 0xbc,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "diagnostic_msgs/msg/detail/key_value__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t diagnostic_msgs__msg__KeyValue__EXPECTED_HASH = {1, {
    0xd6, 0x80, 0x81, 0xea, 0xa5, 0x40, 0x28, 0x8c,
    0x54, 0x40, 0x75, 0x3b, 0xae, 0xce, 0xf0, 0xc4,
    0xe1, 0x6e, 0x81, 0xa5, 0xf7, 0x8a, 0xd6, 0x89,
    0x02, 0xde, 0xd5, 0x10, 0x04, 0x13, 0xbb, 0x42,
  }};
#endif

static char control_msgs__msg__GenericHardwareState__TYPE_NAME[] = "control_msgs/msg/GenericHardwareState";
static char diagnostic_msgs__msg__KeyValue__TYPE_NAME[] = "diagnostic_msgs/msg/KeyValue";

// Define type names, field names, and default values
static char control_msgs__msg__GenericHardwareState__FIELD_NAME__health_status[] = "health_status";
static char control_msgs__msg__GenericHardwareState__FIELD_NAME__error_domain[] = "error_domain";
static char control_msgs__msg__GenericHardwareState__FIELD_NAME__operational_mode[] = "operational_mode";
static char control_msgs__msg__GenericHardwareState__FIELD_NAME__power_state[] = "power_state";
static char control_msgs__msg__GenericHardwareState__FIELD_NAME__connectivity_status[] = "connectivity_status";
static char control_msgs__msg__GenericHardwareState__FIELD_NAME__manufacturer[] = "manufacturer";
static char control_msgs__msg__GenericHardwareState__FIELD_NAME__model[] = "model";
static char control_msgs__msg__GenericHardwareState__FIELD_NAME__firmware_version[] = "firmware_version";
static char control_msgs__msg__GenericHardwareState__FIELD_NAME__state_details[] = "state_details";

static rosidl_runtime_c__type_description__Field control_msgs__msg__GenericHardwareState__FIELDS[] = {
  {
    {control_msgs__msg__GenericHardwareState__FIELD_NAME__health_status, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__GenericHardwareState__FIELD_NAME__error_domain, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__GenericHardwareState__FIELD_NAME__operational_mode, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__GenericHardwareState__FIELD_NAME__power_state, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__GenericHardwareState__FIELD_NAME__connectivity_status, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__GenericHardwareState__FIELD_NAME__manufacturer, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__GenericHardwareState__FIELD_NAME__model, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__GenericHardwareState__FIELD_NAME__firmware_version, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__GenericHardwareState__FIELD_NAME__state_details, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {diagnostic_msgs__msg__KeyValue__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription control_msgs__msg__GenericHardwareState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {diagnostic_msgs__msg__KeyValue__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
control_msgs__msg__GenericHardwareState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__msg__GenericHardwareState__TYPE_NAME, 37, 37},
      {control_msgs__msg__GenericHardwareState__FIELDS, 9, 9},
    },
    {control_msgs__msg__GenericHardwareState__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&diagnostic_msgs__msg__KeyValue__EXPECTED_HASH, diagnostic_msgs__msg__KeyValue__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = diagnostic_msgs__msg__KeyValue__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message encapsulates the general-purpose status fields, serving as a baseline for any hardware component\n"
  "\n"
  "# --- Health & Error ----------------------------------------------\n"
  "# Overall health status of the device, see HealthStatus constants below\n"
  "uint8 health_status\n"
  "\n"
  "# Array of device errors by category, see ErrorDomain constants below\n"
  "uint8[] error_domain\n"
  "\n"
  "# --- Operational State -------------------------------------------\n"
  "# Current operational mode of the device, see ModeStatus constants below\n"
  "uint8 operational_mode\n"
  "\n"
  "# Current power state of the device, see PowerState constants below\n"
  "uint8 power_state\n"
  "\n"
  "# Current connectivity status of the device, see ConnectivityStatus constants below\n"
  "uint8 connectivity_status\n"
  "\n"
  "# --- Vendor & Version Info ----------------------------------------\n"
  "# Device manufacturer name, e.g. \"Bosch\"\n"
  "string manufacturer\n"
  "\n"
  "# Device model identifier, e.g. \"Lidar-XYZ-v2\"\n"
  "string model\n"
  "\n"
  "# Current firmware version, e.g. \"1.2.3\"\n"
  "string firmware_version\n"
  "\n"
  "# --- Optional Details for Context ---------------------------------\n"
  "# Provides specific quantitative values related to the enums above.\n"
  "# e.g., for power_state, could have {key: \"voltage\", value: \"24.1\"}\n"
  "# e.g., for connectivity, could have {key: \"signal_strength\", value: \"-55dBm\"}\n"
  "diagnostic_msgs/KeyValue[] state_details\n"
  "\n"
  "# --- Health Status Constants -------------------------------------\n"
  "# High-level health indicators\n"
  "uint8 HEALTH_UNKNOWN  = 0\n"
  "uint8 HEALTH_OK       = 1\n"
  "uint8 HEALTH_DEGRADED = 2\n"
  "uint8 HEALTH_WARNING  = 3\n"
  "# Hardware stops publishing state when it returns ERROR/FATAL, how are these set/updated?\n"
  "uint8 HEALTH_ERROR    = 4\n"
  "uint8 HEALTH_FATAL    = 5\n"
  "\n"
  "# --- Error Domain Constants --------------------------------------\n"
  "# Error categories\n"
  "uint8 ERROR_NONE           = 0\n"
  "uint8 ERROR_UNKNOWN        = 1\n"
  "uint8 ERROR_HW             = 2  # generic hardware fault/error\n"
  "uint8 ERROR_SW             = 3  # generic software fault/error\n"
  "uint8 ERROR_OVER_TRAVEL    = 4  # Hardware stopped motion because position is over limits\n"
  "\n"
  "# Hardware/Software emergency and safety states\n"
  "uint8 EMERGENCY_STOP_HW    = 5  # state of the emergency stop hardware (i.e. e-stop button state)\n"
  "uint8 EMERGENCY_STOP_SW    = 6  # state of the emergency stop software system (over travel, pinch point)\n"
  "uint8 PROTECTIVE_STOP_HW   = 7  # state of the protective stop hardware (i.e. safety field state)\n"
  "uint8 PROTECTIVE_STOP_SW   = 8  # state of the software protective stop\n"
  "uint8 SAFETY_STOP          = 9\n"
  "uint8 CALIBRATION_REQUIRED = 10\n"
  "\n"
  "# --- Operational Mode Constants ----------------------------------\n"
  "# Mode of operation\n"
  "uint8 MODE_UNKNOWN              = 0\n"
  "uint8 MODE_MANUAL               = 1\n"
  "uint8 MODE_AUTO                 = 2  # automatic mode when the driver is remote controlling the hardware\n"
  "uint8 MODE_SAFE                 = 3  # what is the expected use case for this mode?\n"
  "uint8 MODE_MAINTENANCE          = 4\n"
  "uint8 MODE_JOG_MANUAL           = 5\n"
  "uint8 MODE_ADMITTANCE           = 6\n"
  "uint8 MODE_MONITORED_STOP       = 7\n"
  "uint8 MODE_HOLD_TO_RUN          = 8\n"
  "uint8 MODE_CARTESIAN_TWIST      = 9\n"
  "uint8 MODE_CARTESIAN_POSE       = 10\n"
  "uint8 MODE_TRAJECTORY_FORWARDING = 11\n"
  "uint8 MODE_TRAJECTORY_STREAMING  = 12\n"
  "\n"
  "# --- Power State Constants ---------------------------------------\n"
  "# Power states\n"
  "uint8 POWER_UNKNOWN         = 0\n"
  "uint8 POWER_OFF             = 1\n"
  "uint8 POWER_STANDBY         = 2\n"
  "uint8 POWER_ON              = 3\n"
  "uint8 POWER_SLEEP           = 4\n"
  "uint8 POWER_ERROR           = 5\n"
  "# Battery power states see BatteryState.msg\n"
  "uint8 POWER_LEVEL_LOW       = 6\n"
  "uint8 POWER_LEVEL_CRITICAL  = 7\n"
  "uint8 POWER_CHARGING        = 8\n"
  "uint8 POWER_CHARGING_ERROR  = 9\n"
  "\n"
  "# --- Connectivity Status Constants -------------------------------\n"
  "# Connectivity states\n"
  "uint8 CONNECT_UNKNOWN    = 0\n"
  "uint8 CONNECT_UP         = 1\n"
  "uint8 CONNECT_DOWN       = 2\n"
  "uint8 CONNECT_FAILURE    = 3\n"
  "uint8 CONNECTION_SLOW    = 4  # to tell the controlling system it is struggling to communicate at rate";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__msg__GenericHardwareState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__msg__GenericHardwareState__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 3946, 3946},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__msg__GenericHardwareState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__msg__GenericHardwareState__get_individual_type_description_source(NULL),
    sources[1] = *diagnostic_msgs__msg__KeyValue__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
