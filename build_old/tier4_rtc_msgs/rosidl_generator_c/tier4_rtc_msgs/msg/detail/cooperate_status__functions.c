// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_rtc_msgs:msg/CooperateStatus.idl
// generated code does not contain a copyright notice
#include "tier4_rtc_msgs/msg/detail/cooperate_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `uuid`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `module`
#include "tier4_rtc_msgs/msg/detail/module__functions.h"
// Member `command_status`
#include "tier4_rtc_msgs/msg/detail/command__functions.h"

bool
tier4_rtc_msgs__msg__CooperateStatus__init(tier4_rtc_msgs__msg__CooperateStatus * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tier4_rtc_msgs__msg__CooperateStatus__fini(msg);
    return false;
  }
  // uuid
  if (!unique_identifier_msgs__msg__UUID__init(&msg->uuid)) {
    tier4_rtc_msgs__msg__CooperateStatus__fini(msg);
    return false;
  }
  // module
  if (!tier4_rtc_msgs__msg__Module__init(&msg->module)) {
    tier4_rtc_msgs__msg__CooperateStatus__fini(msg);
    return false;
  }
  // safe
  // command_status
  if (!tier4_rtc_msgs__msg__Command__init(&msg->command_status)) {
    tier4_rtc_msgs__msg__CooperateStatus__fini(msg);
    return false;
  }
  // auto_mode
  // start_distance
  // finish_distance
  return true;
}

void
tier4_rtc_msgs__msg__CooperateStatus__fini(tier4_rtc_msgs__msg__CooperateStatus * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // uuid
  unique_identifier_msgs__msg__UUID__fini(&msg->uuid);
  // module
  tier4_rtc_msgs__msg__Module__fini(&msg->module);
  // safe
  // command_status
  tier4_rtc_msgs__msg__Command__fini(&msg->command_status);
  // auto_mode
  // start_distance
  // finish_distance
}

bool
tier4_rtc_msgs__msg__CooperateStatus__are_equal(const tier4_rtc_msgs__msg__CooperateStatus * lhs, const tier4_rtc_msgs__msg__CooperateStatus * rhs)
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
  // uuid
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->uuid), &(rhs->uuid)))
  {
    return false;
  }
  // module
  if (!tier4_rtc_msgs__msg__Module__are_equal(
      &(lhs->module), &(rhs->module)))
  {
    return false;
  }
  // safe
  if (lhs->safe != rhs->safe) {
    return false;
  }
  // command_status
  if (!tier4_rtc_msgs__msg__Command__are_equal(
      &(lhs->command_status), &(rhs->command_status)))
  {
    return false;
  }
  // auto_mode
  if (lhs->auto_mode != rhs->auto_mode) {
    return false;
  }
  // start_distance
  if (lhs->start_distance != rhs->start_distance) {
    return false;
  }
  // finish_distance
  if (lhs->finish_distance != rhs->finish_distance) {
    return false;
  }
  return true;
}

bool
tier4_rtc_msgs__msg__CooperateStatus__copy(
  const tier4_rtc_msgs__msg__CooperateStatus * input,
  tier4_rtc_msgs__msg__CooperateStatus * output)
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
  // uuid
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->uuid), &(output->uuid)))
  {
    return false;
  }
  // module
  if (!tier4_rtc_msgs__msg__Module__copy(
      &(input->module), &(output->module)))
  {
    return false;
  }
  // safe
  output->safe = input->safe;
  // command_status
  if (!tier4_rtc_msgs__msg__Command__copy(
      &(input->command_status), &(output->command_status)))
  {
    return false;
  }
  // auto_mode
  output->auto_mode = input->auto_mode;
  // start_distance
  output->start_distance = input->start_distance;
  // finish_distance
  output->finish_distance = input->finish_distance;
  return true;
}

tier4_rtc_msgs__msg__CooperateStatus *
tier4_rtc_msgs__msg__CooperateStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_rtc_msgs__msg__CooperateStatus * msg = (tier4_rtc_msgs__msg__CooperateStatus *)allocator.allocate(sizeof(tier4_rtc_msgs__msg__CooperateStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_rtc_msgs__msg__CooperateStatus));
  bool success = tier4_rtc_msgs__msg__CooperateStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_rtc_msgs__msg__CooperateStatus__destroy(tier4_rtc_msgs__msg__CooperateStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_rtc_msgs__msg__CooperateStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_rtc_msgs__msg__CooperateStatus__Sequence__init(tier4_rtc_msgs__msg__CooperateStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_rtc_msgs__msg__CooperateStatus * data = NULL;

  if (size) {
    data = (tier4_rtc_msgs__msg__CooperateStatus *)allocator.zero_allocate(size, sizeof(tier4_rtc_msgs__msg__CooperateStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_rtc_msgs__msg__CooperateStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_rtc_msgs__msg__CooperateStatus__fini(&data[i - 1]);
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
tier4_rtc_msgs__msg__CooperateStatus__Sequence__fini(tier4_rtc_msgs__msg__CooperateStatus__Sequence * array)
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
      tier4_rtc_msgs__msg__CooperateStatus__fini(&array->data[i]);
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

tier4_rtc_msgs__msg__CooperateStatus__Sequence *
tier4_rtc_msgs__msg__CooperateStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_rtc_msgs__msg__CooperateStatus__Sequence * array = (tier4_rtc_msgs__msg__CooperateStatus__Sequence *)allocator.allocate(sizeof(tier4_rtc_msgs__msg__CooperateStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_rtc_msgs__msg__CooperateStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_rtc_msgs__msg__CooperateStatus__Sequence__destroy(tier4_rtc_msgs__msg__CooperateStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_rtc_msgs__msg__CooperateStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_rtc_msgs__msg__CooperateStatus__Sequence__are_equal(const tier4_rtc_msgs__msg__CooperateStatus__Sequence * lhs, const tier4_rtc_msgs__msg__CooperateStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_rtc_msgs__msg__CooperateStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_rtc_msgs__msg__CooperateStatus__Sequence__copy(
  const tier4_rtc_msgs__msg__CooperateStatus__Sequence * input,
  tier4_rtc_msgs__msg__CooperateStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_rtc_msgs__msg__CooperateStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tier4_rtc_msgs__msg__CooperateStatus * data =
      (tier4_rtc_msgs__msg__CooperateStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_rtc_msgs__msg__CooperateStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tier4_rtc_msgs__msg__CooperateStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_rtc_msgs__msg__CooperateStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
