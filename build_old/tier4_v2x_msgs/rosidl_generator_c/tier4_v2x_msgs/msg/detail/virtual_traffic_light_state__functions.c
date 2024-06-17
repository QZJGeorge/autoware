// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_v2x_msgs:msg/VirtualTrafficLightState.idl
// generated code does not contain a copyright notice
#include "tier4_v2x_msgs/msg/detail/virtual_traffic_light_state__functions.h"

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

bool
tier4_v2x_msgs__msg__VirtualTrafficLightState__init(tier4_v2x_msgs__msg__VirtualTrafficLightState * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tier4_v2x_msgs__msg__VirtualTrafficLightState__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    tier4_v2x_msgs__msg__VirtualTrafficLightState__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    tier4_v2x_msgs__msg__VirtualTrafficLightState__fini(msg);
    return false;
  }
  // approval
  // is_finalized
  return true;
}

void
tier4_v2x_msgs__msg__VirtualTrafficLightState__fini(tier4_v2x_msgs__msg__VirtualTrafficLightState * msg)
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
  // approval
  // is_finalized
}

bool
tier4_v2x_msgs__msg__VirtualTrafficLightState__are_equal(const tier4_v2x_msgs__msg__VirtualTrafficLightState * lhs, const tier4_v2x_msgs__msg__VirtualTrafficLightState * rhs)
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
  // approval
  if (lhs->approval != rhs->approval) {
    return false;
  }
  // is_finalized
  if (lhs->is_finalized != rhs->is_finalized) {
    return false;
  }
  return true;
}

bool
tier4_v2x_msgs__msg__VirtualTrafficLightState__copy(
  const tier4_v2x_msgs__msg__VirtualTrafficLightState * input,
  tier4_v2x_msgs__msg__VirtualTrafficLightState * output)
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
  // approval
  output->approval = input->approval;
  // is_finalized
  output->is_finalized = input->is_finalized;
  return true;
}

tier4_v2x_msgs__msg__VirtualTrafficLightState *
tier4_v2x_msgs__msg__VirtualTrafficLightState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_v2x_msgs__msg__VirtualTrafficLightState * msg = (tier4_v2x_msgs__msg__VirtualTrafficLightState *)allocator.allocate(sizeof(tier4_v2x_msgs__msg__VirtualTrafficLightState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_v2x_msgs__msg__VirtualTrafficLightState));
  bool success = tier4_v2x_msgs__msg__VirtualTrafficLightState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_v2x_msgs__msg__VirtualTrafficLightState__destroy(tier4_v2x_msgs__msg__VirtualTrafficLightState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_v2x_msgs__msg__VirtualTrafficLightState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence__init(tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_v2x_msgs__msg__VirtualTrafficLightState * data = NULL;

  if (size) {
    data = (tier4_v2x_msgs__msg__VirtualTrafficLightState *)allocator.zero_allocate(size, sizeof(tier4_v2x_msgs__msg__VirtualTrafficLightState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_v2x_msgs__msg__VirtualTrafficLightState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_v2x_msgs__msg__VirtualTrafficLightState__fini(&data[i - 1]);
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
tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence__fini(tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence * array)
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
      tier4_v2x_msgs__msg__VirtualTrafficLightState__fini(&array->data[i]);
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

tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence *
tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence * array = (tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence *)allocator.allocate(sizeof(tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence__destroy(tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence__are_equal(const tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence * lhs, const tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_v2x_msgs__msg__VirtualTrafficLightState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence__copy(
  const tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence * input,
  tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_v2x_msgs__msg__VirtualTrafficLightState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tier4_v2x_msgs__msg__VirtualTrafficLightState * data =
      (tier4_v2x_msgs__msg__VirtualTrafficLightState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_v2x_msgs__msg__VirtualTrafficLightState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tier4_v2x_msgs__msg__VirtualTrafficLightState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_v2x_msgs__msg__VirtualTrafficLightState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
