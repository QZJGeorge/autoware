// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vehicle_cmd_gate:msg/IsFilterActivated.idl
// generated code does not contain a copyright notice
#include "vehicle_cmd_gate/msg/detail/is_filter_activated__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
vehicle_cmd_gate__msg__IsFilterActivated__init(vehicle_cmd_gate__msg__IsFilterActivated * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    vehicle_cmd_gate__msg__IsFilterActivated__fini(msg);
    return false;
  }
  // is_activated
  // is_activated_on_steering
  // is_activated_on_steering_rate
  // is_activated_on_speed
  // is_activated_on_acceleration
  // is_activated_on_jerk
  return true;
}

void
vehicle_cmd_gate__msg__IsFilterActivated__fini(vehicle_cmd_gate__msg__IsFilterActivated * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // is_activated
  // is_activated_on_steering
  // is_activated_on_steering_rate
  // is_activated_on_speed
  // is_activated_on_acceleration
  // is_activated_on_jerk
}

bool
vehicle_cmd_gate__msg__IsFilterActivated__are_equal(const vehicle_cmd_gate__msg__IsFilterActivated * lhs, const vehicle_cmd_gate__msg__IsFilterActivated * rhs)
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
  // is_activated
  if (lhs->is_activated != rhs->is_activated) {
    return false;
  }
  // is_activated_on_steering
  if (lhs->is_activated_on_steering != rhs->is_activated_on_steering) {
    return false;
  }
  // is_activated_on_steering_rate
  if (lhs->is_activated_on_steering_rate != rhs->is_activated_on_steering_rate) {
    return false;
  }
  // is_activated_on_speed
  if (lhs->is_activated_on_speed != rhs->is_activated_on_speed) {
    return false;
  }
  // is_activated_on_acceleration
  if (lhs->is_activated_on_acceleration != rhs->is_activated_on_acceleration) {
    return false;
  }
  // is_activated_on_jerk
  if (lhs->is_activated_on_jerk != rhs->is_activated_on_jerk) {
    return false;
  }
  return true;
}

bool
vehicle_cmd_gate__msg__IsFilterActivated__copy(
  const vehicle_cmd_gate__msg__IsFilterActivated * input,
  vehicle_cmd_gate__msg__IsFilterActivated * output)
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
  // is_activated
  output->is_activated = input->is_activated;
  // is_activated_on_steering
  output->is_activated_on_steering = input->is_activated_on_steering;
  // is_activated_on_steering_rate
  output->is_activated_on_steering_rate = input->is_activated_on_steering_rate;
  // is_activated_on_speed
  output->is_activated_on_speed = input->is_activated_on_speed;
  // is_activated_on_acceleration
  output->is_activated_on_acceleration = input->is_activated_on_acceleration;
  // is_activated_on_jerk
  output->is_activated_on_jerk = input->is_activated_on_jerk;
  return true;
}

vehicle_cmd_gate__msg__IsFilterActivated *
vehicle_cmd_gate__msg__IsFilterActivated__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vehicle_cmd_gate__msg__IsFilterActivated * msg = (vehicle_cmd_gate__msg__IsFilterActivated *)allocator.allocate(sizeof(vehicle_cmd_gate__msg__IsFilterActivated), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vehicle_cmd_gate__msg__IsFilterActivated));
  bool success = vehicle_cmd_gate__msg__IsFilterActivated__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vehicle_cmd_gate__msg__IsFilterActivated__destroy(vehicle_cmd_gate__msg__IsFilterActivated * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vehicle_cmd_gate__msg__IsFilterActivated__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vehicle_cmd_gate__msg__IsFilterActivated__Sequence__init(vehicle_cmd_gate__msg__IsFilterActivated__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vehicle_cmd_gate__msg__IsFilterActivated * data = NULL;

  if (size) {
    data = (vehicle_cmd_gate__msg__IsFilterActivated *)allocator.zero_allocate(size, sizeof(vehicle_cmd_gate__msg__IsFilterActivated), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vehicle_cmd_gate__msg__IsFilterActivated__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vehicle_cmd_gate__msg__IsFilterActivated__fini(&data[i - 1]);
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
vehicle_cmd_gate__msg__IsFilterActivated__Sequence__fini(vehicle_cmd_gate__msg__IsFilterActivated__Sequence * array)
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
      vehicle_cmd_gate__msg__IsFilterActivated__fini(&array->data[i]);
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

vehicle_cmd_gate__msg__IsFilterActivated__Sequence *
vehicle_cmd_gate__msg__IsFilterActivated__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vehicle_cmd_gate__msg__IsFilterActivated__Sequence * array = (vehicle_cmd_gate__msg__IsFilterActivated__Sequence *)allocator.allocate(sizeof(vehicle_cmd_gate__msg__IsFilterActivated__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vehicle_cmd_gate__msg__IsFilterActivated__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vehicle_cmd_gate__msg__IsFilterActivated__Sequence__destroy(vehicle_cmd_gate__msg__IsFilterActivated__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vehicle_cmd_gate__msg__IsFilterActivated__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vehicle_cmd_gate__msg__IsFilterActivated__Sequence__are_equal(const vehicle_cmd_gate__msg__IsFilterActivated__Sequence * lhs, const vehicle_cmd_gate__msg__IsFilterActivated__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vehicle_cmd_gate__msg__IsFilterActivated__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vehicle_cmd_gate__msg__IsFilterActivated__Sequence__copy(
  const vehicle_cmd_gate__msg__IsFilterActivated__Sequence * input,
  vehicle_cmd_gate__msg__IsFilterActivated__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vehicle_cmd_gate__msg__IsFilterActivated);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vehicle_cmd_gate__msg__IsFilterActivated * data =
      (vehicle_cmd_gate__msg__IsFilterActivated *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vehicle_cmd_gate__msg__IsFilterActivated__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vehicle_cmd_gate__msg__IsFilterActivated__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vehicle_cmd_gate__msg__IsFilterActivated__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
