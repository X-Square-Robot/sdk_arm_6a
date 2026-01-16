// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:msg/EtherCATState.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/ether_cat_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `vendor_id`
// Member `product_code`
#include "rosidl_runtime_c/string_functions.h"

bool
control_msgs__msg__EtherCATState__init(control_msgs__msg__EtherCATState * msg)
{
  if (!msg) {
    return false;
  }
  // slave_position
  // vendor_id
  if (!rosidl_runtime_c__String__init(&msg->vendor_id)) {
    control_msgs__msg__EtherCATState__fini(msg);
    return false;
  }
  // product_code
  if (!rosidl_runtime_c__String__init(&msg->product_code)) {
    control_msgs__msg__EtherCATState__fini(msg);
    return false;
  }
  // al_state
  // has_error
  // al_status_code
  return true;
}

void
control_msgs__msg__EtherCATState__fini(control_msgs__msg__EtherCATState * msg)
{
  if (!msg) {
    return;
  }
  // slave_position
  // vendor_id
  rosidl_runtime_c__String__fini(&msg->vendor_id);
  // product_code
  rosidl_runtime_c__String__fini(&msg->product_code);
  // al_state
  // has_error
  // al_status_code
}

bool
control_msgs__msg__EtherCATState__are_equal(const control_msgs__msg__EtherCATState * lhs, const control_msgs__msg__EtherCATState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // slave_position
  if (lhs->slave_position != rhs->slave_position) {
    return false;
  }
  // vendor_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->vendor_id), &(rhs->vendor_id)))
  {
    return false;
  }
  // product_code
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->product_code), &(rhs->product_code)))
  {
    return false;
  }
  // al_state
  if (lhs->al_state != rhs->al_state) {
    return false;
  }
  // has_error
  if (lhs->has_error != rhs->has_error) {
    return false;
  }
  // al_status_code
  if (lhs->al_status_code != rhs->al_status_code) {
    return false;
  }
  return true;
}

bool
control_msgs__msg__EtherCATState__copy(
  const control_msgs__msg__EtherCATState * input,
  control_msgs__msg__EtherCATState * output)
{
  if (!input || !output) {
    return false;
  }
  // slave_position
  output->slave_position = input->slave_position;
  // vendor_id
  if (!rosidl_runtime_c__String__copy(
      &(input->vendor_id), &(output->vendor_id)))
  {
    return false;
  }
  // product_code
  if (!rosidl_runtime_c__String__copy(
      &(input->product_code), &(output->product_code)))
  {
    return false;
  }
  // al_state
  output->al_state = input->al_state;
  // has_error
  output->has_error = input->has_error;
  // al_status_code
  output->al_status_code = input->al_status_code;
  return true;
}

control_msgs__msg__EtherCATState *
control_msgs__msg__EtherCATState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__EtherCATState * msg = (control_msgs__msg__EtherCATState *)allocator.allocate(sizeof(control_msgs__msg__EtherCATState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__msg__EtherCATState));
  bool success = control_msgs__msg__EtherCATState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__msg__EtherCATState__destroy(control_msgs__msg__EtherCATState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__msg__EtherCATState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__msg__EtherCATState__Sequence__init(control_msgs__msg__EtherCATState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__EtherCATState * data = NULL;

  if (size) {
    data = (control_msgs__msg__EtherCATState *)allocator.zero_allocate(size, sizeof(control_msgs__msg__EtherCATState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__msg__EtherCATState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__msg__EtherCATState__fini(&data[i - 1]);
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
control_msgs__msg__EtherCATState__Sequence__fini(control_msgs__msg__EtherCATState__Sequence * array)
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
      control_msgs__msg__EtherCATState__fini(&array->data[i]);
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

control_msgs__msg__EtherCATState__Sequence *
control_msgs__msg__EtherCATState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__EtherCATState__Sequence * array = (control_msgs__msg__EtherCATState__Sequence *)allocator.allocate(sizeof(control_msgs__msg__EtherCATState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__msg__EtherCATState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__msg__EtherCATState__Sequence__destroy(control_msgs__msg__EtherCATState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__msg__EtherCATState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__msg__EtherCATState__Sequence__are_equal(const control_msgs__msg__EtherCATState__Sequence * lhs, const control_msgs__msg__EtherCATState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__msg__EtherCATState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__msg__EtherCATState__Sequence__copy(
  const control_msgs__msg__EtherCATState__Sequence * input,
  control_msgs__msg__EtherCATState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__msg__EtherCATState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__msg__EtherCATState * data =
      (control_msgs__msg__EtherCATState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__msg__EtherCATState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__msg__EtherCATState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__msg__EtherCATState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
