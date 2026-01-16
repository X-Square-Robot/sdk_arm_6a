// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from control_msgs:msg/VDA5050State.idl
// generated code does not contain a copyright notice

#include "control_msgs/msg/detail/vda5050_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__msg__VDA5050State__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf8, 0x0f, 0xf1, 0x30, 0xc0, 0x12, 0xef, 0x7e,
      0xfd, 0x91, 0x8e, 0x80, 0x56, 0xbb, 0x91, 0x4b,
      0x38, 0xfb, 0x36, 0xe8, 0x43, 0x39, 0xd8, 0x89,
      0xbc, 0xa5, 0xfc, 0x56, 0x81, 0x41, 0x4a, 0x34,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char control_msgs__msg__VDA5050State__TYPE_NAME[] = "control_msgs/msg/VDA5050State";

// Define type names, field names, and default values
static char control_msgs__msg__VDA5050State__FIELD_NAME__order_id[] = "order_id";
static char control_msgs__msg__VDA5050State__FIELD_NAME__action_status[] = "action_status";
static char control_msgs__msg__VDA5050State__FIELD_NAME__last_node_id[] = "last_node_id";
static char control_msgs__msg__VDA5050State__FIELD_NAME__driving[] = "driving";
static char control_msgs__msg__VDA5050State__FIELD_NAME__battery_charge[] = "battery_charge";
static char control_msgs__msg__VDA5050State__FIELD_NAME__operating_mode[] = "operating_mode";
static char control_msgs__msg__VDA5050State__FIELD_NAME__error_type[] = "error_type";
static char control_msgs__msg__VDA5050State__FIELD_NAME__error_description[] = "error_description";

static rosidl_runtime_c__type_description__Field control_msgs__msg__VDA5050State__FIELDS[] = {
  {
    {control_msgs__msg__VDA5050State__FIELD_NAME__order_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__VDA5050State__FIELD_NAME__action_status, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__VDA5050State__FIELD_NAME__last_node_id, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__VDA5050State__FIELD_NAME__driving, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__VDA5050State__FIELD_NAME__battery_charge, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__VDA5050State__FIELD_NAME__operating_mode, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__VDA5050State__FIELD_NAME__error_type, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__VDA5050State__FIELD_NAME__error_description, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
control_msgs__msg__VDA5050State__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__msg__VDA5050State__TYPE_NAME, 29, 29},
      {control_msgs__msg__VDA5050State__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message presents VDA5050-specific vehicle state information\n"
  "# For AGVs and AMRs compliant with VDA5050, this provides a snapshot of the vehicle's high-level status\n"
  "# Refer Official Specification document for the VDA 5050 - https://github.com/VDA5050/VDA5050\n"
  "\n"
  "# --- Order and Action Status ---------------------------------------\n"
  "# ID of the currently executed order\n"
  "string order_id\n"
  "\n"
  "# Current action execution status, see ActionStatus constants below\n"
  "string action_status\n"
  "\n"
  "# ID of the last reached node in the topology\n"
  "uint32 last_node_id\n"
  "\n"
  "# --- Vehicle State -------------------------------------------------\n"
  "# True if the vehicle's drives are active and vehicle is in motion\n"
  "bool driving\n"
  "\n"
  "# Current battery charge level in percent (0.0 - 100.0)\n"
  "float64 battery_charge\n"
  "\n"
  "# Current operating mode of the vehicle, see OperatingMode constants below\n"
  "string operating_mode\n"
  "\n"
  "# --- Error Reporting -----------------------------------------------\n"
  "# Type/category of the current error, empty string if no error\n"
  "string error_type\n"
  "\n"
  "# Human-readable description of the current error, empty string if no error\n"
  "string error_description\n"
  "\n"
  "# --- Action Status Constants ---------------------------------------\n"
  "# VDA5050 action execution states\n"
  "string ACTION_WAITING    = \"WAITING\"     # Action is waiting to be executed\n"
  "string ACTION_INITIALIZING = \"INITIALIZING\" # Action is being initialized\n"
  "string ACTION_RUNNING    = \"RUNNING\"     # Action is currently executing\n"
  "string ACTION_PAUSED     = \"PAUSED\"      # Action execution is paused\n"
  "string ACTION_FINISHED   = \"FINISHED\"    # Action completed successfully\n"
  "string ACTION_FAILED     = \"FAILED\"      # Action execution failed\n"
  "\n"
  "# --- Operating Mode Constants -------------------------------------\n"
  "# VDA5050 vehicle operating modes\n"
  "string MODE_AUTOMATIC    = \"AUTOMATIC\"   # Vehicle operates autonomously\n"
  "string MODE_SEMI_AUTOMATIC = \"SEMIAUTOMATIC\" # Vehicle requires operator confirmation\n"
  "string MODE_MANUAL       = \"MANUAL\"      # Vehicle is under manual control\n"
  "string MODE_SERVICE      = \"SERVICE\"     # Vehicle is in service/maintenance mode\n"
  "string MODE_EMERGENCY    = \"EMERGENCY\"   # Vehicle is in emergency mode\n"
  "string MODE_TEACHIN      = \"TEACHIN\"     # Vehicle is in teach-in mode for route learning";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__msg__VDA5050State__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__msg__VDA5050State__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2249, 2249},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__msg__VDA5050State__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__msg__VDA5050State__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
