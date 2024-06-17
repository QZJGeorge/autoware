// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_adapi_v1_msgs:msg/VelocityFactor.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/msg/detail/velocity_factor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `behavior`
// Member `sequence`
// Member `detail`
#include "rosidl_runtime_c/string_functions.h"
// Member `cooperation`
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_status__functions.h"

bool
autoware_adapi_v1_msgs__msg__VelocityFactor__init(autoware_adapi_v1_msgs__msg__VelocityFactor * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    autoware_adapi_v1_msgs__msg__VelocityFactor__fini(msg);
    return false;
  }
  // distance
  // status
  // behavior
  if (!rosidl_runtime_c__String__init(&msg->behavior)) {
    autoware_adapi_v1_msgs__msg__VelocityFactor__fini(msg);
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__String__init(&msg->sequence)) {
    autoware_adapi_v1_msgs__msg__VelocityFactor__fini(msg);
    return false;
  }
  // detail
  if (!rosidl_runtime_c__String__init(&msg->detail)) {
    autoware_adapi_v1_msgs__msg__VelocityFactor__fini(msg);
    return false;
  }
  // cooperation
  if (!autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence__init(&msg->cooperation, 0)) {
    autoware_adapi_v1_msgs__msg__VelocityFactor__fini(msg);
    return false;
  }
  // type
  return true;
}

void
autoware_adapi_v1_msgs__msg__VelocityFactor__fini(autoware_adapi_v1_msgs__msg__VelocityFactor * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // distance
  // status
  // behavior
  rosidl_runtime_c__String__fini(&msg->behavior);
  // sequence
  rosidl_runtime_c__String__fini(&msg->sequence);
  // detail
  rosidl_runtime_c__String__fini(&msg->detail);
  // cooperation
  autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence__fini(&msg->cooperation);
  // type
}

bool
autoware_adapi_v1_msgs__msg__VelocityFactor__are_equal(const autoware_adapi_v1_msgs__msg__VelocityFactor * lhs, const autoware_adapi_v1_msgs__msg__VelocityFactor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // behavior
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->behavior), &(rhs->behavior)))
  {
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sequence), &(rhs->sequence)))
  {
    return false;
  }
  // detail
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->detail), &(rhs->detail)))
  {
    return false;
  }
  // cooperation
  if (!autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence__are_equal(
      &(lhs->cooperation), &(rhs->cooperation)))
  {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__VelocityFactor__copy(
  const autoware_adapi_v1_msgs__msg__VelocityFactor * input,
  autoware_adapi_v1_msgs__msg__VelocityFactor * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // distance
  output->distance = input->distance;
  // status
  output->status = input->status;
  // behavior
  if (!rosidl_runtime_c__String__copy(
      &(input->behavior), &(output->behavior)))
  {
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__String__copy(
      &(input->sequence), &(output->sequence)))
  {
    return false;
  }
  // detail
  if (!rosidl_runtime_c__String__copy(
      &(input->detail), &(output->detail)))
  {
    return false;
  }
  // cooperation
  if (!autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence__copy(
      &(input->cooperation), &(output->cooperation)))
  {
    return false;
  }
  // type
  output->type = input->type;
  return true;
}

autoware_adapi_v1_msgs__msg__VelocityFactor *
autoware_adapi_v1_msgs__msg__VelocityFactor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__VelocityFactor * msg = (autoware_adapi_v1_msgs__msg__VelocityFactor *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__msg__VelocityFactor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_adapi_v1_msgs__msg__VelocityFactor));
  bool success = autoware_adapi_v1_msgs__msg__VelocityFactor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_adapi_v1_msgs__msg__VelocityFactor__destroy(autoware_adapi_v1_msgs__msg__VelocityFactor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_adapi_v1_msgs__msg__VelocityFactor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence__init(autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__VelocityFactor * data = NULL;

  if (size) {
    data = (autoware_adapi_v1_msgs__msg__VelocityFactor *)allocator.zero_allocate(size, sizeof(autoware_adapi_v1_msgs__msg__VelocityFactor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_adapi_v1_msgs__msg__VelocityFactor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_adapi_v1_msgs__msg__VelocityFactor__fini(&data[i - 1]);
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
autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence__fini(autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence * array)
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
      autoware_adapi_v1_msgs__msg__VelocityFactor__fini(&array->data[i]);
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

autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence *
autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence * array = (autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence__destroy(autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence__are_equal(const autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence * lhs, const autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__VelocityFactor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence__copy(
  const autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence * input,
  autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_adapi_v1_msgs__msg__VelocityFactor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_adapi_v1_msgs__msg__VelocityFactor * data =
      (autoware_adapi_v1_msgs__msg__VelocityFactor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_adapi_v1_msgs__msg__VelocityFactor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_adapi_v1_msgs__msg__VelocityFactor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__VelocityFactor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
