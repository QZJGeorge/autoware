// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_validator:msg/ControlValidatorStatus.idl
// generated code does not contain a copyright notice
#include "control_validator/msg/detail/control_validator_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
control_validator__msg__ControlValidatorStatus__init(control_validator__msg__ControlValidatorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    control_validator__msg__ControlValidatorStatus__fini(msg);
    return false;
  }
  // is_valid_max_distance_deviation
  // max_distance_deviation
  // invalid_count
  return true;
}

void
control_validator__msg__ControlValidatorStatus__fini(control_validator__msg__ControlValidatorStatus * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // is_valid_max_distance_deviation
  // max_distance_deviation
  // invalid_count
}

bool
control_validator__msg__ControlValidatorStatus__are_equal(const control_validator__msg__ControlValidatorStatus * lhs, const control_validator__msg__ControlValidatorStatus * rhs)
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
  // is_valid_max_distance_deviation
  if (lhs->is_valid_max_distance_deviation != rhs->is_valid_max_distance_deviation) {
    return false;
  }
  // max_distance_deviation
  if (lhs->max_distance_deviation != rhs->max_distance_deviation) {
    return false;
  }
  // invalid_count
  if (lhs->invalid_count != rhs->invalid_count) {
    return false;
  }
  return true;
}

bool
control_validator__msg__ControlValidatorStatus__copy(
  const control_validator__msg__ControlValidatorStatus * input,
  control_validator__msg__ControlValidatorStatus * output)
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
  // is_valid_max_distance_deviation
  output->is_valid_max_distance_deviation = input->is_valid_max_distance_deviation;
  // max_distance_deviation
  output->max_distance_deviation = input->max_distance_deviation;
  // invalid_count
  output->invalid_count = input->invalid_count;
  return true;
}

control_validator__msg__ControlValidatorStatus *
control_validator__msg__ControlValidatorStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_validator__msg__ControlValidatorStatus * msg = (control_validator__msg__ControlValidatorStatus *)allocator.allocate(sizeof(control_validator__msg__ControlValidatorStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_validator__msg__ControlValidatorStatus));
  bool success = control_validator__msg__ControlValidatorStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_validator__msg__ControlValidatorStatus__destroy(control_validator__msg__ControlValidatorStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_validator__msg__ControlValidatorStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_validator__msg__ControlValidatorStatus__Sequence__init(control_validator__msg__ControlValidatorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_validator__msg__ControlValidatorStatus * data = NULL;

  if (size) {
    data = (control_validator__msg__ControlValidatorStatus *)allocator.zero_allocate(size, sizeof(control_validator__msg__ControlValidatorStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_validator__msg__ControlValidatorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_validator__msg__ControlValidatorStatus__fini(&data[i - 1]);
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
control_validator__msg__ControlValidatorStatus__Sequence__fini(control_validator__msg__ControlValidatorStatus__Sequence * array)
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
      control_validator__msg__ControlValidatorStatus__fini(&array->data[i]);
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

control_validator__msg__ControlValidatorStatus__Sequence *
control_validator__msg__ControlValidatorStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_validator__msg__ControlValidatorStatus__Sequence * array = (control_validator__msg__ControlValidatorStatus__Sequence *)allocator.allocate(sizeof(control_validator__msg__ControlValidatorStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_validator__msg__ControlValidatorStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_validator__msg__ControlValidatorStatus__Sequence__destroy(control_validator__msg__ControlValidatorStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_validator__msg__ControlValidatorStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_validator__msg__ControlValidatorStatus__Sequence__are_equal(const control_validator__msg__ControlValidatorStatus__Sequence * lhs, const control_validator__msg__ControlValidatorStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_validator__msg__ControlValidatorStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_validator__msg__ControlValidatorStatus__Sequence__copy(
  const control_validator__msg__ControlValidatorStatus__Sequence * input,
  control_validator__msg__ControlValidatorStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_validator__msg__ControlValidatorStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_validator__msg__ControlValidatorStatus * data =
      (control_validator__msg__ControlValidatorStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_validator__msg__ControlValidatorStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_validator__msg__ControlValidatorStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_validator__msg__ControlValidatorStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
