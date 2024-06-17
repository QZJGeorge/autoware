// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_adapi_v1_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/msg/detail/vehicle_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `gear`
#include "autoware_adapi_v1_msgs/msg/detail/gear__functions.h"
// Member `turn_indicators`
#include "autoware_adapi_v1_msgs/msg/detail/turn_indicators__functions.h"
// Member `hazard_lights`
#include "autoware_adapi_v1_msgs/msg/detail/hazard_lights__functions.h"

bool
autoware_adapi_v1_msgs__msg__VehicleStatus__init(autoware_adapi_v1_msgs__msg__VehicleStatus * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    autoware_adapi_v1_msgs__msg__VehicleStatus__fini(msg);
    return false;
  }
  // gear
  if (!autoware_adapi_v1_msgs__msg__Gear__init(&msg->gear)) {
    autoware_adapi_v1_msgs__msg__VehicleStatus__fini(msg);
    return false;
  }
  // turn_indicators
  if (!autoware_adapi_v1_msgs__msg__TurnIndicators__init(&msg->turn_indicators)) {
    autoware_adapi_v1_msgs__msg__VehicleStatus__fini(msg);
    return false;
  }
  // hazard_lights
  if (!autoware_adapi_v1_msgs__msg__HazardLights__init(&msg->hazard_lights)) {
    autoware_adapi_v1_msgs__msg__VehicleStatus__fini(msg);
    return false;
  }
  // steering_tire_angle
  // energy_percentage
  return true;
}

void
autoware_adapi_v1_msgs__msg__VehicleStatus__fini(autoware_adapi_v1_msgs__msg__VehicleStatus * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // gear
  autoware_adapi_v1_msgs__msg__Gear__fini(&msg->gear);
  // turn_indicators
  autoware_adapi_v1_msgs__msg__TurnIndicators__fini(&msg->turn_indicators);
  // hazard_lights
  autoware_adapi_v1_msgs__msg__HazardLights__fini(&msg->hazard_lights);
  // steering_tire_angle
  // energy_percentage
}

bool
autoware_adapi_v1_msgs__msg__VehicleStatus__are_equal(const autoware_adapi_v1_msgs__msg__VehicleStatus * lhs, const autoware_adapi_v1_msgs__msg__VehicleStatus * rhs)
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
  // gear
  if (!autoware_adapi_v1_msgs__msg__Gear__are_equal(
      &(lhs->gear), &(rhs->gear)))
  {
    return false;
  }
  // turn_indicators
  if (!autoware_adapi_v1_msgs__msg__TurnIndicators__are_equal(
      &(lhs->turn_indicators), &(rhs->turn_indicators)))
  {
    return false;
  }
  // hazard_lights
  if (!autoware_adapi_v1_msgs__msg__HazardLights__are_equal(
      &(lhs->hazard_lights), &(rhs->hazard_lights)))
  {
    return false;
  }
  // steering_tire_angle
  if (lhs->steering_tire_angle != rhs->steering_tire_angle) {
    return false;
  }
  // energy_percentage
  if (lhs->energy_percentage != rhs->energy_percentage) {
    return false;
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__VehicleStatus__copy(
  const autoware_adapi_v1_msgs__msg__VehicleStatus * input,
  autoware_adapi_v1_msgs__msg__VehicleStatus * output)
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
  // gear
  if (!autoware_adapi_v1_msgs__msg__Gear__copy(
      &(input->gear), &(output->gear)))
  {
    return false;
  }
  // turn_indicators
  if (!autoware_adapi_v1_msgs__msg__TurnIndicators__copy(
      &(input->turn_indicators), &(output->turn_indicators)))
  {
    return false;
  }
  // hazard_lights
  if (!autoware_adapi_v1_msgs__msg__HazardLights__copy(
      &(input->hazard_lights), &(output->hazard_lights)))
  {
    return false;
  }
  // steering_tire_angle
  output->steering_tire_angle = input->steering_tire_angle;
  // energy_percentage
  output->energy_percentage = input->energy_percentage;
  return true;
}

autoware_adapi_v1_msgs__msg__VehicleStatus *
autoware_adapi_v1_msgs__msg__VehicleStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__VehicleStatus * msg = (autoware_adapi_v1_msgs__msg__VehicleStatus *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__msg__VehicleStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_adapi_v1_msgs__msg__VehicleStatus));
  bool success = autoware_adapi_v1_msgs__msg__VehicleStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_adapi_v1_msgs__msg__VehicleStatus__destroy(autoware_adapi_v1_msgs__msg__VehicleStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_adapi_v1_msgs__msg__VehicleStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_adapi_v1_msgs__msg__VehicleStatus__Sequence__init(autoware_adapi_v1_msgs__msg__VehicleStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__VehicleStatus * data = NULL;

  if (size) {
    data = (autoware_adapi_v1_msgs__msg__VehicleStatus *)allocator.zero_allocate(size, sizeof(autoware_adapi_v1_msgs__msg__VehicleStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_adapi_v1_msgs__msg__VehicleStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_adapi_v1_msgs__msg__VehicleStatus__fini(&data[i - 1]);
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
autoware_adapi_v1_msgs__msg__VehicleStatus__Sequence__fini(autoware_adapi_v1_msgs__msg__VehicleStatus__Sequence * array)
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
      autoware_adapi_v1_msgs__msg__VehicleStatus__fini(&array->data[i]);
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

autoware_adapi_v1_msgs__msg__VehicleStatus__Sequence *
autoware_adapi_v1_msgs__msg__VehicleStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__VehicleStatus__Sequence * array = (autoware_adapi_v1_msgs__msg__VehicleStatus__Sequence *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__msg__VehicleStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_adapi_v1_msgs__msg__VehicleStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_adapi_v1_msgs__msg__VehicleStatus__Sequence__destroy(autoware_adapi_v1_msgs__msg__VehicleStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_adapi_v1_msgs__msg__VehicleStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_adapi_v1_msgs__msg__VehicleStatus__Sequence__are_equal(const autoware_adapi_v1_msgs__msg__VehicleStatus__Sequence * lhs, const autoware_adapi_v1_msgs__msg__VehicleStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__VehicleStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__VehicleStatus__Sequence__copy(
  const autoware_adapi_v1_msgs__msg__VehicleStatus__Sequence * input,
  autoware_adapi_v1_msgs__msg__VehicleStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_adapi_v1_msgs__msg__VehicleStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_adapi_v1_msgs__msg__VehicleStatus * data =
      (autoware_adapi_v1_msgs__msg__VehicleStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_adapi_v1_msgs__msg__VehicleStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_adapi_v1_msgs__msg__VehicleStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__VehicleStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
