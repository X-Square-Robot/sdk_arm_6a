// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/ErrorCodes.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/error_codes__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `error_codes`
#include "protocol/msg/detail/global_error__functions.h"

bool
protocol__msg__ErrorCodes__init(protocol__msg__ErrorCodes * msg)
{
  if (!msg) {
    return false;
  }
  // error_codes
  if (!protocol__msg__GlobalError__Sequence__init(&msg->error_codes, 0)) {
    protocol__msg__ErrorCodes__fini(msg);
    return false;
  }
  return true;
}

void
protocol__msg__ErrorCodes__fini(protocol__msg__ErrorCodes * msg)
{
  if (!msg) {
    return;
  }
  // error_codes
  protocol__msg__GlobalError__Sequence__fini(&msg->error_codes);
}

bool
protocol__msg__ErrorCodes__are_equal(const protocol__msg__ErrorCodes * lhs, const protocol__msg__ErrorCodes * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // error_codes
  if (!protocol__msg__GlobalError__Sequence__are_equal(
      &(lhs->error_codes), &(rhs->error_codes)))
  {
    return false;
  }
  return true;
}

bool
protocol__msg__ErrorCodes__copy(
  const protocol__msg__ErrorCodes * input,
  protocol__msg__ErrorCodes * output)
{
  if (!input || !output) {
    return false;
  }
  // error_codes
  if (!protocol__msg__GlobalError__Sequence__copy(
      &(input->error_codes), &(output->error_codes)))
  {
    return false;
  }
  return true;
}

protocol__msg__ErrorCodes *
protocol__msg__ErrorCodes__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  protocol__msg__ErrorCodes * msg = (protocol__msg__ErrorCodes *)allocator.allocate(sizeof(protocol__msg__ErrorCodes), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__ErrorCodes));
  bool success = protocol__msg__ErrorCodes__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
protocol__msg__ErrorCodes__destroy(protocol__msg__ErrorCodes * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    protocol__msg__ErrorCodes__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
protocol__msg__ErrorCodes__Sequence__init(protocol__msg__ErrorCodes__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  protocol__msg__ErrorCodes * data = NULL;

  if (size) {
    data = (protocol__msg__ErrorCodes *)allocator.zero_allocate(size, sizeof(protocol__msg__ErrorCodes), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__ErrorCodes__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__ErrorCodes__fini(&data[i - 1]);
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
protocol__msg__ErrorCodes__Sequence__fini(protocol__msg__ErrorCodes__Sequence * array)
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
      protocol__msg__ErrorCodes__fini(&array->data[i]);
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

protocol__msg__ErrorCodes__Sequence *
protocol__msg__ErrorCodes__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  protocol__msg__ErrorCodes__Sequence * array = (protocol__msg__ErrorCodes__Sequence *)allocator.allocate(sizeof(protocol__msg__ErrorCodes__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__ErrorCodes__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
protocol__msg__ErrorCodes__Sequence__destroy(protocol__msg__ErrorCodes__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    protocol__msg__ErrorCodes__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
protocol__msg__ErrorCodes__Sequence__are_equal(const protocol__msg__ErrorCodes__Sequence * lhs, const protocol__msg__ErrorCodes__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__ErrorCodes__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__ErrorCodes__Sequence__copy(
  const protocol__msg__ErrorCodes__Sequence * input,
  protocol__msg__ErrorCodes__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__ErrorCodes);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    protocol__msg__ErrorCodes * data =
      (protocol__msg__ErrorCodes *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__ErrorCodes__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          protocol__msg__ErrorCodes__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!protocol__msg__ErrorCodes__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
