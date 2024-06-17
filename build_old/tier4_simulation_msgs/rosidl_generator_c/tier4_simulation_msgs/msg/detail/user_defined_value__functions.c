// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_simulation_msgs:msg/UserDefinedValue.idl
// generated code does not contain a copyright notice
#include "tier4_simulation_msgs/msg/detail/user_defined_value__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
#include "tier4_simulation_msgs/msg/detail/user_defined_value_type__functions.h"
// Member `value`
#include "rosidl_runtime_c/string_functions.h"

bool
tier4_simulation_msgs__msg__UserDefinedValue__init(tier4_simulation_msgs__msg__UserDefinedValue * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!tier4_simulation_msgs__msg__UserDefinedValueType__init(&msg->type)) {
    tier4_simulation_msgs__msg__UserDefinedValue__fini(msg);
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__init(&msg->value)) {
    tier4_simulation_msgs__msg__UserDefinedValue__fini(msg);
    return false;
  }
  return true;
}

void
tier4_simulation_msgs__msg__UserDefinedValue__fini(tier4_simulation_msgs__msg__UserDefinedValue * msg)
{
  if (!msg) {
    return;
  }
  // type
  tier4_simulation_msgs__msg__UserDefinedValueType__fini(&msg->type);
  // value
  rosidl_runtime_c__String__fini(&msg->value);
}

bool
tier4_simulation_msgs__msg__UserDefinedValue__are_equal(const tier4_simulation_msgs__msg__UserDefinedValue * lhs, const tier4_simulation_msgs__msg__UserDefinedValue * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (!tier4_simulation_msgs__msg__UserDefinedValueType__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->value), &(rhs->value)))
  {
    return false;
  }
  return true;
}

bool
tier4_simulation_msgs__msg__UserDefinedValue__copy(
  const tier4_simulation_msgs__msg__UserDefinedValue * input,
  tier4_simulation_msgs__msg__UserDefinedValue * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  if (!tier4_simulation_msgs__msg__UserDefinedValueType__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__copy(
      &(input->value), &(output->value)))
  {
    return false;
  }
  return true;
}

tier4_simulation_msgs__msg__UserDefinedValue *
tier4_simulation_msgs__msg__UserDefinedValue__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_simulation_msgs__msg__UserDefinedValue * msg = (tier4_simulation_msgs__msg__UserDefinedValue *)allocator.allocate(sizeof(tier4_simulation_msgs__msg__UserDefinedValue), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_simulation_msgs__msg__UserDefinedValue));
  bool success = tier4_simulation_msgs__msg__UserDefinedValue__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_simulation_msgs__msg__UserDefinedValue__destroy(tier4_simulation_msgs__msg__UserDefinedValue * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_simulation_msgs__msg__UserDefinedValue__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_simulation_msgs__msg__UserDefinedValue__Sequence__init(tier4_simulation_msgs__msg__UserDefinedValue__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_simulation_msgs__msg__UserDefinedValue * data = NULL;

  if (size) {
    data = (tier4_simulation_msgs__msg__UserDefinedValue *)allocator.zero_allocate(size, sizeof(tier4_simulation_msgs__msg__UserDefinedValue), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_simulation_msgs__msg__UserDefinedValue__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_simulation_msgs__msg__UserDefinedValue__fini(&data[i - 1]);
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
tier4_simulation_msgs__msg__UserDefinedValue__Sequence__fini(tier4_simulation_msgs__msg__UserDefinedValue__Sequence * array)
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
      tier4_simulation_msgs__msg__UserDefinedValue__fini(&array->data[i]);
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

tier4_simulation_msgs__msg__UserDefinedValue__Sequence *
tier4_simulation_msgs__msg__UserDefinedValue__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_simulation_msgs__msg__UserDefinedValue__Sequence * array = (tier4_simulation_msgs__msg__UserDefinedValue__Sequence *)allocator.allocate(sizeof(tier4_simulation_msgs__msg__UserDefinedValue__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_simulation_msgs__msg__UserDefinedValue__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_simulation_msgs__msg__UserDefinedValue__Sequence__destroy(tier4_simulation_msgs__msg__UserDefinedValue__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_simulation_msgs__msg__UserDefinedValue__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_simulation_msgs__msg__UserDefinedValue__Sequence__are_equal(const tier4_simulation_msgs__msg__UserDefinedValue__Sequence * lhs, const tier4_simulation_msgs__msg__UserDefinedValue__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_simulation_msgs__msg__UserDefinedValue__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_simulation_msgs__msg__UserDefinedValue__Sequence__copy(
  const tier4_simulation_msgs__msg__UserDefinedValue__Sequence * input,
  tier4_simulation_msgs__msg__UserDefinedValue__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_simulation_msgs__msg__UserDefinedValue);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tier4_simulation_msgs__msg__UserDefinedValue * data =
      (tier4_simulation_msgs__msg__UserDefinedValue *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_simulation_msgs__msg__UserDefinedValue__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tier4_simulation_msgs__msg__UserDefinedValue__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_simulation_msgs__msg__UserDefinedValue__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
