// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from behavior_velocity_planner:srv/LoadPlugin.idl
// generated code does not contain a copyright notice
#include "behavior_velocity_planner/srv/detail/load_plugin__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `plugin_name`
#include "rosidl_runtime_c/string_functions.h"

bool
behavior_velocity_planner__srv__LoadPlugin_Request__init(behavior_velocity_planner__srv__LoadPlugin_Request * msg)
{
  if (!msg) {
    return false;
  }
  // plugin_name
  if (!rosidl_runtime_c__String__init(&msg->plugin_name)) {
    behavior_velocity_planner__srv__LoadPlugin_Request__fini(msg);
    return false;
  }
  return true;
}

void
behavior_velocity_planner__srv__LoadPlugin_Request__fini(behavior_velocity_planner__srv__LoadPlugin_Request * msg)
{
  if (!msg) {
    return;
  }
  // plugin_name
  rosidl_runtime_c__String__fini(&msg->plugin_name);
}

bool
behavior_velocity_planner__srv__LoadPlugin_Request__are_equal(const behavior_velocity_planner__srv__LoadPlugin_Request * lhs, const behavior_velocity_planner__srv__LoadPlugin_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // plugin_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->plugin_name), &(rhs->plugin_name)))
  {
    return false;
  }
  return true;
}

bool
behavior_velocity_planner__srv__LoadPlugin_Request__copy(
  const behavior_velocity_planner__srv__LoadPlugin_Request * input,
  behavior_velocity_planner__srv__LoadPlugin_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // plugin_name
  if (!rosidl_runtime_c__String__copy(
      &(input->plugin_name), &(output->plugin_name)))
  {
    return false;
  }
  return true;
}

