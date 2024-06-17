// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from planning_validator:msg/PlanningValidatorStatus.idl
// generated code does not contain a copyright notice
#include "planning_validator/msg/detail/planning_validator_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
planning_validator__msg__PlanningValidatorStatus__init(planning_validator__msg__PlanningValidatorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    planning_validator__msg__PlanningValidatorStatus__fini(msg);
    return false;
  }
  // is_valid_finite_value
  // is_valid_interval
  // is_valid_relative_angle
  // is_valid_curvature
  // is_valid_lateral_acc
  // is_valid_longitudinal_max_acc
  // is_valid_longitudinal_min_acc
  // is_valid_steering
  // is_valid_steering_rate
  // is_valid_velocity_deviation
  // is_valid_distance_deviation
  // max_interval_distance
  // max_relative_angle
  // max_curvature
  // max_lateral_acc
  // max_longitudinal_acc
  // min_longitudinal_acc
  // max_steering
  // max_steering_rate
  // velocity_deviation
  // distance_deviation
  // invalid_count
  return true;
}

void
planning_validator__msg__PlanningValidatorStatus__fini(planning_validator__msg__PlanningValidatorStatus * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // is_valid_finite_value
  // is_valid_interval
  // is_valid_relative_angle
  // is_valid_curvature
  // is_valid_lateral_acc
  // is_valid_longitudinal_max_acc
  // is_valid_longitudinal_min_acc
  // is_valid_steering
  // is_valid_steering_rate
  // is_valid_velocity_deviation
  // is_valid_distance_deviation
  // max_interval_distance
  // max_relative_angle
  // max_curvature
  // max_lateral_acc
  // max_longitudinal_acc
  // min_longitudinal_acc
  // max_steering
  // max_steering_rate
  // velocity_deviation
  // distance_deviation
  // invalid_count
}

bool
planning_validator__msg__PlanningValidatorStatus__are_equal(const planning_validator__msg__PlanningValidatorStatus * lhs, const planning_validator__msg__PlanningValidatorStatus * rhs)
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
  // is_valid_finite_value
  if (lhs->is_valid_finite_value != rhs->is_valid_finite_value) {
    return false;
  }
  // is_valid_interval
  if (lhs->is_valid_interval != rhs->is_valid_interval) {
    return false;
  }
  // is_valid_relative_angle
  if (lhs->is_valid_relative_angle != rhs->is_valid_relative_angle) {
    return false;
  }
  // is_valid_curvature
  if (lhs->is_valid_curvature != rhs->is_valid_curvature) {
    return false;
  }
  // is_valid_lateral_acc
  if (lhs->is_valid_lateral_acc != rhs->is_valid_lateral_acc) {
    return false;
  }
  // is_valid_longitudinal_max_acc
  if (lhs->is_valid_longitudinal_max_acc != rhs->is_valid_longitudinal_max_acc) {
    return false;
  }
  // is_valid_longitudinal_min_acc
  if (lhs->is_valid_longitudinal_min_acc != rhs->is_valid_longitudinal_min_acc) {
    return false;
  }
  // is_valid_steering
  if (lhs->is_valid_steering != rhs->is_valid_steering) {
    return false;
  }
  // is_valid_steering_rate
  if (lhs->is_valid_steering_rate != rhs->is_valid_steering_rate) {
    return false;
  }
  // is_valid_velocity_deviation
  if (lhs->is_valid_velocity_deviation != rhs->is_valid_velocity_deviation) {
    return false;
  }
  // is_valid_distance_deviation
  if (lhs->is_valid_distance_deviation != rhs->is_valid_distance_deviation) {
    return false;
  }
  // max_interval_distance
  if (lhs->max_interval_distance != rhs->max_interval_distance) {
    return false;
  }
  // max_relative_angle
  if (lhs->max_relative_angle != rhs->max_relative_angle) {
    return false;
  }
  // max_curvature
  if (lhs->max_curvature != rhs->max_curvature) {
    return false;
  }
  // max_lateral_acc
  if (lhs->max_lateral_acc != rhs->max_lateral_acc) {
    return false;
  }
  // max_longitudinal_acc
  if (lhs->max_longitudinal_acc != rhs->max_longitudinal_acc) {
    return false;
  }
  // min_longitudinal_acc
  if (lhs->min_longitudinal_acc != rhs->min_longitudinal_acc) {
    return false;
  }
  // max_steering
  if (lhs->max_steering != rhs->max_steering) {
    return false;
  }
  // max_steering_rate
  if (lhs->max_steering_rate != rhs->max_steering_rate) {
    return false;
  }
  // velocity_deviation
  if (lhs->velocity_deviation != rhs->velocity_deviation) {
    return false;
  }
  // distance_deviation
  if (lhs->distance_deviation != rhs->distance_deviation) {
    return false;
  }
  // invalid_count
  if (lhs->invalid_count != rhs->invalid_count) {
    return false;
  }
  return true;
}

