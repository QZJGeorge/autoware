// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_rtc_msgs:msg/CooperateCommand.idl
// generated code does not contain a copyright notice
#include "tier4_rtc_msgs/msg/detail/cooperate_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `uuid`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `module`
#include "tier4_rtc_msgs/msg/detail/module__functions.h"
// Member `command`
#include "tier4_rtc_msgs/msg/detail/command__functions.h"

bool
tier4_rtc_msgs__msg__CooperateCommand__init(tier4_rtc_msgs__msg__CooperateCommand * msg)
{
  if (!msg) {
    return false;
  }
  // uuid
  if (!unique_identifier_msgs__msg__UUID__init(&msg->uuid)) {
    tier4_rtc_msgs__msg__CooperateCommand__fini(msg);
    return false;
  }
  // module
  if (!tier4_rtc_msgs__msg__Module__init(&msg->module)) {
    tier4_rtc_msgs__msg__CooperateCommand__fini(msg);
    return false;
  }
  // command
  if (!tier4_rtc_msgs__msg__Command__init(&msg->command)) {
    tier4_rtc_msgs__msg__CooperateCommand__fini(msg);
    return false;
  }
  return true;
}

void
tier4_rtc_msgs__msg__CooperateCommand__fini(tier4_rtc_msgs__msg__CooperateCommand * msg)
{
  if (!msg) {
    return;
  }
  // uuid
  unique_identifier_msgs__msg__UUID__fini(&msg->uuid);
  // module
  tier4_rtc_msgs__msg__Module__fini(&msg->module);
  // command
  tier4_rtc_msgs__msg__Command__fini(&msg->command);
}

bool
tier4_rtc_msgs__msg__CooperateCommand__are_equal(const tier4_rtc_msgs__msg__CooperateCommand * lhs, const tier4_rtc_msgs__msg__CooperateCommand * rhs)
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
  // module
  if (!tier4_rtc_msgs__msg__Module__are_equal(
      &(lhs->module), &(rhs->module)))
  {
    return false;
  }
  // command
  if (!tier4_rtc_msgs__msg__Command__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  return true;
}

bool
tier4_rtc_msgs__msg__CooperateCommand__copy(
  const tier4_rtc_msgs__msg__CooperateCommand * input,
  tier4_rtc_msgs__msg__CooperateCommand * output)
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
  // module
  if (!tier4_rtc_msgs__msg__Module__copy(
      &(input->module), &(output->module)))
  {
    return false;
  }
  // command
  if (!tier4_rtc_msgs__msg__Command__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  return true;
}

tier4_rtc_msgs__msg__CooperateCommand *
tier4_rtc_msgs__msg__CooperateCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_rtc_msgs__msg__CooperateCommand * msg = (tier4_rtc_msgs__msg__CooperateCommand *)allocator.allocate(sizeof(tier4_rtc_msgs__msg__CooperateCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_rtc_msgs__msg__CooperateCommand));
  bool success = tier4_rtc_msgs__msg__CooperateCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_rtc_msgs__msg__CooperateCommand__destroy(tier4_rtc_msgs__msg__CooperateCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_rtc_msgs__msg__CooperateCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_rtc_msgs__msg__CooperateCommand__Sequence__init(tier4_rtc_msgs__msg__CooperateCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_rtc_msgs__msg__CooperateCommand * data = NULL;

  if (size) {
    data = (tier4_rtc_msgs__msg__CooperateCommand *)allocator.zero_allocate(size, sizeof(tier4_rtc_msgs__msg__CooperateCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_rtc_msgs__msg__CooperateCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_rtc_msgs__msg__CooperateCommand__fini(&data[i - 1]);
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
tier4_rtc_msgs__msg__CooperateCommand__Sequence__fini(tier4_rtc_msgs__msg__CooperateCommand__Sequence * array)
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
      tier4_rtc_msgs__msg__CooperateCommand__fini(&array->data[i]);
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

tier4_rtc_msgs__msg__CooperateCommand__Sequence *
tier4_rtc_msgs__msg__CooperateCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_rtc_msgs__msg__CooperateCommand__Sequence * array = (tier4_rtc_msgs__msg__CooperateCommand__Sequence *)allocator.allocate(sizeof(tier4_rtc_msgs__msg__CooperateCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_rtc_msgs__msg__CooperateCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_rtc_msgs__msg__CooperateCommand__Sequence__destroy(tier4_rtc_msgs__msg__CooperateCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_rtc_msgs__msg__CooperateCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_rtc_msgs__msg__CooperateCommand__Sequence__are_equal(const tier4_rtc_msgs__msg__CooperateCommand__Sequence * lhs, const tier4_rtc_msgs__msg__CooperateCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_rtc_msgs__msg__CooperateCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_rtc_msgs__msg__CooperateCommand__Sequence__copy(
  const tier4_rtc_msgs__msg__CooperateCommand__Sequence * input,
  tier4_rtc_msgs__msg__CooperateCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_rtc_msgs__msg__CooperateCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tier4_rtc_msgs__msg__CooperateCommand * data =
      (tier4_rtc_msgs__msg__CooperateCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_rtc_msgs__msg__CooperateCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tier4_rtc_msgs__msg__CooperateCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_rtc_msgs__msg__CooperateCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
