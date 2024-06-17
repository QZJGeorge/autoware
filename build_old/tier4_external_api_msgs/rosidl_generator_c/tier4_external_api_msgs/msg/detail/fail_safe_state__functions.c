// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_external_api_msgs:msg/FailSafeState.idl
// generated code does not contain a copyright notice
#include "tier4_external_api_msgs/msg/detail/fail_safe_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tier4_external_api_msgs__msg__FailSafeState__init(tier4_external_api_msgs__msg__FailSafeState * msg)
{
  if (!msg) {
    return false;
  }
  // state
  return true;
}

void
tier4_external_api_msgs__msg__FailSafeState__fini(tier4_external_api_msgs__msg__FailSafeState * msg)
{
  if (!msg) {
    return;
  }
  // state
}

bool
tier4_external_api_msgs__msg__FailSafeState__are_equal(const tier4_external_api_msgs__msg__FailSafeState * lhs, const tier4_external_api_msgs__msg__FailSafeState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
tier4_external_api_msgs__msg__FailSafeState__copy(
  const tier4_external_api_msgs__msg__FailSafeState * input,
  tier4_external_api_msgs__msg__FailSafeState * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  output->state = input->state;
  return true;
}

tier4_external_api_msgs__msg__FailSafeState *
tier4_external_api_msgs__msg__FailSafeState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_external_api_msgs__msg__FailSafeState * msg = (tier4_external_api_msgs__msg__FailSafeState *)allocator.allocate(sizeof(tier4_external_api_msgs__msg__FailSafeState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_external_api_msgs__msg__FailSafeState));
  bool success = tier4_external_api_msgs__msg__FailSafeState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_external_api_msgs__msg__FailSafeState__destroy(tier4_external_api_msgs__msg__FailSafeState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_external_api_msgs__msg__FailSafeState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_external_api_msgs__msg__FailSafeState__Sequence__init(tier4_external_api_msgs__msg__FailSafeState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_external_api_msgs__msg__FailSafeState * data = NULL;

  if (size) {
    data = (tier4_external_api_msgs__msg__FailSafeState *)allocator.zero_allocate(size, sizeof(tier4_external_api_msgs__msg__FailSafeState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_external_api_msgs__msg__FailSafeState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_external_api_msgs__msg__FailSafeState__fini(&data[i - 1]);
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
tier4_external_api_msgs__msg__FailSafeState__Sequence__fini(tier4_external_api_msgs__msg__FailSafeState__Sequence * array)
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
      tier4_external_api_msgs__msg__FailSafeState__fini(&array->data[i]);
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

tier4_external_api_msgs__msg__FailSafeState__Sequence *
tier4_external_api_msgs__msg__FailSafeState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_external_api_msgs__msg__FailSafeState__Sequence * array = (tier4_external_api_msgs__msg__FailSafeState__Sequence *)allocator.allocate(sizeof(tier4_external_api_msgs__msg__FailSafeState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_external_api_msgs__msg__FailSafeState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_external_api_msgs__msg__FailSafeState__Sequence__destroy(tier4_external_api_msgs__msg__FailSafeState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_external_api_msgs__msg__FailSafeState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_external_api_msgs__msg__FailSafeState__Sequence__are_equal(const tier4_external_api_msgs__msg__FailSafeState__Sequence * lhs, const tier4_external_api_msgs__msg__FailSafeState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_external_api_msgs__msg__FailSafeState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_external_api_msgs__msg__FailSafeState__Sequence__copy(
  const tier4_external_api_msgs__msg__FailSafeState__Sequence * input,
  tier4_external_api_msgs__msg__FailSafeState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_external_api_msgs__msg__FailSafeState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tier4_external_api_msgs__msg__FailSafeState * data =
      (tier4_external_api_msgs__msg__FailSafeState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_external_api_msgs__msg__FailSafeState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tier4_external_api_msgs__msg__FailSafeState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_external_api_msgs__msg__FailSafeState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
