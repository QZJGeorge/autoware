// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_external_api_msgs:msg/Route.idl
// generated code does not contain a copyright notice
#include "tier4_external_api_msgs/msg/detail/route__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `goal_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `route_sections`
#include "tier4_external_api_msgs/msg/detail/route_section__functions.h"

bool
tier4_external_api_msgs__msg__Route__init(tier4_external_api_msgs__msg__Route * msg)
{
  if (!msg) {
    return false;
  }
  // goal_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->goal_pose)) {
    tier4_external_api_msgs__msg__Route__fini(msg);
    return false;
  }
  // route_sections
  if (!tier4_external_api_msgs__msg__RouteSection__Sequence__init(&msg->route_sections, 0)) {
    tier4_external_api_msgs__msg__Route__fini(msg);
    return false;
  }
  return true;
}

void
tier4_external_api_msgs__msg__Route__fini(tier4_external_api_msgs__msg__Route * msg)
{
  if (!msg) {
    return;
  }
  // goal_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->goal_pose);
  // route_sections
  tier4_external_api_msgs__msg__RouteSection__Sequence__fini(&msg->route_sections);
}

bool
tier4_external_api_msgs__msg__Route__are_equal(const tier4_external_api_msgs__msg__Route * lhs, const tier4_external_api_msgs__msg__Route * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->goal_pose), &(rhs->goal_pose)))
  {
    return false;
  }
  // route_sections
  if (!tier4_external_api_msgs__msg__RouteSection__Sequence__are_equal(
      &(lhs->route_sections), &(rhs->route_sections)))
  {
    return false;
  }
  return true;
}

bool
tier4_external_api_msgs__msg__Route__copy(
  const tier4_external_api_msgs__msg__Route * input,
  tier4_external_api_msgs__msg__Route * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->goal_pose), &(output->goal_pose)))
  {
    return false;
  }
  // route_sections
  if (!tier4_external_api_msgs__msg__RouteSection__Sequence__copy(
      &(input->route_sections), &(output->route_sections)))
  {
    return false;
  }
  return true;
}

tier4_external_api_msgs__msg__Route *
tier4_external_api_msgs__msg__Route__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_external_api_msgs__msg__Route * msg = (tier4_external_api_msgs__msg__Route *)allocator.allocate(sizeof(tier4_external_api_msgs__msg__Route), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_external_api_msgs__msg__Route));
  bool success = tier4_external_api_msgs__msg__Route__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_external_api_msgs__msg__Route__destroy(tier4_external_api_msgs__msg__Route * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_external_api_msgs__msg__Route__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_external_api_msgs__msg__Route__Sequence__init(tier4_external_api_msgs__msg__Route__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_external_api_msgs__msg__Route * data = NULL;

  if (size) {
    data = (tier4_external_api_msgs__msg__Route *)allocator.zero_allocate(size, sizeof(tier4_external_api_msgs__msg__Route), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_external_api_msgs__msg__Route__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_external_api_msgs__msg__Route__fini(&data[i - 1]);
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
tier4_external_api_msgs__msg__Route__Sequence__fini(tier4_external_api_msgs__msg__Route__Sequence * array)
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
      tier4_external_api_msgs__msg__Route__fini(&array->data[i]);
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

tier4_external_api_msgs__msg__Route__Sequence *
tier4_external_api_msgs__msg__Route__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_external_api_msgs__msg__Route__Sequence * array = (tier4_external_api_msgs__msg__Route__Sequence *)allocator.allocate(sizeof(tier4_external_api_msgs__msg__Route__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_external_api_msgs__msg__Route__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_external_api_msgs__msg__Route__Sequence__destroy(tier4_external_api_msgs__msg__Route__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_external_api_msgs__msg__Route__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_external_api_msgs__msg__Route__Sequence__are_equal(const tier4_external_api_msgs__msg__Route__Sequence * lhs, const tier4_external_api_msgs__msg__Route__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_external_api_msgs__msg__Route__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_external_api_msgs__msg__Route__Sequence__copy(
  const tier4_external_api_msgs__msg__Route__Sequence * input,
  tier4_external_api_msgs__msg__Route__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_external_api_msgs__msg__Route);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tier4_external_api_msgs__msg__Route * data =
      (tier4_external_api_msgs__msg__Route *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_external_api_msgs__msg__Route__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tier4_external_api_msgs__msg__Route__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_external_api_msgs__msg__Route__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
