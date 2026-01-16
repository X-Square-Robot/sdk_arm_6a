// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from control_msgs:msg/CANopenState.idl
// generated code does not contain a copyright notice

#include "control_msgs/msg/detail/ca_nopen_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__msg__CANopenState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9a, 0x99, 0x90, 0x9f, 0xeb, 0x08, 0xbe, 0x78,
      0x06, 0x6d, 0xc0, 0x92, 0x2d, 0xad, 0x6d, 0x98,
      0xe4, 0xe1, 0x56, 0x88, 0x3b, 0xca, 0x5b, 0xfa,
      0xc6, 0xf6, 0x9d, 0x7c, 0xfa, 0x0d, 0x8c, 0x59,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char control_msgs__msg__CANopenState__TYPE_NAME[] = "control_msgs/msg/CANopenState";

// Define type names, field names, and default values
static char control_msgs__msg__CANopenState__FIELD_NAME__node_id[] = "node_id";
static char control_msgs__msg__CANopenState__FIELD_NAME__nmt_state[] = "nmt_state";
static char control_msgs__msg__CANopenState__FIELD_NAME__dsp_402_state[] = "dsp_402_state";
static char control_msgs__msg__CANopenState__FIELD_NAME__last_emcy_code[] = "last_emcy_code";

static rosidl_runtime_c__type_description__Field control_msgs__msg__CANopenState__FIELDS[] = {
  {
    {control_msgs__msg__CANopenState__FIELD_NAME__node_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__CANopenState__FIELD_NAME__nmt_state, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__CANopenState__FIELD_NAME__dsp_402_state, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__CANopenState__FIELD_NAME__last_emcy_code, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
control_msgs__msg__CANopenState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__msg__CANopenState__TYPE_NAME, 29, 29},
      {control_msgs__msg__CANopenState__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message presents CANopen-specific device state information\n"
  "# Refer CiA 301 and CiA 402 application layer documentation\n"
  "\n"
  "# The CANopen node ID of the device (1-127)\n"
  "uint8 node_id\n"
  "\n"
  "# --- CiA 301 State -------------------------------------------------\n"
  "# Network Management state, see NMTState constants below\n"
  "uint8 nmt_state\n"
  "\n"
  "# --- CiA 402 State (for drives) ------------------------------------\n"
  "# Drive state machine state for motion control devices, see DSP402State constants below\n"
  "uint8 dsp_402_state\n"
  "\n"
  "# --- Error Reporting -----------------------------------------------\n"
  "# Last Emergency (EMCY) error code received from the device\n"
  "uint32 last_emcy_code\n"
  "\n"
  "# --- NMT State Constants -------------------------------------------\n"
  "# CiA 301 Network Management states\n"
  "uint8 NMT_INITIALISING      = 0   # Device is initializing\n"
  "uint8 NMT_PRE_OPERATIONAL   = 127 # Device is in pre-operational state\n"
  "uint8 NMT_OPERATIONAL       = 5   # Device is operational\n"
  "uint8 NMT_STOPPED           = 4   # Device is stopped\n"
  "\n"
  "# --- DSP 402 State Constants ---------------------------------------\n"
  "# CiA 402 Drive state machine states\n"
  "uint8 DSP402_NOT_READY_TO_SWITCH_ON    = 0  # Not ready to switch on\n"
  "uint8 DSP402_SWITCH_ON_DISABLED        = 1  # Switch on disabled\n"
  "uint8 DSP402_READY_TO_SWITCH_ON        = 2  # Ready to switch on\n"
  "uint8 DSP402_SWITCHED_ON               = 3  # Switched on\n"
  "uint8 DSP402_OPERATION_ENABLED         = 4  # Operation enabled\n"
  "uint8 DSP402_QUICK_STOP_ACTIVE         = 5  # Quick stop active\n"
  "uint8 DSP402_FAULT_REACTION_ACTIVE     = 6  # Fault reaction active\n"
  "uint8 DSP402_FAULT                     = 7  # Fault state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__msg__CANopenState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__msg__CANopenState__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1629, 1629},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__msg__CANopenState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__msg__CANopenState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
