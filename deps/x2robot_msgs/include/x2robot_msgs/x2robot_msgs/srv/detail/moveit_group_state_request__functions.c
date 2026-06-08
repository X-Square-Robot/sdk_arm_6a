// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from x2robot_msgs:srv/MoveitGroupStateRequest.idl
// generated code does not contain a copyright notice
#include "x2robot_msgs/srv/detail/moveit_group_state_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `group_state`
#include "rosidl_runtime_c/string_functions.h"

bool
x2robot_msgs__srv__MoveitGroupStateRequest_Request__init(x2robot_msgs__srv__MoveitGroupStateRequest_Request * msg)
{
  if (!msg) {
    return false;
  }
  // group_state
  if (!rosidl_runtime_c__String__init(&msg->group_state)) {
    x2robot_msgs__srv__MoveitGroupStateRequest_Request__fini(msg);
    return false;
  }
  // num_planning_attempts
  msg->num_planning_attempts = 1;
  // allowed_planning_time
  msg->allowed_planning_time = 1.0l;
  // max_velocity_scaling_factor
  msg->max_velocity_scaling_factor = 0.1l;
  // max_acceleration_scaling_factor
  msg->max_acceleration_scaling_factor = 0.2l;
  return true;
}

void
x2robot_msgs__srv__MoveitGroupStateRequest_Request__fini(x2robot_msgs__srv__MoveitGroupStateRequest_Request * msg)
{
  if (!msg) {
    return;
  }
  // group_state
  rosidl_runtime_c__String__fini(&msg->group_state);
  // num_planning_attempts
  // allowed_planning_time
  // max_velocity_scaling_factor
  // max_acceleration_scaling_factor
}

bool
x2robot_msgs__srv__MoveitGroupStateRequest_Request__are_equal(const x2robot_msgs__srv__MoveitGroupStateRequest_Request * lhs, const x2robot_msgs__srv__MoveitGroupStateRequest_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // group_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->group_state), &(rhs->group_state)))
  {
    return false;
  }
  // num_planning_attempts
  if (lhs->num_planning_attempts != rhs->num_planning_attempts) {
    return false;
  }
  // allowed_planning_time
  if (lhs->allowed_planning_time != rhs->allowed_planning_time) {
    return false;
  }
  // max_velocity_scaling_factor
  if (lhs->max_velocity_scaling_factor != rhs->max_velocity_scaling_factor) {
    return false;
  }
  // max_acceleration_scaling_factor
  if (lhs->max_acceleration_scaling_factor != rhs->max_acceleration_scaling_factor) {
    return false;
  }
  return true;
}

bool
x2robot_msgs__srv__MoveitGroupStateRequest_Request__copy(
  const x2robot_msgs__srv__MoveitGroupStateRequest_Request * input,
  x2robot_msgs__srv__MoveitGroupStateRequest_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // group_state
  if (!rosidl_runtime_c__String__copy(
      &(input->group_state), &(output->group_state)))
  {
    return false;
  }
  // num_planning_attempts
  output->num_planning_attempts = input->num_planning_attempts;
  // allowed_planning_time
  output->allowed_planning_time = input->allowed_planning_time;
  // max_velocity_scaling_factor
  output->max_velocity_scaling_factor = input->max_velocity_scaling_factor;
  // max_acceleration_scaling_factor
  output->max_acceleration_scaling_factor = input->max_acceleration_scaling_factor;
  return true;
}

