// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_planning_msgs:msg/AvoidanceDebugMsg.idl
// generated code does not contain a copyright notice
#include "tier4_planning_msgs/msg/detail/avoidance_debug_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `object_id`
// Member `failed_reason`
#include "rosidl_runtime_c/string_functions.h"

bool
tier4_planning_msgs__msg__AvoidanceDebugMsg__init(tier4_planning_msgs__msg__AvoidanceDebugMsg * msg)
{
  if (!msg) {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__init(&msg->object_id)) {
    tier4_planning_msgs__msg__AvoidanceDebugMsg__fini(msg);
    return false;
  }
  // allow_avoidance
  // longitudinal_distance
  // lateral_distance_from_centerline
  // to_furthest_linestring_distance
  // max_shift_length
  // required_jerk
  // maximum_jerk
  // failed_reason
  if (!rosidl_runtime_c__String__init(&msg->failed_reason)) {
    tier4_planning_msgs__msg__AvoidanceDebugMsg__fini(msg);
    return false;
  }
  return true;
}

void
tier4_planning_msgs__msg__AvoidanceDebugMsg__fini(tier4_planning_msgs__msg__AvoidanceDebugMsg * msg)
{
  if (!msg) {
    return;
  }
  // object_id
  rosidl_runtime_c__String__fini(&msg->object_id);
  // allow_avoidance
  // longitudinal_distance
  // lateral_distance_from_centerline
  // to_furthest_linestring_distance
  // max_shift_length
  // required_jerk
  // maximum_jerk
  // failed_reason
  rosidl_runtime_c__String__fini(&msg->failed_reason);
}

bool
tier4_planning_msgs__msg__AvoidanceDebugMsg__are_equal(const tier4_planning_msgs__msg__AvoidanceDebugMsg * lhs, const tier4_planning_msgs__msg__AvoidanceDebugMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object_id), &(rhs->object_id)))
  {
    return false;
  }
  // allow_avoidance
  if (lhs->allow_avoidance != rhs->allow_avoidance) {
    return false;
  }
  // longitudinal_distance
  if (lhs->longitudinal_distance != rhs->longitudinal_distance) {
    return false;
  }
  // lateral_distance_from_centerline
  if (lhs->lateral_distance_from_centerline != rhs->lateral_distance_from_centerline) {
    return false;
  }
  // to_furthest_linestring_distance
  if (lhs->to_furthest_linestring_distance != rhs->to_furthest_linestring_distance) {
    return false;
  }
  // max_shift_length
  if (lhs->max_shift_length != rhs->max_shift_length) {
    return false;
  }
  // required_jerk
  if (lhs->required_jerk != rhs->required_jerk) {
    return false;
  }
  // maximum_jerk
  if (lhs->maximum_jerk != rhs->maximum_jerk) {
    return false;
  }
  // failed_reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->failed_reason), &(rhs->failed_reason)))
  {
    return false;
  }
  return true;
}

bool
tier4_planning_msgs__msg__AvoidanceDebugMsg__copy(
  const tier4_planning_msgs__msg__AvoidanceDebugMsg * input,
  tier4_planning_msgs__msg__AvoidanceDebugMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__copy(
      &(input->object_id), &(output->object_id)))
  {
    return false;
  }
  // allow_avoidance
  output->allow_avoidance = input->allow_avoidance;
  // longitudinal_distance
  output->longitudinal_distance = input->longitudinal_distance;
  // lateral_distance_from_centerline
  output->lateral_distance_from_centerline = input->lateral_distance_from_centerline;
  // to_furthest_linestring_distance
  output->to_furthest_linestring_distance = input->to_furthest_linestring_distance;
  // max_shift_length
  output->max_shift_length = input->max_shift_length;
  // required_jerk
  output->required_jerk = input->required_jerk;
  // maximum_jerk
  output->maximum_jerk = input->maximum_jerk;
  // failed_reason
  if (!rosidl_runtime_c__String__copy(
      &(input->failed_reason), &(output->failed_reason)))
  {
    return false;
  }
  return true;
}

tier4_planning_msgs__msg__AvoidanceDebugMsg *
tier4_planning_msgs__msg__AvoidanceDebugMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_planning_msgs__msg__AvoidanceDebugMsg * msg = (tier4_planning_msgs__msg__AvoidanceDebugMsg *)allocator.allocate(sizeof(tier4_planning_msgs__msg__AvoidanceDebugMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_planning_msgs__msg__AvoidanceDebugMsg));
  bool success = tier4_planning_msgs__msg__AvoidanceDebugMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_planning_msgs__msg__AvoidanceDebugMsg__destroy(tier4_planning_msgs__msg__AvoidanceDebugMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_planning_msgs__msg__AvoidanceDebugMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence__init(tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_planning_msgs__msg__AvoidanceDebugMsg * data = NULL;

  if (size) {
    data = (tier4_planning_msgs__msg__AvoidanceDebugMsg *)allocator.zero_allocate(size, sizeof(tier4_planning_msgs__msg__AvoidanceDebugMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_planning_msgs__msg__AvoidanceDebugMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_planning_msgs__msg__AvoidanceDebugMsg__fini(&data[i - 1]);
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
tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence__fini(tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence * array)
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
      tier4_planning_msgs__msg__AvoidanceDebugMsg__fini(&array->data[i]);
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

tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence *
tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence * array = (tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence *)allocator.allocate(sizeof(tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence__destroy(tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence__are_equal(const tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence * lhs, const tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_planning_msgs__msg__AvoidanceDebugMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence__copy(
  const tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence * input,
  tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_planning_msgs__msg__AvoidanceDebugMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tier4_planning_msgs__msg__AvoidanceDebugMsg * data =
      (tier4_planning_msgs__msg__AvoidanceDebugMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_planning_msgs__msg__AvoidanceDebugMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tier4_planning_msgs__msg__AvoidanceDebugMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_planning_msgs__msg__AvoidanceDebugMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
