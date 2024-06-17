// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_api_msgs:msg/AwapiVehicleStatus.idl
// generated code does not contain a copyright notice
#include "tier4_api_msgs/msg/detail/awapi_vehicle_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `eulerangle`
#include "tier4_api_msgs/msg/detail/euler__functions.h"
// Member `geo_point`
#include "geographic_msgs/msg/detail/geo_point__functions.h"

bool
tier4_api_msgs__msg__AwapiVehicleStatus__init(tier4_api_msgs__msg__AwapiVehicleStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tier4_api_msgs__msg__AwapiVehicleStatus__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    tier4_api_msgs__msg__AwapiVehicleStatus__fini(msg);
    return false;
  }
  // eulerangle
  if (!tier4_api_msgs__msg__Euler__init(&msg->eulerangle)) {
    tier4_api_msgs__msg__AwapiVehicleStatus__fini(msg);
    return false;
  }
  // geo_point
  if (!geographic_msgs__msg__GeoPoint__init(&msg->geo_point)) {
    tier4_api_msgs__msg__AwapiVehicleStatus__fini(msg);
    return false;
  }
  // velocity
  // acceleration
  // steering
  // steering_velocity
  // angular_velocity
  // gear
  // energy_level
  // turn_signal
  // target_velocity
  // target_acceleration
  // target_steering
  // target_steering_velocity
  return true;
}

void
tier4_api_msgs__msg__AwapiVehicleStatus__fini(tier4_api_msgs__msg__AwapiVehicleStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // eulerangle
  tier4_api_msgs__msg__Euler__fini(&msg->eulerangle);
  // geo_point
  geographic_msgs__msg__GeoPoint__fini(&msg->geo_point);
  // velocity
  // acceleration
  // steering
  // steering_velocity
  // angular_velocity
  // gear
  // energy_level
  // turn_signal
  // target_velocity
  // target_acceleration
  // target_steering
  // target_steering_velocity
}

bool
tier4_api_msgs__msg__AwapiVehicleStatus__are_equal(const tier4_api_msgs__msg__AwapiVehicleStatus * lhs, const tier4_api_msgs__msg__AwapiVehicleStatus * rhs)
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
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // eulerangle
  if (!tier4_api_msgs__msg__Euler__are_equal(
      &(lhs->eulerangle), &(rhs->eulerangle)))
  {
    return false;
  }
  // geo_point
  if (!geographic_msgs__msg__GeoPoint__are_equal(
      &(lhs->geo_point), &(rhs->geo_point)))
  {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // acceleration
  if (lhs->acceleration != rhs->acceleration) {
    return false;
  }
  // steering
  if (lhs->steering != rhs->steering) {
    return false;
  }
  // steering_velocity
  if (lhs->steering_velocity != rhs->steering_velocity) {
    return false;
  }
  // angular_velocity
  if (lhs->angular_velocity != rhs->angular_velocity) {
    return false;
  }
  // gear
  if (lhs->gear != rhs->gear) {
    return false;
  }
  // energy_level
  if (lhs->energy_level != rhs->energy_level) {
    return false;
  }
  // turn_signal
  if (lhs->turn_signal != rhs->turn_signal) {
    return false;
  }
  // target_velocity
  if (lhs->target_velocity != rhs->target_velocity) {
    return false;
  }
  // target_acceleration
  if (lhs->target_acceleration != rhs->target_acceleration) {
    return false;
  }
  // target_steering
  if (lhs->target_steering != rhs->target_steering) {
    return false;
  }
  // target_steering_velocity
  if (lhs->target_steering_velocity != rhs->target_steering_velocity) {
    return false;
  }
  return true;
}