x2robot_msgs__srv__MoveitGroupStateRequest_Request *
x2robot_msgs__srv__MoveitGroupStateRequest_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__srv__MoveitGroupStateRequest_Request * msg = (x2robot_msgs__srv__MoveitGroupStateRequest_Request *)allocator.allocate(sizeof(x2robot_msgs__srv__MoveitGroupStateRequest_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(x2robot_msgs__srv__MoveitGroupStateRequest_Request));
  bool success = x2robot_msgs__srv__MoveitGroupStateRequest_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
x2robot_msgs__srv__MoveitGroupStateRequest_Request__destroy(x2robot_msgs__srv__MoveitGroupStateRequest_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    x2robot_msgs__srv__MoveitGroupStateRequest_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence__init(x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__srv__MoveitGroupStateRequest_Request * data = NULL;

  if (size) {
    data = (x2robot_msgs__srv__MoveitGroupStateRequest_Request *)allocator.zero_allocate(size, sizeof(x2robot_msgs__srv__MoveitGroupStateRequest_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = x2robot_msgs__srv__MoveitGroupStateRequest_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        x2robot_msgs__srv__MoveitGroupStateRequest_Request__fini(&data[i - 1]);
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
x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence__fini(x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence * array)
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
      x2robot_msgs__srv__MoveitGroupStateRequest_Request__fini(&array->data[i]);
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

x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence *
x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence * array = (x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence *)allocator.allocate(sizeof(x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence__destroy(x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence__are_equal(const x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence * lhs, const x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!x2robot_msgs__srv__MoveitGroupStateRequest_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence__copy(
  const x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence * input,
  x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(x2robot_msgs__srv__MoveitGroupStateRequest_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    x2robot_msgs__srv__MoveitGroupStateRequest_Request * data =
      (x2robot_msgs__srv__MoveitGroupStateRequest_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!x2robot_msgs__srv__MoveitGroupStateRequest_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          x2robot_msgs__srv__MoveitGroupStateRequest_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!x2robot_msgs__srv__MoveitGroupStateRequest_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
x2robot_msgs__srv__MoveitGroupStateRequest_Response__init(x2robot_msgs__srv__MoveitGroupStateRequest_Response * msg)
{
  if (!msg) {
    return false;
  }
  // moveit_move_result
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    x2robot_msgs__srv__MoveitGroupStateRequest_Response__fini(msg);
    return false;
  }
  return true;
}

void
x2robot_msgs__srv__MoveitGroupStateRequest_Response__fini(x2robot_msgs__srv__MoveitGroupStateRequest_Response * msg)
{
  if (!msg) {
    return;
  }
  // moveit_move_result
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
x2robot_msgs__srv__MoveitGroupStateRequest_Response__are_equal(const x2robot_msgs__srv__MoveitGroupStateRequest_Response * lhs, const x2robot_msgs__srv__MoveitGroupStateRequest_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // moveit_move_result
  if (lhs->moveit_move_result != rhs->moveit_move_result) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
x2robot_msgs__srv__MoveitGroupStateRequest_Response__copy(
  const x2robot_msgs__srv__MoveitGroupStateRequest_Response * input,
  x2robot_msgs__srv__MoveitGroupStateRequest_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // moveit_move_result
  output->moveit_move_result = input->moveit_move_result;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

x2robot_msgs__srv__MoveitGroupStateRequest_Response *
x2robot_msgs__srv__MoveitGroupStateRequest_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__srv__MoveitGroupStateRequest_Response * msg = (x2robot_msgs__srv__MoveitGroupStateRequest_Response *)allocator.allocate(sizeof(x2robot_msgs__srv__MoveitGroupStateRequest_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(x2robot_msgs__srv__MoveitGroupStateRequest_Response));
  bool success = x2robot_msgs__srv__MoveitGroupStateRequest_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
x2robot_msgs__srv__MoveitGroupStateRequest_Response__destroy(x2robot_msgs__srv__MoveitGroupStateRequest_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    x2robot_msgs__srv__MoveitGroupStateRequest_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence__init(x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__srv__MoveitGroupStateRequest_Response * data = NULL;

  if (size) {
    data = (x2robot_msgs__srv__MoveitGroupStateRequest_Response *)allocator.zero_allocate(size, sizeof(x2robot_msgs__srv__MoveitGroupStateRequest_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = x2robot_msgs__srv__MoveitGroupStateRequest_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        x2robot_msgs__srv__MoveitGroupStateRequest_Response__fini(&data[i - 1]);
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
x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence__fini(x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence * array)
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
      x2robot_msgs__srv__MoveitGroupStateRequest_Response__fini(&array->data[i]);
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

x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence *
x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence * array = (x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence *)allocator.allocate(sizeof(x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence__destroy(x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence__are_equal(const x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence * lhs, const x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!x2robot_msgs__srv__MoveitGroupStateRequest_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence__copy(
  const x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence * input,
  x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(x2robot_msgs__srv__MoveitGroupStateRequest_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    x2robot_msgs__srv__MoveitGroupStateRequest_Response * data =
      (x2robot_msgs__srv__MoveitGroupStateRequest_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!x2robot_msgs__srv__MoveitGroupStateRequest_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          x2robot_msgs__srv__MoveitGroupStateRequest_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!x2robot_msgs__srv__MoveitGroupStateRequest_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "x2robot_msgs/srv/detail/moveit_group_state_request__functions.h"

bool
x2robot_msgs__srv__MoveitGroupStateRequest_Event__init(x2robot_msgs__srv__MoveitGroupStateRequest_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    x2robot_msgs__srv__MoveitGroupStateRequest_Event__fini(msg);
    return false;
  }
  // request
  if (!x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence__init(&msg->request, 0)) {
    x2robot_msgs__srv__MoveitGroupStateRequest_Event__fini(msg);
    return false;
  }
  // response
  if (!x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence__init(&msg->response, 0)) {
    x2robot_msgs__srv__MoveitGroupStateRequest_Event__fini(msg);
    return false;
  }
  return true;
}

void
x2robot_msgs__srv__MoveitGroupStateRequest_Event__fini(x2robot_msgs__srv__MoveitGroupStateRequest_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence__fini(&msg->request);
  // response
  x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence__fini(&msg->response);
}

bool
x2robot_msgs__srv__MoveitGroupStateRequest_Event__are_equal(const x2robot_msgs__srv__MoveitGroupStateRequest_Event * lhs, const x2robot_msgs__srv__MoveitGroupStateRequest_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
x2robot_msgs__srv__MoveitGroupStateRequest_Event__copy(
  const x2robot_msgs__srv__MoveitGroupStateRequest_Event * input,
  x2robot_msgs__srv__MoveitGroupStateRequest_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

x2robot_msgs__srv__MoveitGroupStateRequest_Event *
x2robot_msgs__srv__MoveitGroupStateRequest_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__srv__MoveitGroupStateRequest_Event * msg = (x2robot_msgs__srv__MoveitGroupStateRequest_Event *)allocator.allocate(sizeof(x2robot_msgs__srv__MoveitGroupStateRequest_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(x2robot_msgs__srv__MoveitGroupStateRequest_Event));
  bool success = x2robot_msgs__srv__MoveitGroupStateRequest_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
x2robot_msgs__srv__MoveitGroupStateRequest_Event__destroy(x2robot_msgs__srv__MoveitGroupStateRequest_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    x2robot_msgs__srv__MoveitGroupStateRequest_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
x2robot_msgs__srv__MoveitGroupStateRequest_Event__Sequence__init(x2robot_msgs__srv__MoveitGroupStateRequest_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__srv__MoveitGroupStateRequest_Event * data = NULL;

  if (size) {
    data = (x2robot_msgs__srv__MoveitGroupStateRequest_Event *)allocator.zero_allocate(size, sizeof(x2robot_msgs__srv__MoveitGroupStateRequest_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = x2robot_msgs__srv__MoveitGroupStateRequest_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        x2robot_msgs__srv__MoveitGroupStateRequest_Event__fini(&data[i - 1]);
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
x2robot_msgs__srv__MoveitGroupStateRequest_Event__Sequence__fini(x2robot_msgs__srv__MoveitGroupStateRequest_Event__Sequence * array)
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
      x2robot_msgs__srv__MoveitGroupStateRequest_Event__fini(&array->data[i]);
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

x2robot_msgs__srv__MoveitGroupStateRequest_Event__Sequence *
x2robot_msgs__srv__MoveitGroupStateRequest_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__srv__MoveitGroupStateRequest_Event__Sequence * array = (x2robot_msgs__srv__MoveitGroupStateRequest_Event__Sequence *)allocator.allocate(sizeof(x2robot_msgs__srv__MoveitGroupStateRequest_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = x2robot_msgs__srv__MoveitGroupStateRequest_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
x2robot_msgs__srv__MoveitGroupStateRequest_Event__Sequence__destroy(x2robot_msgs__srv__MoveitGroupStateRequest_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    x2robot_msgs__srv__MoveitGroupStateRequest_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
x2robot_msgs__srv__MoveitGroupStateRequest_Event__Sequence__are_equal(const x2robot_msgs__srv__MoveitGroupStateRequest_Event__Sequence * lhs, const x2robot_msgs__srv__MoveitGroupStateRequest_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!x2robot_msgs__srv__MoveitGroupStateRequest_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
x2robot_msgs__srv__MoveitGroupStateRequest_Event__Sequence__copy(
  const x2robot_msgs__srv__MoveitGroupStateRequest_Event__Sequence * input,
  x2robot_msgs__srv__MoveitGroupStateRequest_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(x2robot_msgs__srv__MoveitGroupStateRequest_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    x2robot_msgs__srv__MoveitGroupStateRequest_Event * data =
      (x2robot_msgs__srv__MoveitGroupStateRequest_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!x2robot_msgs__srv__MoveitGroupStateRequest_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          x2robot_msgs__srv__MoveitGroupStateRequest_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!x2robot_msgs__srv__MoveitGroupStateRequest_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
