// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_adapi_v1_msgs:msg/CooperationDecision.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_decision__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
autoware_adapi_v1_msgs__msg__CooperationDecision__init(autoware_adapi_v1_msgs__msg__CooperationDecision * msg)
{
  if (!msg) {
    return false;
  }
  // decision
  return true;
}

void
autoware_adapi_v1_msgs__msg__CooperationDecision__fini(autoware_adapi_v1_msgs__msg__CooperationDecision * msg)
{
  if (!msg) {
    return;
  }
  // decision
}

bool
autoware_adapi_v1_msgs__msg__CooperationDecision__are_equal(const autoware_adapi_v1_msgs__msg__CooperationDecision * lhs, const autoware_adapi_v1_msgs__msg__CooperationDecision * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // decision
  if (lhs->decision != rhs->decision) {
    return false;
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__CooperationDecision__copy(
  const autoware_adapi_v1_msgs__msg__CooperationDecision * input,
  autoware_adapi_v1_msgs__msg__CooperationDecision * output)
{
  if (!input || !output) {
    return false;
  }
  // decision
  output->decision = input->decision;
  return true;
}

autoware_adapi_v1_msgs__msg__CooperationDecision *
autoware_adapi_v1_msgs__msg__CooperationDecision__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__CooperationDecision * msg = (autoware_adapi_v1_msgs__msg__CooperationDecision *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__msg__CooperationDecision), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_adapi_v1_msgs__msg__CooperationDecision));
  bool success = autoware_adapi_v1_msgs__msg__CooperationDecision__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_adapi_v1_msgs__msg__CooperationDecision__destroy(autoware_adapi_v1_msgs__msg__CooperationDecision * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_adapi_v1_msgs__msg__CooperationDecision__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_adapi_v1_msgs__msg__CooperationDecision__Sequence__init(autoware_adapi_v1_msgs__msg__CooperationDecision__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__CooperationDecision * data = NULL;

  if (size) {
    data = (autoware_adapi_v1_msgs__msg__CooperationDecision *)allocator.zero_allocate(size, sizeof(autoware_adapi_v1_msgs__msg__CooperationDecision), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_adapi_v1_msgs__msg__CooperationDecision__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_adapi_v1_msgs__msg__CooperationDecision__fini(&data[i - 1]);
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
autoware_adapi_v1_msgs__msg__CooperationDecision__Sequence__fini(autoware_adapi_v1_msgs__msg__CooperationDecision__Sequence * array)
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
      autoware_adapi_v1_msgs__msg__CooperationDecision__fini(&array->data[i]);
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

autoware_adapi_v1_msgs__msg__CooperationDecision__Sequence *
autoware_adapi_v1_msgs__msg__CooperationDecision__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__CooperationDecision__Sequence * array = (autoware_adapi_v1_msgs__msg__CooperationDecision__Sequence *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__msg__CooperationDecision__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_adapi_v1_msgs__msg__CooperationDecision__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_adapi_v1_msgs__msg__CooperationDecision__Sequence__destroy(autoware_adapi_v1_msgs__msg__CooperationDecision__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_adapi_v1_msgs__msg__CooperationDecision__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_adapi_v1_msgs__msg__CooperationDecision__Sequence__are_equal(const autoware_adapi_v1_msgs__msg__CooperationDecision__Sequence * lhs, const autoware_adapi_v1_msgs__msg__CooperationDecision__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__CooperationDecision__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__CooperationDecision__Sequence__copy(
  const autoware_adapi_v1_msgs__msg__CooperationDecision__Sequence * input,
  autoware_adapi_v1_msgs__msg__CooperationDecision__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_adapi_v1_msgs__msg__CooperationDecision);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_adapi_v1_msgs__msg__CooperationDecision * data =
      (autoware_adapi_v1_msgs__msg__CooperationDecision *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_adapi_v1_msgs__msg__CooperationDecision__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_adapi_v1_msgs__msg__CooperationDecision__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__CooperationDecision__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
