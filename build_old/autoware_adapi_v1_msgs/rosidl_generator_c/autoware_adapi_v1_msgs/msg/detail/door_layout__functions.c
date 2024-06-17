// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_adapi_v1_msgs:msg/DoorLayout.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/msg/detail/door_layout__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `roles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `description`
#include "rosidl_runtime_c/string_functions.h"

bool
autoware_adapi_v1_msgs__msg__DoorLayout__init(autoware_adapi_v1_msgs__msg__DoorLayout * msg)
{
  if (!msg) {
    return false;
  }
  // roles
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->roles, 0)) {
    autoware_adapi_v1_msgs__msg__DoorLayout__fini(msg);
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    autoware_adapi_v1_msgs__msg__DoorLayout__fini(msg);
    return false;
  }
  return true;
}

void
autoware_adapi_v1_msgs__msg__DoorLayout__fini(autoware_adapi_v1_msgs__msg__DoorLayout * msg)
{
  if (!msg) {
    return;
  }
  // roles
  rosidl_runtime_c__uint8__Sequence__fini(&msg->roles);
  // description
  rosidl_runtime_c__String__fini(&msg->description);
}

bool
autoware_adapi_v1_msgs__msg__DoorLayout__are_equal(const autoware_adapi_v1_msgs__msg__DoorLayout * lhs, const autoware_adapi_v1_msgs__msg__DoorLayout * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // roles
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->roles), &(rhs->roles)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__DoorLayout__copy(
  const autoware_adapi_v1_msgs__msg__DoorLayout * input,
  autoware_adapi_v1_msgs__msg__DoorLayout * output)
{
  if (!input || !output) {
    return false;
  }
  // roles
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->roles), &(output->roles)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  return true;
}

autoware_adapi_v1_msgs__msg__DoorLayout *
autoware_adapi_v1_msgs__msg__DoorLayout__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__DoorLayout * msg = (autoware_adapi_v1_msgs__msg__DoorLayout *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__msg__DoorLayout), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_adapi_v1_msgs__msg__DoorLayout));
  bool success = autoware_adapi_v1_msgs__msg__DoorLayout__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_adapi_v1_msgs__msg__DoorLayout__destroy(autoware_adapi_v1_msgs__msg__DoorLayout * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_adapi_v1_msgs__msg__DoorLayout__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_adapi_v1_msgs__msg__DoorLayout__Sequence__init(autoware_adapi_v1_msgs__msg__DoorLayout__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__DoorLayout * data = NULL;

  if (size) {
    data = (autoware_adapi_v1_msgs__msg__DoorLayout *)allocator.zero_allocate(size, sizeof(autoware_adapi_v1_msgs__msg__DoorLayout), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_adapi_v1_msgs__msg__DoorLayout__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_adapi_v1_msgs__msg__DoorLayout__fini(&data[i - 1]);
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
autoware_adapi_v1_msgs__msg__DoorLayout__Sequence__fini(autoware_adapi_v1_msgs__msg__DoorLayout__Sequence * array)
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
      autoware_adapi_v1_msgs__msg__DoorLayout__fini(&array->data[i]);
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

autoware_adapi_v1_msgs__msg__DoorLayout__Sequence *
autoware_adapi_v1_msgs__msg__DoorLayout__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__DoorLayout__Sequence * array = (autoware_adapi_v1_msgs__msg__DoorLayout__Sequence *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__msg__DoorLayout__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_adapi_v1_msgs__msg__DoorLayout__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_adapi_v1_msgs__msg__DoorLayout__Sequence__destroy(autoware_adapi_v1_msgs__msg__DoorLayout__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_adapi_v1_msgs__msg__DoorLayout__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_adapi_v1_msgs__msg__DoorLayout__Sequence__are_equal(const autoware_adapi_v1_msgs__msg__DoorLayout__Sequence * lhs, const autoware_adapi_v1_msgs__msg__DoorLayout__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__DoorLayout__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__DoorLayout__Sequence__copy(
  const autoware_adapi_v1_msgs__msg__DoorLayout__Sequence * input,
  autoware_adapi_v1_msgs__msg__DoorLayout__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_adapi_v1_msgs__msg__DoorLayout);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_adapi_v1_msgs__msg__DoorLayout * data =
      (autoware_adapi_v1_msgs__msg__DoorLayout *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_adapi_v1_msgs__msg__DoorLayout__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_adapi_v1_msgs__msg__DoorLayout__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__DoorLayout__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
