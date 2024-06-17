// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_adapi_v1_msgs:msg/VehicleKinematics.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/msg/detail/vehicle_kinematics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `geographic_pose`
#include "geographic_msgs/msg/detail/geo_point_stamped__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist_with_covariance_stamped__functions.h"
// Member `accel`
#include "geometry_msgs/msg/detail/accel_with_covariance_stamped__functions.h"

bool
autoware_adapi_v1_msgs__msg__VehicleKinematics__init(autoware_adapi_v1_msgs__msg__VehicleKinematics * msg)
{
  if (!msg) {
    return false;
  }
  // geographic_pose
  if (!geographic_msgs__msg__GeoPointStamped__init(&msg->geographic_pose)) {
    autoware_adapi_v1_msgs__msg__VehicleKinematics__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovarianceStamped__init(&msg->pose)) {
    autoware_adapi_v1_msgs__msg__VehicleKinematics__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__TwistWithCovarianceStamped__init(&msg->twist)) {
    autoware_adapi_v1_msgs__msg__VehicleKinematics__fini(msg);
    return false;
  }
  // accel
  if (!geometry_msgs__msg__AccelWithCovarianceStamped__init(&msg->accel)) {
    autoware_adapi_v1_msgs__msg__VehicleKinematics__fini(msg);
    return false;
  }
  return true;
}

void
autoware_adapi_v1_msgs__msg__VehicleKinematics__fini(autoware_adapi_v1_msgs__msg__VehicleKinematics * msg)
{
  if (!msg) {
    return;
  }
  // geographic_pose
  geographic_msgs__msg__GeoPointStamped__fini(&msg->geographic_pose);
  // pose
  geometry_msgs__msg__PoseWithCovarianceStamped__fini(&msg->pose);
  // twist
  geometry_msgs__msg__TwistWithCovarianceStamped__fini(&msg->twist);
  // accel
  geometry_msgs__msg__AccelWithCovarianceStamped__fini(&msg->accel);
}

bool
autoware_adapi_v1_msgs__msg__VehicleKinematics__are_equal(const autoware_adapi_v1_msgs__msg__VehicleKinematics * lhs, const autoware_adapi_v1_msgs__msg__VehicleKinematics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // geographic_pose
  if (!geographic_msgs__msg__GeoPointStamped__are_equal(
      &(lhs->geographic_pose), &(rhs->geographic_pose)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovarianceStamped__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__TwistWithCovarianceStamped__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  // accel
  if (!geometry_msgs__msg__AccelWithCovarianceStamped__are_equal(
      &(lhs->accel), &(rhs->accel)))
  {
    return false;
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__VehicleKinematics__copy(
  const autoware_adapi_v1_msgs__msg__VehicleKinematics * input,
  autoware_adapi_v1_msgs__msg__VehicleKinematics * output)
{
  if (!input || !output) {
    return false;
  }
  // geographic_pose
  if (!geographic_msgs__msg__GeoPointStamped__copy(
      &(input->geographic_pose), &(output->geographic_pose)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovarianceStamped__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__TwistWithCovarianceStamped__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  // accel
  if (!geometry_msgs__msg__AccelWithCovarianceStamped__copy(
      &(input->accel), &(output->accel)))
  {
    return false;
  }
  return true;
}

autoware_adapi_v1_msgs__msg__VehicleKinematics *
autoware_adapi_v1_msgs__msg__VehicleKinematics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__VehicleKinematics * msg = (autoware_adapi_v1_msgs__msg__VehicleKinematics *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__msg__VehicleKinematics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_adapi_v1_msgs__msg__VehicleKinematics));
  bool success = autoware_adapi_v1_msgs__msg__VehicleKinematics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_adapi_v1_msgs__msg__VehicleKinematics__destroy(autoware_adapi_v1_msgs__msg__VehicleKinematics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_adapi_v1_msgs__msg__VehicleKinematics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_adapi_v1_msgs__msg__VehicleKinematics__Sequence__init(autoware_adapi_v1_msgs__msg__VehicleKinematics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__VehicleKinematics * data = NULL;

  if (size) {
    data = (autoware_adapi_v1_msgs__msg__VehicleKinematics *)allocator.zero_allocate(size, sizeof(autoware_adapi_v1_msgs__msg__VehicleKinematics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_adapi_v1_msgs__msg__VehicleKinematics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_adapi_v1_msgs__msg__VehicleKinematics__fini(&data[i - 1]);
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
autoware_adapi_v1_msgs__msg__VehicleKinematics__Sequence__fini(autoware_adapi_v1_msgs__msg__VehicleKinematics__Sequence * array)
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
      autoware_adapi_v1_msgs__msg__VehicleKinematics__fini(&array->data[i]);
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

autoware_adapi_v1_msgs__msg__VehicleKinematics__Sequence *
autoware_adapi_v1_msgs__msg__VehicleKinematics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__VehicleKinematics__Sequence * array = (autoware_adapi_v1_msgs__msg__VehicleKinematics__Sequence *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__msg__VehicleKinematics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_adapi_v1_msgs__msg__VehicleKinematics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_adapi_v1_msgs__msg__VehicleKinematics__Sequence__destroy(autoware_adapi_v1_msgs__msg__VehicleKinematics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_adapi_v1_msgs__msg__VehicleKinematics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_adapi_v1_msgs__msg__VehicleKinematics__Sequence__are_equal(const autoware_adapi_v1_msgs__msg__VehicleKinematics__Sequence * lhs, const autoware_adapi_v1_msgs__msg__VehicleKinematics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__VehicleKinematics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__VehicleKinematics__Sequence__copy(
  const autoware_adapi_v1_msgs__msg__VehicleKinematics__Sequence * input,
  autoware_adapi_v1_msgs__msg__VehicleKinematics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_adapi_v1_msgs__msg__VehicleKinematics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_adapi_v1_msgs__msg__VehicleKinematics * data =
      (autoware_adapi_v1_msgs__msg__VehicleKinematics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_adapi_v1_msgs__msg__VehicleKinematics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_adapi_v1_msgs__msg__VehicleKinematics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__VehicleKinematics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
