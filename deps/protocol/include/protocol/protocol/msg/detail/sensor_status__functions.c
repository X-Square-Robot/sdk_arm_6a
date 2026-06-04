// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/SensorStatus.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/sensor_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
protocol__msg__SensorStatus__init(protocol__msg__SensorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // state_code
  // error_bit_code
  return true;
}

void
protocol__msg__SensorStatus__fini(protocol__msg__SensorStatus * msg)
{
  if (!msg) {
    return;
  }
  // state_code
  // error_bit_code
}

bool
protocol__msg__SensorStatus__are_equal(const protocol__msg__SensorStatus * lhs, const protocol__msg__SensorStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state_code
  if (lhs->state_code != rhs->state_code) {
    return false;
  }
  // error_bit_code
  if (lhs->error_bit_code != rhs->error_bit_code) {
    return false;
  }
  return true;
}

bool
protocol__msg__SensorStatus__copy(
  const protocol__msg__SensorStatus * input,
  protocol__msg__SensorStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // state_code
  output->state_code = input->state_code;
  // error_bit_code
  output->error_bit_code = input->error_bit_code;
  return true;
}

protocol__msg__SensorStatus *
protocol__msg__SensorStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  protocol__msg__SensorStatus * msg = (protocol__msg__SensorStatus *)allocator.allocate(sizeof(protocol__msg__SensorStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__SensorStatus));
  bool success = protocol__msg__SensorStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
protocol__msg__SensorStatus__destroy(protocol__msg__SensorStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    protocol__msg__SensorStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
protocol__msg__SensorStatus__Sequence__init(protocol__msg__SensorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  protocol__msg__SensorStatus * data = NULL;

  if (size) {
    data = (protocol__msg__SensorStatus *)allocator.zero_allocate(size, sizeof(protocol__msg__SensorStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__SensorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__SensorStatus__fini(&data[i - 1]);
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
protocol__msg__SensorStatus__Sequence__fini(protocol__msg__SensorStatus__Sequence * array)
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
      protocol__msg__SensorStatus__fini(&array->data[i]);
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

protocol__msg__SensorStatus__Sequence *
protocol__msg__SensorStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  protocol__msg__SensorStatus__Sequence * array = (protocol__msg__SensorStatus__Sequence *)allocator.allocate(sizeof(protocol__msg__SensorStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__SensorStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
protocol__msg__SensorStatus__Sequence__destroy(protocol__msg__SensorStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    protocol__msg__SensorStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
protocol__msg__SensorStatus__Sequence__are_equal(const protocol__msg__SensorStatus__Sequence * lhs, const protocol__msg__SensorStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__SensorStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__SensorStatus__Sequence__copy(
  const protocol__msg__SensorStatus__Sequence * input,
  protocol__msg__SensorStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__SensorStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    protocol__msg__SensorStatus * data =
      (protocol__msg__SensorStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__SensorStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          protocol__msg__SensorStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!protocol__msg__SensorStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
