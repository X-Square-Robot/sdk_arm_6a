// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from x2robot_msgs:msg/RobotArmState.idl
// generated code does not contain a copyright notice
#include "x2robot_msgs/msg/detail/robot_arm_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `error_msg`
#include "rosidl_runtime_c/string_functions.h"

bool
x2robot_msgs__msg__RobotArmState__init(x2robot_msgs__msg__RobotArmState * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    x2robot_msgs__msg__RobotArmState__fini(msg);
    return false;
  }
  // robot_state
  // current_control_mode
  // error_msg
  if (!rosidl_runtime_c__String__init(&msg->error_msg)) {
    x2robot_msgs__msg__RobotArmState__fini(msg);
    return false;
  }
  return true;
}

void
x2robot_msgs__msg__RobotArmState__fini(x2robot_msgs__msg__RobotArmState * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // robot_state
  // current_control_mode
  // error_msg
  rosidl_runtime_c__String__fini(&msg->error_msg);
}

bool
x2robot_msgs__msg__RobotArmState__are_equal(const x2robot_msgs__msg__RobotArmState * lhs, const x2robot_msgs__msg__RobotArmState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // robot_state
  if (lhs->robot_state != rhs->robot_state) {
    return false;
  }
  // current_control_mode
  if (lhs->current_control_mode != rhs->current_control_mode) {
    return false;
  }
  // error_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_msg), &(rhs->error_msg)))
  {
    return false;
  }
  return true;
}

bool
x2robot_msgs__msg__RobotArmState__copy(
  const x2robot_msgs__msg__RobotArmState * input,
  x2robot_msgs__msg__RobotArmState * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // robot_state
  output->robot_state = input->robot_state;
  // current_control_mode
  output->current_control_mode = input->current_control_mode;
  // error_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->error_msg), &(output->error_msg)))
  {
    return false;
  }
  return true;
}

x2robot_msgs__msg__RobotArmState *
x2robot_msgs__msg__RobotArmState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__msg__RobotArmState * msg = (x2robot_msgs__msg__RobotArmState *)allocator.allocate(sizeof(x2robot_msgs__msg__RobotArmState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(x2robot_msgs__msg__RobotArmState));
  bool success = x2robot_msgs__msg__RobotArmState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
x2robot_msgs__msg__RobotArmState__destroy(x2robot_msgs__msg__RobotArmState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    x2robot_msgs__msg__RobotArmState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
x2robot_msgs__msg__RobotArmState__Sequence__init(x2robot_msgs__msg__RobotArmState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__msg__RobotArmState * data = NULL;

  if (size) {
    data = (x2robot_msgs__msg__RobotArmState *)allocator.zero_allocate(size, sizeof(x2robot_msgs__msg__RobotArmState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = x2robot_msgs__msg__RobotArmState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        x2robot_msgs__msg__RobotArmState__fini(&data[i - 1]);
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
x2robot_msgs__msg__RobotArmState__Sequence__fini(x2robot_msgs__msg__RobotArmState__Sequence * array)
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
      x2robot_msgs__msg__RobotArmState__fini(&array->data[i]);
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

x2robot_msgs__msg__RobotArmState__Sequence *
x2robot_msgs__msg__RobotArmState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__msg__RobotArmState__Sequence * array = (x2robot_msgs__msg__RobotArmState__Sequence *)allocator.allocate(sizeof(x2robot_msgs__msg__RobotArmState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = x2robot_msgs__msg__RobotArmState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
x2robot_msgs__msg__RobotArmState__Sequence__destroy(x2robot_msgs__msg__RobotArmState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    x2robot_msgs__msg__RobotArmState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
x2robot_msgs__msg__RobotArmState__Sequence__are_equal(const x2robot_msgs__msg__RobotArmState__Sequence * lhs, const x2robot_msgs__msg__RobotArmState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!x2robot_msgs__msg__RobotArmState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
x2robot_msgs__msg__RobotArmState__Sequence__copy(
  const x2robot_msgs__msg__RobotArmState__Sequence * input,
  x2robot_msgs__msg__RobotArmState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(x2robot_msgs__msg__RobotArmState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    x2robot_msgs__msg__RobotArmState * data =
      (x2robot_msgs__msg__RobotArmState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!x2robot_msgs__msg__RobotArmState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          x2robot_msgs__msg__RobotArmState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!x2robot_msgs__msg__RobotArmState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
