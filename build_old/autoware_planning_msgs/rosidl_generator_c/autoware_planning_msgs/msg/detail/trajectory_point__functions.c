// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_planning_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice
#include "autoware_planning_msgs/msg/detail/trajectory_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time_from_start`
#include "builtin_interfaces/msg/detail/duration__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
autoware_planning_msgs__msg__TrajectoryPoint__init(autoware_planning_msgs__msg__TrajectoryPoint * msg)
{
  if (!msg) {
    return false;
  }
  // time_from_start
  if (!builtin_interfaces__msg__Duration__init(&msg->time_from_start)) {
    autoware_planning_msgs__msg__TrajectoryPoint__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    autoware_planning_msgs__msg__TrajectoryPoint__fini(msg);
    return false;
  }
  // longitudinal_velocity_mps
  // lateral_velocity_mps
  // acceleration_mps2
  // heading_rate_rps
  // front_wheel_angle_rad
  // rear_wheel_angle_rad
  return true;
}

void
autoware_planning_msgs__msg__TrajectoryPoint__fini(autoware_planning_msgs__msg__TrajectoryPoint * msg)
{
  if (!msg) {
    return;
  }
  // time_from_start
  builtin_interfaces__msg__Duration__fini(&msg->time_from_start);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // longitudinal_velocity_mps
  // lateral_velocity_mps
  // acceleration_mps2
  // heading_rate_rps
  // front_wheel_angle_rad
  // rear_wheel_angle_rad
}

bool
autoware_planning_msgs__msg__TrajectoryPoint__are_equal(const autoware_planning_msgs__msg__TrajectoryPoint * lhs, const autoware_planning_msgs__msg__TrajectoryPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_from_start
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->time_from_start), &(rhs->time_from_start)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // longitudinal_velocity_mps
  if (lhs->longitudinal_velocity_mps != rhs->longitudinal_velocity_mps) {
    return false;
  }
  // lateral_velocity_mps
  if (lhs->lateral_velocity_mps != rhs->lateral_velocity_mps) {
    return false;
  }
  // acceleration_mps2
  if (lhs->acceleration_mps2 != rhs->acceleration_mps2) {
    return false;
  }
  // heading_rate_rps
  if (lhs->heading_rate_rps != rhs->heading_rate_rps) {
    return false;
  }
  // front_wheel_angle_rad
  if (lhs->front_wheel_angle_rad != rhs->front_wheel_angle_rad) {
    return false;
  }
  // rear_wheel_angle_rad
  if (lhs->rear_wheel_angle_rad != rhs->rear_wheel_angle_rad) {
    return false;
  }
  return true;
}

bool
autoware_planning_msgs__msg__TrajectoryPoint__copy(
  const autoware_planning_msgs__msg__TrajectoryPoint * input,
  autoware_planning_msgs__msg__TrajectoryPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // time_from_start
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->time_from_start), &(output->time_from_start)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // longitudinal_velocity_mps
  output->longitudinal_velocity_mps = input->longitudinal_velocity_mps;
  // lateral_velocity_mps
  output->lateral_velocity_mps = input->lateral_velocity_mps;
  // acceleration_mps2
  output->acceleration_mps2 = input->acceleration_mps2;
  // heading_rate_rps
  output->heading_rate_rps = input->heading_rate_rps;
  // front_wheel_angle_rad
  output->front_wheel_angle_rad = input->front_wheel_angle_rad;
  // rear_wheel_angle_rad
  output->rear_wheel_angle_rad = input->rear_wheel_angle_rad;
  return true;
}

autoware_planning_msgs__msg__TrajectoryPoint *
autoware_planning_msgs__msg__TrajectoryPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_planning_msgs__msg__TrajectoryPoint * msg = (autoware_planning_msgs__msg__TrajectoryPoint *)allocator.allocate(sizeof(autoware_planning_msgs__msg__TrajectoryPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_planning_msgs__msg__TrajectoryPoint));
  bool success = autoware_planning_msgs__msg__TrajectoryPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_planning_msgs__msg__TrajectoryPoint__destroy(autoware_planning_msgs__msg__TrajectoryPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_planning_msgs__msg__TrajectoryPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_planning_msgs__msg__TrajectoryPoint__Sequence__init(autoware_planning_msgs__msg__TrajectoryPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_planning_msgs__msg__TrajectoryPoint * data = NULL;

  if (size) {
    data = (autoware_planning_msgs__msg__TrajectoryPoint *)allocator.zero_allocate(size, sizeof(autoware_planning_msgs__msg__TrajectoryPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_planning_msgs__msg__TrajectoryPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_planning_msgs__msg__TrajectoryPoint__fini(&data[i - 1]);
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
autoware_planning_msgs__msg__TrajectoryPoint__Sequence__fini(autoware_planning_msgs__msg__TrajectoryPoint__Sequence * array)
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
      autoware_planning_msgs__msg__TrajectoryPoint__fini(&array->data[i]);
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

autoware_planning_msgs__msg__TrajectoryPoint__Sequence *
autoware_planning_msgs__msg__TrajectoryPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_planning_msgs__msg__TrajectoryPoint__Sequence * array = (autoware_planning_msgs__msg__TrajectoryPoint__Sequence *)allocator.allocate(sizeof(autoware_planning_msgs__msg__TrajectoryPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_planning_msgs__msg__TrajectoryPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_planning_msgs__msg__TrajectoryPoint__Sequence__destroy(autoware_planning_msgs__msg__TrajectoryPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_planning_msgs__msg__TrajectoryPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_planning_msgs__msg__TrajectoryPoint__Sequence__are_equal(const autoware_planning_msgs__msg__TrajectoryPoint__Sequence * lhs, const autoware_planning_msgs__msg__TrajectoryPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_planning_msgs__msg__TrajectoryPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_planning_msgs__msg__TrajectoryPoint__Sequence__copy(
  const autoware_planning_msgs__msg__TrajectoryPoint__Sequence * input,
  autoware_planning_msgs__msg__TrajectoryPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_planning_msgs__msg__TrajectoryPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_planning_msgs__msg__TrajectoryPoint * data =
      (autoware_planning_msgs__msg__TrajectoryPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_planning_msgs__msg__TrajectoryPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_planning_msgs__msg__TrajectoryPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_planning_msgs__msg__TrajectoryPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
