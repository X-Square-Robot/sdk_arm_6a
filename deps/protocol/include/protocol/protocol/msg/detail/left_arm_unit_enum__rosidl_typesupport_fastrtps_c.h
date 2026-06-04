// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from protocol:msg/LeftArmUnitEnum.idl
// generated code does not contain a copyright notice
#ifndef PROTOCOL__MSG__DETAIL__LEFT_ARM_UNIT_ENUM__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define PROTOCOL__MSG__DETAIL__LEFT_ARM_UNIT_ENUM__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/msg/detail/left_arm_unit_enum__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
bool cdr_serialize_protocol__msg__LeftArmUnitEnum(
  const protocol__msg__LeftArmUnitEnum * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
bool cdr_deserialize_protocol__msg__LeftArmUnitEnum(
  eprosima::fastcdr::Cdr &,
  protocol__msg__LeftArmUnitEnum * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__msg__LeftArmUnitEnum(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__msg__LeftArmUnitEnum(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
bool cdr_serialize_key_protocol__msg__LeftArmUnitEnum(
  const protocol__msg__LeftArmUnitEnum * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_key_protocol__msg__LeftArmUnitEnum(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_key_protocol__msg__LeftArmUnitEnum(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, LeftArmUnitEnum)();

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__LEFT_ARM_UNIT_ENUM__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