bool
planning_validator__msg__PlanningValidatorStatus__copy(
  const planning_validator__msg__PlanningValidatorStatus * input,
  planning_validator__msg__PlanningValidatorStatus * output)
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
  // is_valid_finite_value
  output->is_valid_finite_value = input->is_valid_finite_value;
  // is_valid_interval
  output->is_valid_interval = input->is_valid_interval;
  // is_valid_relative_angle
  output->is_valid_relative_angle = input->is_valid_relative_angle;
  // is_valid_curvature
  output->is_valid_curvature = input->is_valid_curvature;
  // is_valid_lateral_acc
  output->is_valid_lateral_acc = input->is_valid_lateral_acc;
  // is_valid_longitudinal_max_acc
  output->is_valid_longitudinal_max_acc = input->is_valid_longitudinal_max_acc;
  // is_valid_longitudinal_min_acc
  output->is_valid_longitudinal_min_acc = input->is_valid_longitudinal_min_acc;
  // is_valid_steering
  output->is_valid_steering = input->is_valid_steering;
  // is_valid_steering_rate
  output->is_valid_steering_rate = input->is_valid_steering_rate;
  // is_valid_velocity_deviation
  output->is_valid_velocity_deviation = input->is_valid_velocity_deviation;
  // is_valid_distance_deviation
  output->is_valid_distance_deviation = input->is_valid_distance_deviation;
  // max_interval_distance
  output->max_interval_distance = input->max_interval_distance;
  // max_relative_angle
  output->max_relative_angle = input->max_relative_angle;
  // max_curvature
  output->max_curvature = input->max_curvature;
  // max_lateral_acc
  output->max_lateral_acc = input->max_lateral_acc;
  // max_longitudinal_acc
  output->max_longitudinal_acc = input->max_longitudinal_acc;
  // min_longitudinal_acc
  output->min_longitudinal_acc = input->min_longitudinal_acc;
  // max_steering
  output->max_steering = input->max_steering;
  // max_steering_rate
  output->max_steering_rate = input->max_steering_rate;
  // velocity_deviation
  output->velocity_deviation = input->velocity_deviation;
  // distance_deviation
  output->distance_deviation = input->distance_deviation;
  // invalid_count
  output->invalid_count = input->invalid_count;
  return true;
}

planning_validator__msg__PlanningValidatorStatus *
planning_validator__msg__PlanningValidatorStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planning_validator__msg__PlanningValidatorStatus * msg = (planning_validator__msg__PlanningValidatorStatus *)allocator.allocate(sizeof(planning_validator__msg__PlanningValidatorStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planning_validator__msg__PlanningValidatorStatus));
  bool success = planning_validator__msg__PlanningValidatorStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
planning_validator__msg__PlanningValidatorStatus__destroy(planning_validator__msg__PlanningValidatorStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    planning_validator__msg__PlanningValidatorStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
planning_validator__msg__PlanningValidatorStatus__Sequence__init(planning_validator__msg__PlanningValidatorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planning_validator__msg__PlanningValidatorStatus * data = NULL;

  if (size) {
    data = (planning_validator__msg__PlanningValidatorStatus *)allocator.zero_allocate(size, sizeof(planning_validator__msg__PlanningValidatorStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planning_validator__msg__PlanningValidatorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planning_validator__msg__PlanningValidatorStatus__fini(&data[i - 1]);
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
planning_validator__msg__PlanningValidatorStatus__Sequence__fini(planning_validator__msg__PlanningValidatorStatus__Sequence * array)
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
      planning_validator__msg__PlanningValidatorStatus__fini(&array->data[i]);
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

planning_validator__msg__PlanningValidatorStatus__Sequence *
planning_validator__msg__PlanningValidatorStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planning_validator__msg__PlanningValidatorStatus__Sequence * array = (planning_validator__msg__PlanningValidatorStatus__Sequence *)allocator.allocate(sizeof(planning_validator__msg__PlanningValidatorStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = planning_validator__msg__PlanningValidatorStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
planning_validator__msg__PlanningValidatorStatus__Sequence__destroy(planning_validator__msg__PlanningValidatorStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    planning_validator__msg__PlanningValidatorStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
planning_validator__msg__PlanningValidatorStatus__Sequence__are_equal(const planning_validator__msg__PlanningValidatorStatus__Sequence * lhs, const planning_validator__msg__PlanningValidatorStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!planning_validator__msg__PlanningValidatorStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
planning_validator__msg__PlanningValidatorStatus__Sequence__copy(
  const planning_validator__msg__PlanningValidatorStatus__Sequence * input,
  planning_validator__msg__PlanningValidatorStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(planning_validator__msg__PlanningValidatorStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    planning_validator__msg__PlanningValidatorStatus * data =
      (planning_validator__msg__PlanningValidatorStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!planning_validator__msg__PlanningValidatorStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          planning_validator__msg__PlanningValidatorStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!planning_validator__msg__PlanningValidatorStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
