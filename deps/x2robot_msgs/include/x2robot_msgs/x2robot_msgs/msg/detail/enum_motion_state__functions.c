// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from x2robot_msgs:msg/EnumMotionState.idl
// generated code does not contain a copyright notice
#include "x2robot_msgs/msg/detail/enum_motion_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
x2robot_msgs__msg__EnumMotionState__init(x2robot_msgs__msg__EnumMotionState * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
x2robot_msgs__msg__EnumMotionState__fini(x2robot_msgs__msg__EnumMotionState * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
x2robot_msgs__msg__EnumMotionState__are_equal(const x2robot_msgs__msg__EnumMotionState * lhs, const x2robot_msgs__msg__EnumMotionState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
x2robot_msgs__msg__EnumMotionState__copy(
  const x2robot_msgs__msg__EnumMotionState * input,
  x2robot_msgs__msg__EnumMotionState * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

x2robot_msgs__msg__EnumMotionState *
x2robot_msgs__msg__EnumMotionState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__msg__EnumMotionState * msg = (x2robot_msgs__msg__EnumMotionState *)allocator.allocate(sizeof(x2robot_msgs__msg__EnumMotionState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(x2robot_msgs__msg__EnumMotionState));
  bool success = x2robot_msgs__msg__EnumMotionState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
x2robot_msgs__msg__EnumMotionState__destroy(x2robot_msgs__msg__EnumMotionState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    x2robot_msgs__msg__EnumMotionState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
x2robot_msgs__msg__EnumMotionState__Sequence__init(x2robot_msgs__msg__EnumMotionState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__msg__EnumMotionState * data = NULL;

  if (size) {
    data = (x2robot_msgs__msg__EnumMotionState *)allocator.zero_allocate(size, sizeof(x2robot_msgs__msg__EnumMotionState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = x2robot_msgs__msg__EnumMotionState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        x2robot_msgs__msg__EnumMotionState__fini(&data[i - 1]);
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
x2robot_msgs__msg__EnumMotionState__Sequence__fini(x2robot_msgs__msg__EnumMotionState__Sequence * array)
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
      x2robot_msgs__msg__EnumMotionState__fini(&array->data[i]);
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

x2robot_msgs__msg__EnumMotionState__Sequence *
x2robot_msgs__msg__EnumMotionState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__msg__EnumMotionState__Sequence * array = (x2robot_msgs__msg__EnumMotionState__Sequence *)allocator.allocate(sizeof(x2robot_msgs__msg__EnumMotionState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = x2robot_msgs__msg__EnumMotionState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
x2robot_msgs__msg__EnumMotionState__Sequence__destroy(x2robot_msgs__msg__EnumMotionState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    x2robot_msgs__msg__EnumMotionState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
x2robot_msgs__msg__EnumMotionState__Sequence__are_equal(const x2robot_msgs__msg__EnumMotionState__Sequence * lhs, const x2robot_msgs__msg__EnumMotionState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!x2robot_msgs__msg__EnumMotionState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
x2robot_msgs__msg__EnumMotionState__Sequence__copy(
  const x2robot_msgs__msg__EnumMotionState__Sequence * input,
  x2robot_msgs__msg__EnumMotionState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(x2robot_msgs__msg__EnumMotionState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    x2robot_msgs__msg__EnumMotionState * data =
      (x2robot_msgs__msg__EnumMotionState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!x2robot_msgs__msg__EnumMotionState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          x2robot_msgs__msg__EnumMotionState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!x2robot_msgs__msg__EnumMotionState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
