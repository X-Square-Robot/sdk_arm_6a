// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/JointMotorStatus.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/joint_motor_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `joint_motor_status`
#include "protocol/msg/detail/motor_status__functions.h"

bool
protocol__msg__JointMotorStatus__init(protocol__msg__JointMotorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // joint_motor_status
  if (!protocol__msg__MotorStatus__Sequence__init(&msg->joint_motor_status, 0)) {
    protocol__msg__JointMotorStatus__fini(msg);
    return false;
  }
  // all_joints_healthy
  return true;
}

void
protocol__msg__JointMotorStatus__fini(protocol__msg__JointMotorStatus * msg)
{
  if (!msg) {
    return;
  }
  // joint_motor_status
  protocol__msg__MotorStatus__Sequence__fini(&msg->joint_motor_status);
  // all_joints_healthy
}

bool
protocol__msg__JointMotorStatus__are_equal(const protocol__msg__JointMotorStatus * lhs, const protocol__msg__JointMotorStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_motor_status
  if (!protocol__msg__MotorStatus__Sequence__are_equal(
      &(lhs->joint_motor_status), &(rhs->joint_motor_status)))
  {
    return false;
  }
  // all_joints_healthy
  if (lhs->all_joints_healthy != rhs->all_joints_healthy) {
    return false;
  }
  return true;
}

bool
protocol__msg__JointMotorStatus__copy(
  const protocol__msg__JointMotorStatus * input,
  protocol__msg__JointMotorStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_motor_status
  if (!protocol__msg__MotorStatus__Sequence__copy(
      &(input->joint_motor_status), &(output->joint_motor_status)))
  {
    return false;
  }
  // all_joints_healthy
  output->all_joints_healthy = input->all_joints_healthy;
  return true;
}

protocol__msg__JointMotorStatus *
protocol__msg__JointMotorStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  protocol__msg__JointMotorStatus * msg = (protocol__msg__JointMotorStatus *)allocator.allocate(sizeof(protocol__msg__JointMotorStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__JointMotorStatus));
  bool success = protocol__msg__JointMotorStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
protocol__msg__JointMotorStatus__destroy(protocol__msg__JointMotorStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    protocol__msg__JointMotorStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
protocol__msg__JointMotorStatus__Sequence__init(protocol__msg__JointMotorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  protocol__msg__JointMotorStatus * data = NULL;

  if (size) {
    data = (protocol__msg__JointMotorStatus *)allocator.zero_allocate(size, sizeof(protocol__msg__JointMotorStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__JointMotorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__JointMotorStatus__fini(&data[i - 1]);
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
protocol__msg__JointMotorStatus__Sequence__fini(protocol__msg__JointMotorStatus__Sequence * array)
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
      protocol__msg__JointMotorStatus__fini(&array->data[i]);
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

protocol__msg__JointMotorStatus__Sequence *
protocol__msg__JointMotorStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  protocol__msg__JointMotorStatus__Sequence * array = (protocol__msg__JointMotorStatus__Sequence *)allocator.allocate(sizeof(protocol__msg__JointMotorStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__JointMotorStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
protocol__msg__JointMotorStatus__Sequence__destroy(protocol__msg__JointMotorStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    protocol__msg__JointMotorStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
protocol__msg__JointMotorStatus__Sequence__are_equal(const protocol__msg__JointMotorStatus__Sequence * lhs, const protocol__msg__JointMotorStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__JointMotorStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__JointMotorStatus__Sequence__copy(
  const protocol__msg__JointMotorStatus__Sequence * input,
  protocol__msg__JointMotorStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__JointMotorStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    protocol__msg__JointMotorStatus * data =
      (protocol__msg__JointMotorStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__JointMotorStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          protocol__msg__JointMotorStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!protocol__msg__JointMotorStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