bool
tier4_api_msgs__msg__AwapiVehicleStatus__copy(
  const tier4_api_msgs__msg__AwapiVehicleStatus * input,
  tier4_api_msgs__msg__AwapiVehicleStatus * output)
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
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // eulerangle
  if (!tier4_api_msgs__msg__Euler__copy(
      &(input->eulerangle), &(output->eulerangle)))
  {
    return false;
  }
  // geo_point
  if (!geographic_msgs__msg__GeoPoint__copy(
      &(input->geo_point), &(output->geo_point)))
  {
    return false;
  }
  // velocity
  output->velocity = input->velocity;
  // acceleration
  output->acceleration = input->acceleration;
  // steering
  output->steering = input->steering;
  // steering_velocity
  output->steering_velocity = input->steering_velocity;
  // angular_velocity
  output->angular_velocity = input->angular_velocity;
  // gear
  output->gear = input->gear;
  // energy_level
  output->energy_level = input->energy_level;
  // turn_signal
  output->turn_signal = input->turn_signal;
  // target_velocity
  output->target_velocity = input->target_velocity;
  // target_acceleration
  output->target_acceleration = input->target_acceleration;
  // target_steering
  output->target_steering = input->target_steering;
  // target_steering_velocity
  output->target_steering_velocity = input->target_steering_velocity;
  return true;
}

tier4_api_msgs__msg__AwapiVehicleStatus *
tier4_api_msgs__msg__AwapiVehicleStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_api_msgs__msg__AwapiVehicleStatus * msg = (tier4_api_msgs__msg__AwapiVehicleStatus *)allocator.allocate(sizeof(tier4_api_msgs__msg__AwapiVehicleStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_api_msgs__msg__AwapiVehicleStatus));
  bool success = tier4_api_msgs__msg__AwapiVehicleStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_api_msgs__msg__AwapiVehicleStatus__destroy(tier4_api_msgs__msg__AwapiVehicleStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_api_msgs__msg__AwapiVehicleStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_api_msgs__msg__AwapiVehicleStatus__Sequence__init(tier4_api_msgs__msg__AwapiVehicleStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_api_msgs__msg__AwapiVehicleStatus * data = NULL;

  if (size) {
    data = (tier4_api_msgs__msg__AwapiVehicleStatus *)allocator.zero_allocate(size, sizeof(tier4_api_msgs__msg__AwapiVehicleStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_api_msgs__msg__AwapiVehicleStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_api_msgs__msg__AwapiVehicleStatus__fini(&data[i - 1]);
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
tier4_api_msgs__msg__AwapiVehicleStatus__Sequence__fini(tier4_api_msgs__msg__AwapiVehicleStatus__Sequence * array)
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
      tier4_api_msgs__msg__AwapiVehicleStatus__fini(&array->data[i]);
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

tier4_api_msgs__msg__AwapiVehicleStatus__Sequence *
tier4_api_msgs__msg__AwapiVehicleStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_api_msgs__msg__AwapiVehicleStatus__Sequence * array = (tier4_api_msgs__msg__AwapiVehicleStatus__Sequence *)allocator.allocate(sizeof(tier4_api_msgs__msg__AwapiVehicleStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_api_msgs__msg__AwapiVehicleStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_api_msgs__msg__AwapiVehicleStatus__Sequence__destroy(tier4_api_msgs__msg__AwapiVehicleStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_api_msgs__msg__AwapiVehicleStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_api_msgs__msg__AwapiVehicleStatus__Sequence__are_equal(const tier4_api_msgs__msg__AwapiVehicleStatus__Sequence * lhs, const tier4_api_msgs__msg__AwapiVehicleStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_api_msgs__msg__AwapiVehicleStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_api_msgs__msg__AwapiVehicleStatus__Sequence__copy(
  const tier4_api_msgs__msg__AwapiVehicleStatus__Sequence * input,
  tier4_api_msgs__msg__AwapiVehicleStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_api_msgs__msg__AwapiVehicleStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tier4_api_msgs__msg__AwapiVehicleStatus * data =
      (tier4_api_msgs__msg__AwapiVehicleStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_api_msgs__msg__AwapiVehicleStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tier4_api_msgs__msg__AwapiVehicleStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_api_msgs__msg__AwapiVehicleStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
