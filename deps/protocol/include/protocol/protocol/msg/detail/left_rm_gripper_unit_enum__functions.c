// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/LeftRmGripperUnitEnum.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/left_rm_gripper_unit_enum__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
protocol__msg__LeftRmGripperUnitEnum__init(protocol__msg__LeftRmGripperUnitEnum * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
protocol__msg__LeftRmGripperUnitEnum__fini(protocol__msg__LeftRmGripperUnitEnum * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
protocol__msg__LeftRmGripperUnitEnum__are_equal(const protocol__msg__LeftRmGripperUnitEnum * lhs, const protocol__msg__LeftRmGripperUnitEnum * rhs)
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
protocol__msg__LeftRmGripperUnitEnum__copy(
  const protocol__msg__LeftRmGripperUnitEnum * input,
  protocol__msg__LeftRmGripperUnitEnum * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

protocol__msg__LeftRmGripperUnitEnum *
protocol__msg__LeftRmGripperUnitEnum__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  protocol__msg__LeftRmGripperUnitEnum * msg = (protocol__msg__LeftRmGripperUnitEnum *)allocator.allocate(sizeof(protocol__msg__LeftRmGripperUnitEnum), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__LeftRmGripperUnitEnum));
  bool success = protocol__msg__LeftRmGripperUnitEnum__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
protocol__msg__LeftRmGripperUnitEnum__destroy(protocol__msg__LeftRmGripperUnitEnum * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    protocol__msg__LeftRmGripperUnitEnum__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
protocol__msg__LeftRmGripperUnitEnum__Sequence__init(protocol__msg__LeftRmGripperUnitEnum__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  protocol__msg__LeftRmGripperUnitEnum * data = NULL;

  if (size) {
    data = (protocol__msg__LeftRmGripperUnitEnum *)allocator.zero_allocate(size, sizeof(protocol__msg__LeftRmGripperUnitEnum), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__LeftRmGripperUnitEnum__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__LeftRmGripperUnitEnum__fini(&data[i - 1]);
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
protocol__msg__LeftRmGripperUnitEnum__Sequence__fini(protocol__msg__LeftRmGripperUnitEnum__Sequence * array)
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
      protocol__msg__LeftRmGripperUnitEnum__fini(&array->data[i]);
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

protocol__msg__LeftRmGripperUnitEnum__Sequence *
protocol__msg__LeftRmGripperUnitEnum__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  protocol__msg__LeftRmGripperUnitEnum__Sequence * array = (protocol__msg__LeftRmGripperUnitEnum__Sequence *)allocator.allocate(sizeof(protocol__msg__LeftRmGripperUnitEnum__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__LeftRmGripperUnitEnum__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
protocol__msg__LeftRmGripperUnitEnum__Sequence__destroy(protocol__msg__LeftRmGripperUnitEnum__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    protocol__msg__LeftRmGripperUnitEnum__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
protocol__msg__LeftRmGripperUnitEnum__Sequence__are_equal(const protocol__msg__LeftRmGripperUnitEnum__Sequence * lhs, const protocol__msg__LeftRmGripperUnitEnum__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__LeftRmGripperUnitEnum__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__LeftRmGripperUnitEnum__Sequence__copy(
  const protocol__msg__LeftRmGripperUnitEnum__Sequence * input,
  protocol__msg__LeftRmGripperUnitEnum__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__LeftRmGripperUnitEnum);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    protocol__msg__LeftRmGripperUnitEnum * data =
      (protocol__msg__LeftRmGripperUnitEnum *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__LeftRmGripperUnitEnum__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          protocol__msg__LeftRmGripperUnitEnum__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!protocol__msg__LeftRmGripperUnitEnum__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
