// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:msg/HardwareStatus.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/hardware_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `hardware_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `hardware_device_states`
#include "control_msgs/msg/detail/hardware_device_status__functions.h"

bool
control_msgs__msg__HardwareStatus__init(control_msgs__msg__HardwareStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    control_msgs__msg__HardwareStatus__fini(msg);
    return false;
  }
  // hardware_id
  if (!rosidl_runtime_c__String__init(&msg->hardware_id)) {
    control_msgs__msg__HardwareStatus__fini(msg);
    return false;
  }
  // hardware_device_states
  if (!control_msgs__msg__HardwareDeviceStatus__Sequence__init(&msg->hardware_device_states, 0)) {
    control_msgs__msg__HardwareStatus__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__msg__HardwareStatus__fini(control_msgs__msg__HardwareStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // hardware_id
  rosidl_runtime_c__String__fini(&msg->hardware_id);
  // hardware_device_states
  control_msgs__msg__HardwareDeviceStatus__Sequence__fini(&msg->hardware_device_states);
}

bool
control_msgs__msg__HardwareStatus__are_equal(const control_msgs__msg__HardwareStatus * lhs, const control_msgs__msg__HardwareStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // hardware_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->hardware_id), &(rhs->hardware_id)))
  {
    return false;
  }
  // hardware_device_states
  if (!control_msgs__msg__HardwareDeviceStatus__Sequence__are_equal(
      &(lhs->hardware_device_states), &(rhs->hardware_device_states)))
  {
    return false;
  }
  return true;
}

bool
control_msgs__msg__HardwareStatus__copy(
  const control_msgs__msg__HardwareStatus * input,
  control_msgs__msg__HardwareStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // hardware_id
  if (!rosidl_runtime_c__String__copy(
      &(input->hardware_id), &(output->hardware_id)))
  {
    return false;
  }
  // hardware_device_states
  if (!control_msgs__msg__HardwareDeviceStatus__Sequence__copy(
      &(input->hardware_device_states), &(output->hardware_device_states)))
  {
    return false;
  }
  return true;
}

control_msgs__msg__HardwareStatus *
control_msgs__msg__HardwareStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__HardwareStatus * msg = (control_msgs__msg__HardwareStatus *)allocator.allocate(sizeof(control_msgs__msg__HardwareStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__msg__HardwareStatus));
  bool success = control_msgs__msg__HardwareStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__msg__HardwareStatus__destroy(control_msgs__msg__HardwareStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__msg__HardwareStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__msg__HardwareStatus__Sequence__init(control_msgs__msg__HardwareStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__HardwareStatus * data = NULL;

  if (size) {
    data = (control_msgs__msg__HardwareStatus *)allocator.zero_allocate(size, sizeof(control_msgs__msg__HardwareStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__msg__HardwareStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__msg__HardwareStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
control_msgs__msg__HardwareStatus__Sequence__fini(control_msgs__msg__HardwareStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__msg__HardwareStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

control_msgs__msg__HardwareStatus__Sequence *
control_msgs__msg__HardwareStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__HardwareStatus__Sequence * array = (control_msgs__msg__HardwareStatus__Sequence *)allocator.allocate(sizeof(control_msgs__msg__HardwareStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__msg__HardwareStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__msg__HardwareStatus__Sequence__destroy(control_msgs__msg__HardwareStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__msg__HardwareStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__msg__HardwareStatus__Sequence__are_equal(const control_msgs__msg__HardwareStatus__Sequence * lhs, const control_msgs__msg__HardwareStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__msg__HardwareStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__msg__HardwareStatus__Sequence__copy(
  const control_msgs__msg__HardwareStatus__Sequence * input,
  control_msgs__msg__HardwareStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__msg__HardwareStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__msg__HardwareStatus * data =
      (control_msgs__msg__HardwareStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__msg__HardwareStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__msg__HardwareStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__msg__HardwareStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
