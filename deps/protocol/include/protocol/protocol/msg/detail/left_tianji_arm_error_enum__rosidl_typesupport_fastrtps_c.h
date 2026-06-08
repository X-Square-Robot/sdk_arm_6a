// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from protocol:msg/LeftTianjiArmErrorEnum.idl
// generated code does not contain a copyright notice
#ifndef PROTOCOL__MSG__DETAIL__LEFT_TIANJI_ARM_ERROR_ENUM__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define PROTOCOL__MSG__DETAIL__LEFT_TIANJI_ARM_ERROR_ENUM__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "protocol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "protocol/msg/detail/left_tianji_arm_error_enum__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
bool cdr_serialize_protocol__msg__LeftTianjiArmErrorEnum(
  const protocol__msg__LeftTianjiArmErrorEnum * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
bool cdr_deserialize_protocol__msg__LeftTianjiArmErrorEnum(
  eprosima::fastcdr::Cdr &,
  protocol__msg__LeftTianjiArmErrorEnum * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_protocol__msg__LeftTianjiArmErrorEnum(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_protocol__msg__LeftTianjiArmErrorEnum(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
bool cdr_serialize_key_protocol__msg__LeftTianjiArmErrorEnum(
  const protocol__msg__LeftTianjiArmErrorEnum * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t get_serialized_size_key_protocol__msg__LeftTianjiArmErrorEnum(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
size_t max_serialized_size_key_protocol__msg__LeftTianjiArmErrorEnum(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, protocol, msg, LeftTianjiArmErrorEnum)();

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__LEFT_TIANJI_ARM_ERROR_ENUM__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
