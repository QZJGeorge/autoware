// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_system_msgs:msg/OperationModeAvailability.idl
// generated code does not contain a copyright notice
#include "tier4_system_msgs/msg/detail/operation_mode_availability__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
tier4_system_msgs__msg__OperationModeAvailability__init(tier4_system_msgs__msg__OperationModeAvailability * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tier4_system_msgs__msg__OperationModeAvailability__fini(msg);
    return false;
  }
  // stop
  // autonomous
  // local
  // remote
  // emergency_stop
  // comfortable_stop
  // pull_over
  return true;
}

void
tier4_system_msgs__msg__OperationModeAvailability__fini(tier4_system_msgs__msg__OperationModeAvailability * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // stop
  // autonomous
  // local
  // remote
  // emergency_stop
  // comfortable_stop
  // pull_over
}

bool
tier4_system_msgs__msg__OperationModeAvailability__are_equal(const tier4_system_msgs__msg__OperationModeAvailability * lhs, const tier4_system_msgs__msg__OperationModeAvailability * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // stop
  if (lhs->stop != rhs->stop) {
    return false;
  }
  // autonomous
  if (lhs->autonomous != rhs->autonomous) {
    return false;
  }
  // local
  if (lhs->local != rhs->local) {
    return false;
  }
  // remote
  if (lhs->remote != rhs->remote) {
    return false;
  }
  // emergency_stop
  if (lhs->emergency_stop != rhs->emergency_stop) {
    return false;
  }
  // comfortable_stop
  if (lhs->comfortable_stop != rhs->comfortable_stop) {
    return false;
  }
  // pull_over
  if (lhs->pull_over != rhs->pull_over) {
    return false;
  }
  return true;
}

bool
tier4_system_msgs__msg__OperationModeAvailability__copy(
  const tier4_system_msgs__msg__OperationModeAvailability * input,
  tier4_system_msgs__msg__OperationModeAvailability * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // stop
  output->stop = input->stop;
  // autonomous
  output->autonomous = input->autonomous;
  // local
  output->local = input->local;
  // remote
  output->remote = input->remote;
  // emergency_stop
  output->emergency_stop = input->emergency_stop;
  // comfortable_stop
  output->comfortable_stop = input->comfortable_stop;
  // pull_over
  output->pull_over = input->pull_over;
  return true;
}

tier4_system_msgs__msg__OperationModeAvailability *
tier4_system_msgs__msg__OperationModeAvailability__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_system_msgs__msg__OperationModeAvailability * msg = (tier4_system_msgs__msg__OperationModeAvailability *)allocator.allocate(sizeof(tier4_system_msgs__msg__OperationModeAvailability), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_system_msgs__msg__OperationModeAvailability));
  bool success = tier4_system_msgs__msg__OperationModeAvailability__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_system_msgs__msg__OperationModeAvailability__destroy(tier4_system_msgs__msg__OperationModeAvailability * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_system_msgs__msg__OperationModeAvailability__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_system_msgs__msg__OperationModeAvailability__Sequence__init(tier4_system_msgs__msg__OperationModeAvailability__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_system_msgs__msg__OperationModeAvailability * data = NULL;

  if (size) {
    data = (tier4_system_msgs__msg__OperationModeAvailability *)allocator.zero_allocate(size, sizeof(tier4_system_msgs__msg__OperationModeAvailability), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_system_msgs__msg__OperationModeAvailability__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_system_msgs__msg__OperationModeAvailability__fini(&data[i - 1]);
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
tier4_system_msgs__msg__OperationModeAvailability__Sequence__fini(tier4_system_msgs__msg__OperationModeAvailability__Sequence * array)
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
      tier4_system_msgs__msg__OperationModeAvailability__fini(&array->data[i]);
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

tier4_system_msgs__msg__OperationModeAvailability__Sequence *
tier4_system_msgs__msg__OperationModeAvailability__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_system_msgs__msg__OperationModeAvailability__Sequence * array = (tier4_system_msgs__msg__OperationModeAvailability__Sequence *)allocator.allocate(sizeof(tier4_system_msgs__msg__OperationModeAvailability__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_system_msgs__msg__OperationModeAvailability__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_system_msgs__msg__OperationModeAvailability__Sequence__destroy(tier4_system_msgs__msg__OperationModeAvailability__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_system_msgs__msg__OperationModeAvailability__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_system_msgs__msg__OperationModeAvailability__Sequence__are_equal(const tier4_system_msgs__msg__OperationModeAvailability__Sequence * lhs, const tier4_system_msgs__msg__OperationModeAvailability__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_system_msgs__msg__OperationModeAvailability__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_system_msgs__msg__OperationModeAvailability__Sequence__copy(
  const tier4_system_msgs__msg__OperationModeAvailability__Sequence * input,
  tier4_system_msgs__msg__OperationModeAvailability__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_system_msgs__msg__OperationModeAvailability);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tier4_system_msgs__msg__OperationModeAvailability * data =
      (tier4_system_msgs__msg__OperationModeAvailability *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_system_msgs__msg__OperationModeAvailability__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tier4_system_msgs__msg__OperationModeAvailability__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_system_msgs__msg__OperationModeAvailability__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
