// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:msg/VDA5050State.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/vda5050_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `order_id`
// Member `action_status`
// Member `operating_mode`
// Member `error_type`
// Member `error_description`
#include "rosidl_runtime_c/string_functions.h"

bool
control_msgs__msg__VDA5050State__init(control_msgs__msg__VDA5050State * msg)
{
  if (!msg) {
    return false;
  }
  // order_id
  if (!rosidl_runtime_c__String__init(&msg->order_id)) {
    control_msgs__msg__VDA5050State__fini(msg);
    return false;
  }
  // action_status
  if (!rosidl_runtime_c__String__init(&msg->action_status)) {
    control_msgs__msg__VDA5050State__fini(msg);
    return false;
  }
  // last_node_id
  // driving
  // battery_charge
  // operating_mode
  if (!rosidl_runtime_c__String__init(&msg->operating_mode)) {
    control_msgs__msg__VDA5050State__fini(msg);
    return false;
  }
  // error_type
  if (!rosidl_runtime_c__String__init(&msg->error_type)) {
    control_msgs__msg__VDA5050State__fini(msg);
    return false;
  }
  // error_description
  if (!rosidl_runtime_c__String__init(&msg->error_description)) {
    control_msgs__msg__VDA5050State__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__msg__VDA5050State__fini(control_msgs__msg__VDA5050State * msg)
{
  if (!msg) {
    return;
  }
  // order_id
  rosidl_runtime_c__String__fini(&msg->order_id);
  // action_status
  rosidl_runtime_c__String__fini(&msg->action_status);
  // last_node_id
  // driving
  // battery_charge
  // operating_mode
  rosidl_runtime_c__String__fini(&msg->operating_mode);
  // error_type
  rosidl_runtime_c__String__fini(&msg->error_type);
  // error_description
  rosidl_runtime_c__String__fini(&msg->error_description);
}

bool
control_msgs__msg__VDA5050State__are_equal(const control_msgs__msg__VDA5050State * lhs, const control_msgs__msg__VDA5050State * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // order_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->order_id), &(rhs->order_id)))
  {
    return false;
  }
  // action_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->action_status), &(rhs->action_status)))
  {
    return false;
  }
  // last_node_id
  if (lhs->last_node_id != rhs->last_node_id) {
    return false;
  }
  // driving
  if (lhs->driving != rhs->driving) {
    return false;
  }
  // battery_charge
  if (lhs->battery_charge != rhs->battery_charge) {
    return false;
  }
  // operating_mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->operating_mode), &(rhs->operating_mode)))
  {
    return false;
  }
  // error_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_type), &(rhs->error_type)))
  {
    return false;
  }
  // error_description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_description), &(rhs->error_description)))
  {
    return false;
  }
  return true;
}

bool
control_msgs__msg__VDA5050State__copy(
  const control_msgs__msg__VDA5050State * input,
  control_msgs__msg__VDA5050State * output)
{
  if (!input || !output) {
    return false;
  }
  // order_id
  if (!rosidl_runtime_c__String__copy(
      &(input->order_id), &(output->order_id)))
  {
    return false;
  }
  // action_status
  if (!rosidl_runtime_c__String__copy(
      &(input->action_status), &(output->action_status)))
  {
    return false;
  }
  // last_node_id
  output->last_node_id = input->last_node_id;
  // driving
  output->driving = input->driving;
  // battery_charge
  output->battery_charge = input->battery_charge;
  // operating_mode
  if (!rosidl_runtime_c__String__copy(
      &(input->operating_mode), &(output->operating_mode)))
  {
    return false;
  }
  // error_type
  if (!rosidl_runtime_c__String__copy(
      &(input->error_type), &(output->error_type)))
  {
    return false;
  }
  // error_description
  if (!rosidl_runtime_c__String__copy(
      &(input->error_description), &(output->error_description)))
  {
    return false;
  }
  return true;
}

control_msgs__msg__VDA5050State *
control_msgs__msg__VDA5050State__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__VDA5050State * msg = (control_msgs__msg__VDA5050State *)allocator.allocate(sizeof(control_msgs__msg__VDA5050State), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__msg__VDA5050State));
  bool success = control_msgs__msg__VDA5050State__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__msg__VDA5050State__destroy(control_msgs__msg__VDA5050State * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__msg__VDA5050State__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__msg__VDA5050State__Sequence__init(control_msgs__msg__VDA5050State__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__VDA5050State * data = NULL;

  if (size) {
    data = (control_msgs__msg__VDA5050State *)allocator.zero_allocate(size, sizeof(control_msgs__msg__VDA5050State), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__msg__VDA5050State__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__msg__VDA5050State__fini(&data[i - 1]);
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
control_msgs__msg__VDA5050State__Sequence__fini(control_msgs__msg__VDA5050State__Sequence * array)
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
      control_msgs__msg__VDA5050State__fini(&array->data[i]);
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

control_msgs__msg__VDA5050State__Sequence *
control_msgs__msg__VDA5050State__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__VDA5050State__Sequence * array = (control_msgs__msg__VDA5050State__Sequence *)allocator.allocate(sizeof(control_msgs__msg__VDA5050State__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__msg__VDA5050State__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__msg__VDA5050State__Sequence__destroy(control_msgs__msg__VDA5050State__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__msg__VDA5050State__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__msg__VDA5050State__Sequence__are_equal(const control_msgs__msg__VDA5050State__Sequence * lhs, const control_msgs__msg__VDA5050State__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__msg__VDA5050State__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__msg__VDA5050State__Sequence__copy(
  const control_msgs__msg__VDA5050State__Sequence * input,
  control_msgs__msg__VDA5050State__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__msg__VDA5050State);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__msg__VDA5050State * data =
      (control_msgs__msg__VDA5050State *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__msg__VDA5050State__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__msg__VDA5050State__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__msg__VDA5050State__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
