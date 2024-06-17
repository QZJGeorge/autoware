// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_localization_msgs:msg/KinematicState.idl
// generated code does not contain a copyright notice
#include "autoware_localization_msgs/msg/detail/kinematic_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `child_frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose_with_covariance`
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"
// Member `twist_with_covariance`
#include "geometry_msgs/msg/detail/twist_with_covariance__functions.h"
// Member `accel_with_covariance`
#include "geometry_msgs/msg/detail/accel_with_covariance__functions.h"

bool
autoware_localization_msgs__msg__KinematicState__init(autoware_localization_msgs__msg__KinematicState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_localization_msgs__msg__KinematicState__fini(msg);
    return false;
  }
  // child_frame_id
  if (!rosidl_runtime_c__String__init(&msg->child_frame_id)) {
    autoware_localization_msgs__msg__KinematicState__fini(msg);
    return false;
  }
  // pose_with_covariance
  if (!geometry_msgs__msg__PoseWithCovariance__init(&msg->pose_with_covariance)) {
    autoware_localization_msgs__msg__KinematicState__fini(msg);
    return false;
  }
  // twist_with_covariance
  if (!geometry_msgs__msg__TwistWithCovariance__init(&msg->twist_with_covariance)) {
    autoware_localization_msgs__msg__KinematicState__fini(msg);
    return false;
  }
  // accel_with_covariance
  if (!geometry_msgs__msg__AccelWithCovariance__init(&msg->accel_with_covariance)) {
    autoware_localization_msgs__msg__KinematicState__fini(msg);
    return false;
  }
  return true;
}

void
autoware_localization_msgs__msg__KinematicState__fini(autoware_localization_msgs__msg__KinematicState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // child_frame_id
  rosidl_runtime_c__String__fini(&msg->child_frame_id);
  // pose_with_covariance
  geometry_msgs__msg__PoseWithCovariance__fini(&msg->pose_with_covariance);
  // twist_with_covariance
  geometry_msgs__msg__TwistWithCovariance__fini(&msg->twist_with_covariance);
  // accel_with_covariance
  geometry_msgs__msg__AccelWithCovariance__fini(&msg->accel_with_covariance);
}

bool
autoware_localization_msgs__msg__KinematicState__are_equal(const autoware_localization_msgs__msg__KinematicState * lhs, const autoware_localization_msgs__msg__KinematicState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // child_frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->child_frame_id), &(rhs->child_frame_id)))
  {
    return false;
  }
  // pose_with_covariance
  if (!geometry_msgs__msg__PoseWithCovariance__are_equal(
      &(lhs->pose_with_covariance), &(rhs->pose_with_covariance)))
  {
    return false;
  }
  // twist_with_covariance
  if (!geometry_msgs__msg__TwistWithCovariance__are_equal(
      &(lhs->twist_with_covariance), &(rhs->twist_with_covariance)))
  {
    return false;
  }
  // accel_with_covariance
  if (!geometry_msgs__msg__AccelWithCovariance__are_equal(
      &(lhs->accel_with_covariance), &(rhs->accel_with_covariance)))
  {
    return false;
  }
  return true;
}

bool
autoware_localization_msgs__msg__KinematicState__copy(
  const autoware_localization_msgs__msg__KinematicState * input,
  autoware_localization_msgs__msg__KinematicState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // child_frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->child_frame_id), &(output->child_frame_id)))
  {
    return false;
  }
  // pose_with_covariance
  if (!geometry_msgs__msg__PoseWithCovariance__copy(
      &(input->pose_with_covariance), &(output->pose_with_covariance)))
  {
    return false;
  }
  // twist_with_covariance
  if (!geometry_msgs__msg__TwistWithCovariance__copy(
      &(input->twist_with_covariance), &(output->twist_with_covariance)))
  {
    return false;
  }
  // accel_with_covariance
  if (!geometry_msgs__msg__AccelWithCovariance__copy(
      &(input->accel_with_covariance), &(output->accel_with_covariance)))
  {
    return false;
  }
  return true;
}

autoware_localization_msgs__msg__KinematicState *
autoware_localization_msgs__msg__KinematicState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_localization_msgs__msg__KinematicState * msg = (autoware_localization_msgs__msg__KinematicState *)allocator.allocate(sizeof(autoware_localization_msgs__msg__KinematicState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_localization_msgs__msg__KinematicState));
  bool success = autoware_localization_msgs__msg__KinematicState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_localization_msgs__msg__KinematicState__destroy(autoware_localization_msgs__msg__KinematicState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_localization_msgs__msg__KinematicState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_localization_msgs__msg__KinematicState__Sequence__init(autoware_localization_msgs__msg__KinematicState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_localization_msgs__msg__KinematicState * data = NULL;

  if (size) {
    data = (autoware_localization_msgs__msg__KinematicState *)allocator.zero_allocate(size, sizeof(autoware_localization_msgs__msg__KinematicState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_localization_msgs__msg__KinematicState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_localization_msgs__msg__KinematicState__fini(&data[i - 1]);
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
autoware_localization_msgs__msg__KinematicState__Sequence__fini(autoware_localization_msgs__msg__KinematicState__Sequence * array)
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
      autoware_localization_msgs__msg__KinematicState__fini(&array->data[i]);
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

autoware_localization_msgs__msg__KinematicState__Sequence *
autoware_localization_msgs__msg__KinematicState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_localization_msgs__msg__KinematicState__Sequence * array = (autoware_localization_msgs__msg__KinematicState__Sequence *)allocator.allocate(sizeof(autoware_localization_msgs__msg__KinematicState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_localization_msgs__msg__KinematicState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_localization_msgs__msg__KinematicState__Sequence__destroy(autoware_localization_msgs__msg__KinematicState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_localization_msgs__msg__KinematicState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_localization_msgs__msg__KinematicState__Sequence__are_equal(const autoware_localization_msgs__msg__KinematicState__Sequence * lhs, const autoware_localization_msgs__msg__KinematicState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_localization_msgs__msg__KinematicState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_localization_msgs__msg__KinematicState__Sequence__copy(
  const autoware_localization_msgs__msg__KinematicState__Sequence * input,
  autoware_localization_msgs__msg__KinematicState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_localization_msgs__msg__KinematicState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_localization_msgs__msg__KinematicState * data =
      (autoware_localization_msgs__msg__KinematicState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_localization_msgs__msg__KinematicState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_localization_msgs__msg__KinematicState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_localization_msgs__msg__KinematicState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
