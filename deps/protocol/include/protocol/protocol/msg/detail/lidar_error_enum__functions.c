// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/LidarErrorEnum.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/lidar_error_enum__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
protocol__msg__LidarErrorEnum__init(protocol__msg__LidarErrorEnum * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
protocol__msg__LidarErrorEnum__fini(protocol__msg__LidarErrorEnum * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
protocol__msg__LidarErrorEnum__are_equal(const protocol__msg__LidarErrorEnum * lhs, const protocol__msg__LidarErrorEnum * rhs)
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
protocol__msg__LidarErrorEnum__copy(
  const protocol__msg__LidarErrorEnum * input,
  protocol__msg__LidarErrorEnum * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

protocol__msg__LidarErrorEnum *
protocol__msg__LidarErrorEnum__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  protocol__msg__LidarErrorEnum * msg = (protocol__msg__LidarErrorEnum *)allocator.allocate(sizeof(protocol__msg__LidarErrorEnum), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__LidarErrorEnum));
  bool success = protocol__msg__LidarErrorEnum__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
protocol__msg__LidarErrorEnum__destroy(protocol__msg__LidarErrorEnum * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    protocol__msg__LidarErrorEnum__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
protocol__msg__LidarErrorEnum__Sequence__init(protocol__msg__LidarErrorEnum__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  protocol__msg__LidarErrorEnum * data = NULL;

  if (size) {
    data = (protocol__msg__LidarErrorEnum *)allocator.zero_allocate(size, sizeof(protocol__msg__LidarErrorEnum), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__LidarErrorEnum__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__LidarErrorEnum__fini(&data[i - 1]);
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
protocol__msg__LidarErrorEnum__Sequence__fini(protocol__msg__LidarErrorEnum__Sequence * array)
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
      protocol__msg__LidarErrorEnum__fini(&array->data[i]);
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

protocol__msg__LidarErrorEnum__Sequence *
protocol__msg__LidarErrorEnum__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  protocol__msg__LidarErrorEnum__Sequence * array = (protocol__msg__LidarErrorEnum__Sequence *)allocator.allocate(sizeof(protocol__msg__LidarErrorEnum__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__LidarErrorEnum__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
protocol__msg__LidarErrorEnum__Sequence__destroy(protocol__msg__LidarErrorEnum__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    protocol__msg__LidarErrorEnum__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
protocol__msg__LidarErrorEnum__Sequence__are_equal(const protocol__msg__LidarErrorEnum__Sequence * lhs, const protocol__msg__LidarErrorEnum__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__LidarErrorEnum__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__LidarErrorEnum__Sequence__copy(
  const protocol__msg__LidarErrorEnum__Sequence * input,
  protocol__msg__LidarErrorEnum__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__LidarErrorEnum);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    protocol__msg__LidarErrorEnum * data =
      (protocol__msg__LidarErrorEnum *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__LidarErrorEnum__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          protocol__msg__LidarErrorEnum__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!protocol__msg__LidarErrorEnum__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
