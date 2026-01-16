// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from control_msgs:msg/EtherCATState.idl
// generated code does not contain a copyright notice

#include "control_msgs/msg/detail/ether_cat_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__msg__EtherCATState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xba, 0xea, 0x23, 0xcd, 0xc1, 0x77, 0x2b, 0x7c,
      0x5b, 0x01, 0x2b, 0xca, 0xad, 0xee, 0x0a, 0x76,
      0x3b, 0x02, 0x93, 0x8b, 0x9b, 0xc4, 0x63, 0xfe,
      0x58, 0x98, 0xa0, 0x02, 0x1c, 0x7b, 0x1e, 0x09,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char control_msgs__msg__EtherCATState__TYPE_NAME[] = "control_msgs/msg/EtherCATState";

// Define type names, field names, and default values
static char control_msgs__msg__EtherCATState__FIELD_NAME__slave_position[] = "slave_position";
static char control_msgs__msg__EtherCATState__FIELD_NAME__vendor_id[] = "vendor_id";
static char control_msgs__msg__EtherCATState__FIELD_NAME__product_code[] = "product_code";
static char control_msgs__msg__EtherCATState__FIELD_NAME__al_state[] = "al_state";
static char control_msgs__msg__EtherCATState__FIELD_NAME__has_error[] = "has_error";
static char control_msgs__msg__EtherCATState__FIELD_NAME__al_status_code[] = "al_status_code";

static rosidl_runtime_c__type_description__Field control_msgs__msg__EtherCATState__FIELDS[] = {
  {
    {control_msgs__msg__EtherCATState__FIELD_NAME__slave_position, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__EtherCATState__FIELD_NAME__vendor_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__EtherCATState__FIELD_NAME__product_code, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__EtherCATState__FIELD_NAME__al_state, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__EtherCATState__FIELD_NAME__has_error, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__EtherCATState__FIELD_NAME__al_status_code, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
control_msgs__msg__EtherCATState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__msg__EtherCATState__TYPE_NAME, 30, 30},
      {control_msgs__msg__EtherCATState__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message presents EtherCAT-specific device state information\n"
  "# Refer ETG.1000 EtherCAT Specification\n"
  "\n"
  "# Position of the slave on the bus (0, 1, 2...)\n"
  "uint16 slave_position\n"
  "\n"
  "# Unique vendor identifier from the device's ESI file\n"
  "string vendor_id\n"
  "\n"
  "# Unique product code for the device from the device's ESI file\n"
  "string product_code\n"
  "\n"
  "# --- EtherCAT State Machine (ESM) ----------------------------------\n"
  "# Application Layer state, see ALState constants below\n"
  "uint8 al_state\n"
  "\n"
  "# True if the slave is in an error state\n"
  "bool has_error\n"
  "\n"
  "# AL Status Code indicating the reason for an error (0 = no error)\n"
  "uint16 al_status_code\n"
  "\n"
  "# --- Application Layer State Constants -----------------------------\n"
  "# EtherCAT slave states according to ETG.1000\n"
  "uint8 AL_STATE_INIT    = 1   # INIT state - slave initialization\n"
  "uint8 AL_STATE_PREOP   = 2   # PREOP state - pre-operational, mailbox communication\n"
  "uint8 AL_STATE_BOOTSTRAP = 3 # BOOTSTRAP state - firmware update mode\n"
  "uint8 AL_STATE_SAFEOP  = 4   # SAFEOP state - safe operational, inputs updated\n"
  "uint8 AL_STATE_OP      = 8   # OP state - operational, full communication";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__msg__EtherCATState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__msg__EtherCATState__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1112, 1112},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__msg__EtherCATState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__msg__EtherCATState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
