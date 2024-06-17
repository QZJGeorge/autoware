// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_performance_analysis:msg/Error.idl
// generated code does not contain a copyright notice
#include "control_performance_analysis/msg/detail/error__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
control_performance_analysis__msg__Error__init(control_performance_analysis__msg__Error * msg)
{
  if (!msg) {
    return false;
  }
  // lateral_error
  // lateral_error_velocity
  // lateral_error_acceleration
  // longitudinal_error
  // longitudinal_error_velocity
  // longitudinal_error_acceleration
  // heading_error
  // heading_error_velocity
  // control_effort_energy
  // error_energy
  // value_approximation
  // curvature_estimate
  // curvature_estimate_pp
  // vehicle_velocity_error
  // tracking_curvature_discontinuity_ability
  return true;
}

void
control_performance_analysis__msg__Error__fini(control_performance_analysis__msg__Error * msg)
{
  if (!msg) {
    return;
  }
  // lateral_error
  // lateral_error_velocity
  // lateral_error_acceleration
  // longitudinal_error
  // longitudinal_error_velocity
  // longitudinal_error_acceleration
  // heading_error
  // heading_error_velocity
  // control_effort_energy
  // error_energy
  // value_approximation
  // curvature_estimate
  // curvature_estimate_pp
  // vehicle_velocity_error
  // tracking_curvature_discontinuity_ability
}

bool
control_performance_analysis__msg__Error__are_equal(const control_performance_analysis__msg__Error * lhs, const control_performance_analysis__msg__Error * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lateral_error
  if (lhs->lateral_error != rhs->lateral_error) {
    return false;
  }
  // lateral_error_velocity
  if (lhs->lateral_error_velocity != rhs->lateral_error_velocity) {
    return false;
  }
  // lateral_error_acceleration
  if (lhs->lateral_error_acceleration != rhs->lateral_error_acceleration) {
    return false;
  }
  // longitudinal_error
  if (lhs->longitudinal_error != rhs->longitudinal_error) {
    return false;
  }
  // longitudinal_error_velocity
  if (lhs->longitudinal_error_velocity != rhs->longitudinal_error_velocity) {
    return false;
  }
  // longitudinal_error_acceleration
  if (lhs->longitudinal_error_acceleration != rhs->longitudinal_error_acceleration) {
    return false;
  }
  // heading_error
  if (lhs->heading_error != rhs->heading_error) {
    return false;
  }
  // heading_error_velocity
  if (lhs->heading_error_velocity != rhs->heading_error_velocity) {
    return false;
  }
  // control_effort_energy
  if (lhs->control_effort_energy != rhs->control_effort_energy) {
    return false;
  }
  // error_energy
  if (lhs->error_energy != rhs->error_energy) {
    return false;
  }
  // value_approximation
  if (lhs->value_approximation != rhs->value_approximation) {
    return false;
  }
  // curvature_estimate
  if (lhs->curvature_estimate != rhs->curvature_estimate) {
    return false;
  }
  // curvature_estimate_pp
  if (lhs->curvature_estimate_pp != rhs->curvature_estimate_pp) {
    return false;
  }
  // vehicle_velocity_error
  if (lhs->vehicle_velocity_error != rhs->vehicle_velocity_error) {
    return false;
  }
  // tracking_curvature_discontinuity_ability
  if (lhs->tracking_curvature_discontinuity_ability != rhs->tracking_curvature_discontinuity_ability) {
    return false;
  }
  return true;
}

bool
control_performance_analysis__msg__Error__copy(
  const control_performance_analysis__msg__Error * input,
  control_performance_analysis__msg__Error * output)
{
  if (!input || !output) {
    return false;
  }
  // lateral_error
  output->lateral_error = input->lateral_error;
  // lateral_error_velocity
  output->lateral_error_velocity = input->lateral_error_velocity;
  // lateral_error_acceleration
  output->lateral_error_acceleration = input->lateral_error_acceleration;
  // longitudinal_error
  output->longitudinal_error = input->longitudinal_error;
  // longitudinal_error_velocity
  output->longitudinal_error_velocity = input->longitudinal_error_velocity;
  // longitudinal_error_acceleration
  output->longitudinal_error_acceleration = input->longitudinal_error_acceleration;
  // heading_error
  output->heading_error = input->heading_error;
  // heading_error_velocity
  output->heading_error_velocity = input->heading_error_velocity;
  // control_effort_energy
  output->control_effort_energy = input->control_effort_energy;
  // error_energy
  output->error_energy = input->error_energy;
  // value_approximation
  output->value_approximation = input->value_approximation;
  // curvature_estimate
  output->curvature_estimate = input->curvature_estimate;
  // curvature_estimate_pp
  output->curvature_estimate_pp = input->curvature_estimate_pp;
  // vehicle_velocity_error
  output->vehicle_velocity_error = input->vehicle_velocity_error;
  // tracking_curvature_discontinuity_ability
  output->tracking_curvature_discontinuity_ability = input->tracking_curvature_discontinuity_ability;
  return true;
}

control_performance_analysis__msg__Error *
control_performance_analysis__msg__Error__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_performance_analysis__msg__Error * msg = (control_performance_analysis__msg__Error *)allocator.allocate(sizeof(control_performance_analysis__msg__Error), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_performance_analysis__msg__Error));
  bool success = control_performance_analysis__msg__Error__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_performance_analysis__msg__Error__destroy(control_performance_analysis__msg__Error * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_performance_analysis__msg__Error__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_performance_analysis__msg__Error__Sequence__init(control_performance_analysis__msg__Error__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_performance_analysis__msg__Error * data = NULL;

  if (size) {
    data = (control_performance_analysis__msg__Error *)allocator.zero_allocate(size, sizeof(control_performance_analysis__msg__Error), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_performance_analysis__msg__Error__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_performance_analysis__msg__Error__fini(&data[i - 1]);
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
control_performance_analysis__msg__Error__Sequence__fini(control_performance_analysis__msg__Error__Sequence * array)
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
      control_performance_analysis__msg__Error__fini(&array->data[i]);
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

control_performance_analysis__msg__Error__Sequence *
control_performance_analysis__msg__Error__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_performance_analysis__msg__Error__Sequence * array = (control_performance_analysis__msg__Error__Sequence *)allocator.allocate(sizeof(control_performance_analysis__msg__Error__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_performance_analysis__msg__Error__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_performance_analysis__msg__Error__Sequence__destroy(control_performance_analysis__msg__Error__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_performance_analysis__msg__Error__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_performance_analysis__msg__Error__Sequence__are_equal(const control_performance_analysis__msg__Error__Sequence * lhs, const control_performance_analysis__msg__Error__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_performance_analysis__msg__Error__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_performance_analysis__msg__Error__Sequence__copy(
  const control_performance_analysis__msg__Error__Sequence * input,
  control_performance_analysis__msg__Error__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_performance_analysis__msg__Error);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_performance_analysis__msg__Error * data =
      (control_performance_analysis__msg__Error *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_performance_analysis__msg__Error__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_performance_analysis__msg__Error__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_performance_analysis__msg__Error__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