behavior_velocity_planner__srv__LoadPlugin_Request *
behavior_velocity_planner__srv__LoadPlugin_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_velocity_planner__srv__LoadPlugin_Request * msg = (behavior_velocity_planner__srv__LoadPlugin_Request *)allocator.allocate(sizeof(behavior_velocity_planner__srv__LoadPlugin_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_velocity_planner__srv__LoadPlugin_Request));
  bool success = behavior_velocity_planner__srv__LoadPlugin_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_velocity_planner__srv__LoadPlugin_Request__destroy(behavior_velocity_planner__srv__LoadPlugin_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_velocity_planner__srv__LoadPlugin_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_velocity_planner__srv__LoadPlugin_Request__Sequence__init(behavior_velocity_planner__srv__LoadPlugin_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_velocity_planner__srv__LoadPlugin_Request * data = NULL;

  if (size) {
    data = (behavior_velocity_planner__srv__LoadPlugin_Request *)allocator.zero_allocate(size, sizeof(behavior_velocity_planner__srv__LoadPlugin_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_velocity_planner__srv__LoadPlugin_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_velocity_planner__srv__LoadPlugin_Request__fini(&data[i - 1]);
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
behavior_velocity_planner__srv__LoadPlugin_Request__Sequence__fini(behavior_velocity_planner__srv__LoadPlugin_Request__Sequence * array)
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
      behavior_velocity_planner__srv__LoadPlugin_Request__fini(&array->data[i]);
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

behavior_velocity_planner__srv__LoadPlugin_Request__Sequence *
behavior_velocity_planner__srv__LoadPlugin_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_velocity_planner__srv__LoadPlugin_Request__Sequence * array = (behavior_velocity_planner__srv__LoadPlugin_Request__Sequence *)allocator.allocate(sizeof(behavior_velocity_planner__srv__LoadPlugin_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_velocity_planner__srv__LoadPlugin_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_velocity_planner__srv__LoadPlugin_Request__Sequence__destroy(behavior_velocity_planner__srv__LoadPlugin_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_velocity_planner__srv__LoadPlugin_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_velocity_planner__srv__LoadPlugin_Request__Sequence__are_equal(const behavior_velocity_planner__srv__LoadPlugin_Request__Sequence * lhs, const behavior_velocity_planner__srv__LoadPlugin_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_velocity_planner__srv__LoadPlugin_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_velocity_planner__srv__LoadPlugin_Request__Sequence__copy(
  const behavior_velocity_planner__srv__LoadPlugin_Request__Sequence * input,
  behavior_velocity_planner__srv__LoadPlugin_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_velocity_planner__srv__LoadPlugin_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_velocity_planner__srv__LoadPlugin_Request * data =
      (behavior_velocity_planner__srv__LoadPlugin_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_velocity_planner__srv__LoadPlugin_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_velocity_planner__srv__LoadPlugin_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_velocity_planner__srv__LoadPlugin_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
behavior_velocity_planner__srv__LoadPlugin_Response__init(behavior_velocity_planner__srv__LoadPlugin_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
behavior_velocity_planner__srv__LoadPlugin_Response__fini(behavior_velocity_planner__srv__LoadPlugin_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
behavior_velocity_planner__srv__LoadPlugin_Response__are_equal(const behavior_velocity_planner__srv__LoadPlugin_Response * lhs, const behavior_velocity_planner__srv__LoadPlugin_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
behavior_velocity_planner__srv__LoadPlugin_Response__copy(
  const behavior_velocity_planner__srv__LoadPlugin_Response * input,
  behavior_velocity_planner__srv__LoadPlugin_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

behavior_velocity_planner__srv__LoadPlugin_Response *
behavior_velocity_planner__srv__LoadPlugin_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_velocity_planner__srv__LoadPlugin_Response * msg = (behavior_velocity_planner__srv__LoadPlugin_Response *)allocator.allocate(sizeof(behavior_velocity_planner__srv__LoadPlugin_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_velocity_planner__srv__LoadPlugin_Response));
  bool success = behavior_velocity_planner__srv__LoadPlugin_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_velocity_planner__srv__LoadPlugin_Response__destroy(behavior_velocity_planner__srv__LoadPlugin_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_velocity_planner__srv__LoadPlugin_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_velocity_planner__srv__LoadPlugin_Response__Sequence__init(behavior_velocity_planner__srv__LoadPlugin_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_velocity_planner__srv__LoadPlugin_Response * data = NULL;

  if (size) {
    data = (behavior_velocity_planner__srv__LoadPlugin_Response *)allocator.zero_allocate(size, sizeof(behavior_velocity_planner__srv__LoadPlugin_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_velocity_planner__srv__LoadPlugin_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_velocity_planner__srv__LoadPlugin_Response__fini(&data[i - 1]);
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
behavior_velocity_planner__srv__LoadPlugin_Response__Sequence__fini(behavior_velocity_planner__srv__LoadPlugin_Response__Sequence * array)
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
      behavior_velocity_planner__srv__LoadPlugin_Response__fini(&array->data[i]);
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

behavior_velocity_planner__srv__LoadPlugin_Response__Sequence *
behavior_velocity_planner__srv__LoadPlugin_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_velocity_planner__srv__LoadPlugin_Response__Sequence * array = (behavior_velocity_planner__srv__LoadPlugin_Response__Sequence *)allocator.allocate(sizeof(behavior_velocity_planner__srv__LoadPlugin_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_velocity_planner__srv__LoadPlugin_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_velocity_planner__srv__LoadPlugin_Response__Sequence__destroy(behavior_velocity_planner__srv__LoadPlugin_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_velocity_planner__srv__LoadPlugin_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_velocity_planner__srv__LoadPlugin_Response__Sequence__are_equal(const behavior_velocity_planner__srv__LoadPlugin_Response__Sequence * lhs, const behavior_velocity_planner__srv__LoadPlugin_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_velocity_planner__srv__LoadPlugin_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_velocity_planner__srv__LoadPlugin_Response__Sequence__copy(
  const behavior_velocity_planner__srv__LoadPlugin_Response__Sequence * input,
  behavior_velocity_planner__srv__LoadPlugin_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_velocity_planner__srv__LoadPlugin_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_velocity_planner__srv__LoadPlugin_Response * data =
      (behavior_velocity_planner__srv__LoadPlugin_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_velocity_planner__srv__LoadPlugin_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_velocity_planner__srv__LoadPlugin_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_velocity_planner__srv__LoadPlugin_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
