// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_adapi_v1_msgs:msg/CooperationPolicy.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_policy__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `behavior`
// Member `sequence`
#include "rosidl_runtime_c/string_functions.h"

bool
autoware_adapi_v1_msgs__msg__CooperationPolicy__init(autoware_adapi_v1_msgs__msg__CooperationPolicy * msg)
{
  if (!msg) {
    return false;
  }
  // behavior
  if (!rosidl_runtime_c__String__init(&msg->behavior)) {
    autoware_adapi_v1_msgs__msg__CooperationPolicy__fini(msg);
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__String__init(&msg->sequence)) {
    autoware_adapi_v1_msgs__msg__CooperationPolicy__fini(msg);
    return false;
  }
  // policy
  return true;
}

void
autoware_adapi_v1_msgs__msg__CooperationPolicy__fini(autoware_adapi_v1_msgs__msg__CooperationPolicy * msg)
{
  if (!msg) {
    return;
  }
  // behavior
  rosidl_runtime_c__String__fini(&msg->behavior);
  // sequence
  rosidl_runtime_c__String__fini(&msg->sequence);
  // policy
}

bool
autoware_adapi_v1_msgs__msg__CooperationPolicy__are_equal(const autoware_adapi_v1_msgs__msg__CooperationPolicy * lhs, const autoware_adapi_v1_msgs__msg__CooperationPolicy * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // behavior
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->behavior), &(rhs->behavior)))
  {
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sequence), &(rhs->sequence)))
  {
    return false;
  }
  // policy
  if (lhs->policy != rhs->policy) {
    return false;
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__CooperationPolicy__copy(
  const autoware_adapi_v1_msgs__msg__CooperationPolicy * input,
  autoware_adapi_v1_msgs__msg__CooperationPolicy * output)
{
  if (!input || !output) {
    return false;
  }
  // behavior
  if (!rosidl_runtime_c__String__copy(
      &(input->behavior), &(output->behavior)))
  {
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__String__copy(
      &(input->sequence), &(output->sequence)))
  {
    return false;
  }
  // policy
  output->policy = input->policy;
  return true;
}

autoware_adapi_v1_msgs__msg__CooperationPolicy *
autoware_adapi_v1_msgs__msg__CooperationPolicy__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__CooperationPolicy * msg = (autoware_adapi_v1_msgs__msg__CooperationPolicy *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__msg__CooperationPolicy), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_adapi_v1_msgs__msg__CooperationPolicy));
  bool success = autoware_adapi_v1_msgs__msg__CooperationPolicy__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_adapi_v1_msgs__msg__CooperationPolicy__destroy(autoware_adapi_v1_msgs__msg__CooperationPolicy * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_adapi_v1_msgs__msg__CooperationPolicy__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence__init(autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__CooperationPolicy * data = NULL;

  if (size) {
    data = (autoware_adapi_v1_msgs__msg__CooperationPolicy *)allocator.zero_allocate(size, sizeof(autoware_adapi_v1_msgs__msg__CooperationPolicy), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_adapi_v1_msgs__msg__CooperationPolicy__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_adapi_v1_msgs__msg__CooperationPolicy__fini(&data[i - 1]);
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
autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence__fini(autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence * array)
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
      autoware_adapi_v1_msgs__msg__CooperationPolicy__fini(&array->data[i]);
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

autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence *
autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence * array = (autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence__destroy(autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence__are_equal(const autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence * lhs, const autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__CooperationPolicy__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence__copy(
  const autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence * input,
  autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_adapi_v1_msgs__msg__CooperationPolicy);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_adapi_v1_msgs__msg__CooperationPolicy * data =
      (autoware_adapi_v1_msgs__msg__CooperationPolicy *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_adapi_v1_msgs__msg__CooperationPolicy__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_adapi_v1_msgs__msg__CooperationPolicy__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__CooperationPolicy__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
