// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_v2x_msgs:msg/InfrastructureCommand.idl
// generated code does not contain a copyright notice
#include "tier4_v2x_msgs/msg/detail/infrastructure_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `type`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `custom_tags`
#include "tier4_v2x_msgs/msg/detail/key_value__functions.h"

bool
tier4_v2x_msgs__msg__InfrastructureCommand__init(tier4_v2x_msgs__msg__InfrastructureCommand * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tier4_v2x_msgs__msg__InfrastructureCommand__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    tier4_v2x_msgs__msg__InfrastructureCommand__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    tier4_v2x_msgs__msg__InfrastructureCommand__fini(msg);
    return false;
  }
  // custom_tags
  if (!tier4_v2x_msgs__msg__KeyValue__Sequence__init(&msg->custom_tags, 0)) {
    tier4_v2x_msgs__msg__InfrastructureCommand__fini(msg);
    return false;
  }
  // state
  return true;
}

void
tier4_v2x_msgs__msg__InfrastructureCommand__fini(tier4_v2x_msgs__msg__InfrastructureCommand * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // custom_tags
  tier4_v2x_msgs__msg__KeyValue__Sequence__fini(&msg->custom_tags);
  // state
}

bool
tier4_v2x_msgs__msg__InfrastructureCommand__are_equal(const tier4_v2x_msgs__msg__InfrastructureCommand * lhs, const tier4_v2x_msgs__msg__InfrastructureCommand * rhs)
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
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // custom_tags
  if (!tier4_v2x_msgs__msg__KeyValue__Sequence__are_equal(
      &(lhs->custom_tags), &(rhs->custom_tags)))
  {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
tier4_v2x_msgs__msg__InfrastructureCommand__copy(
  const tier4_v2x_msgs__msg__InfrastructureCommand * input,
  tier4_v2x_msgs__msg__InfrastructureCommand * output)
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
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // custom_tags
  if (!tier4_v2x_msgs__msg__KeyValue__Sequence__copy(
      &(input->custom_tags), &(output->custom_tags)))
  {
    return false;
  }
  // state
  output->state = input->state;
  return true;
}

tier4_v2x_msgs__msg__InfrastructureCommand *
tier4_v2x_msgs__msg__InfrastructureCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_v2x_msgs__msg__InfrastructureCommand * msg = (tier4_v2x_msgs__msg__InfrastructureCommand *)allocator.allocate(sizeof(tier4_v2x_msgs__msg__InfrastructureCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_v2x_msgs__msg__InfrastructureCommand));
  bool success = tier4_v2x_msgs__msg__InfrastructureCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_v2x_msgs__msg__InfrastructureCommand__destroy(tier4_v2x_msgs__msg__InfrastructureCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_v2x_msgs__msg__InfrastructureCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_v2x_msgs__msg__InfrastructureCommand__Sequence__init(tier4_v2x_msgs__msg__InfrastructureCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_v2x_msgs__msg__InfrastructureCommand * data = NULL;

  if (size) {
    data = (tier4_v2x_msgs__msg__InfrastructureCommand *)allocator.zero_allocate(size, sizeof(tier4_v2x_msgs__msg__InfrastructureCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_v2x_msgs__msg__InfrastructureCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_v2x_msgs__msg__InfrastructureCommand__fini(&data[i - 1]);
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
tier4_v2x_msgs__msg__InfrastructureCommand__Sequence__fini(tier4_v2x_msgs__msg__InfrastructureCommand__Sequence * array)
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
      tier4_v2x_msgs__msg__InfrastructureCommand__fini(&array->data[i]);
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

tier4_v2x_msgs__msg__InfrastructureCommand__Sequence *
tier4_v2x_msgs__msg__InfrastructureCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_v2x_msgs__msg__InfrastructureCommand__Sequence * array = (tier4_v2x_msgs__msg__InfrastructureCommand__Sequence *)allocator.allocate(sizeof(tier4_v2x_msgs__msg__InfrastructureCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_v2x_msgs__msg__InfrastructureCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_v2x_msgs__msg__InfrastructureCommand__Sequence__destroy(tier4_v2x_msgs__msg__InfrastructureCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_v2x_msgs__msg__InfrastructureCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_v2x_msgs__msg__InfrastructureCommand__Sequence__are_equal(const tier4_v2x_msgs__msg__InfrastructureCommand__Sequence * lhs, const tier4_v2x_msgs__msg__InfrastructureCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_v2x_msgs__msg__InfrastructureCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_v2x_msgs__msg__InfrastructureCommand__Sequence__copy(
  const tier4_v2x_msgs__msg__InfrastructureCommand__Sequence * input,
  tier4_v2x_msgs__msg__InfrastructureCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_v2x_msgs__msg__InfrastructureCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tier4_v2x_msgs__msg__InfrastructureCommand * data =
      (tier4_v2x_msgs__msg__InfrastructureCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_v2x_msgs__msg__InfrastructureCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tier4_v2x_msgs__msg__InfrastructureCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_v2x_msgs__msg__InfrastructureCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
