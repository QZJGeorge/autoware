// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_adapi_v1_msgs:msg/CooperationStatus.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `uuid`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `autonomous`
// Member `cooperator`
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_decision__functions.h"

bool
autoware_adapi_v1_msgs__msg__CooperationStatus__init(autoware_adapi_v1_msgs__msg__CooperationStatus * msg)
{
  if (!msg) {
    return false;
  }
  // uuid
  if (!unique_identifier_msgs__msg__UUID__init(&msg->uuid)) {
    autoware_adapi_v1_msgs__msg__CooperationStatus__fini(msg);
    return false;
  }
  // autonomous
  if (!autoware_adapi_v1_msgs__msg__CooperationDecision__init(&msg->autonomous)) {
    autoware_adapi_v1_msgs__msg__CooperationStatus__fini(msg);
    return false;
  }
  // cooperator
  if (!autoware_adapi_v1_msgs__msg__CooperationDecision__init(&msg->cooperator)) {
    autoware_adapi_v1_msgs__msg__CooperationStatus__fini(msg);
    return false;
  }
  // cancellable
  return true;
}

void
autoware_adapi_v1_msgs__msg__CooperationStatus__fini(autoware_adapi_v1_msgs__msg__CooperationStatus * msg)
{
  if (!msg) {
    return;
  }
  // uuid
  unique_identifier_msgs__msg__UUID__fini(&msg->uuid);
  // autonomous
  autoware_adapi_v1_msgs__msg__CooperationDecision__fini(&msg->autonomous);
  // cooperator
  autoware_adapi_v1_msgs__msg__CooperationDecision__fini(&msg->cooperator);
  // cancellable
}

bool
autoware_adapi_v1_msgs__msg__CooperationStatus__are_equal(const autoware_adapi_v1_msgs__msg__CooperationStatus * lhs, const autoware_adapi_v1_msgs__msg__CooperationStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // uuid
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->uuid), &(rhs->uuid)))
  {
    return false;
  }
  // autonomous
  if (!autoware_adapi_v1_msgs__msg__CooperationDecision__are_equal(
      &(lhs->autonomous), &(rhs->autonomous)))
  {
    return false;
  }
  // cooperator
  if (!autoware_adapi_v1_msgs__msg__CooperationDecision__are_equal(
      &(lhs->cooperator), &(rhs->cooperator)))
  {
    return false;
  }
  // cancellable
  if (lhs->cancellable != rhs->cancellable) {
    return false;
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__CooperationStatus__copy(
  const autoware_adapi_v1_msgs__msg__CooperationStatus * input,
  autoware_adapi_v1_msgs__msg__CooperationStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // uuid
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->uuid), &(output->uuid)))
  {
    return false;
  }
  // autonomous
  if (!autoware_adapi_v1_msgs__msg__CooperationDecision__copy(
      &(input->autonomous), &(output->autonomous)))
  {
    return false;
  }
  // cooperator
  if (!autoware_adapi_v1_msgs__msg__CooperationDecision__copy(
      &(input->cooperator), &(output->cooperator)))
  {
    return false;
  }
  // cancellable
  output->cancellable = input->cancellable;
  return true;
}

autoware_adapi_v1_msgs__msg__CooperationStatus *
autoware_adapi_v1_msgs__msg__CooperationStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__CooperationStatus * msg = (autoware_adapi_v1_msgs__msg__CooperationStatus *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__msg__CooperationStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_adapi_v1_msgs__msg__CooperationStatus));
  bool success = autoware_adapi_v1_msgs__msg__CooperationStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_adapi_v1_msgs__msg__CooperationStatus__destroy(autoware_adapi_v1_msgs__msg__CooperationStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_adapi_v1_msgs__msg__CooperationStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence__init(autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__CooperationStatus * data = NULL;

  if (size) {
    data = (autoware_adapi_v1_msgs__msg__CooperationStatus *)allocator.zero_allocate(size, sizeof(autoware_adapi_v1_msgs__msg__CooperationStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_adapi_v1_msgs__msg__CooperationStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_adapi_v1_msgs__msg__CooperationStatus__fini(&data[i - 1]);
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
autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence__fini(autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence * array)
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
      autoware_adapi_v1_msgs__msg__CooperationStatus__fini(&array->data[i]);
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

autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence *
autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence * array = (autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence__destroy(autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence__are_equal(const autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence * lhs, const autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__CooperationStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence__copy(
  const autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence * input,
  autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_adapi_v1_msgs__msg__CooperationStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_adapi_v1_msgs__msg__CooperationStatus * data =
      (autoware_adapi_v1_msgs__msg__CooperationStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_adapi_v1_msgs__msg__CooperationStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_adapi_v1_msgs__msg__CooperationStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__CooperationStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
