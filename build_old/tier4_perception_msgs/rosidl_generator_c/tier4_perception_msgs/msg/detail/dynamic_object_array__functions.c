// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_perception_msgs:msg/DynamicObjectArray.idl
// generated code does not contain a copyright notice
#include "tier4_perception_msgs/msg/detail/dynamic_object_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `objects`
#include "tier4_perception_msgs/msg/detail/dynamic_object__functions.h"

bool
tier4_perception_msgs__msg__DynamicObjectArray__init(tier4_perception_msgs__msg__DynamicObjectArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tier4_perception_msgs__msg__DynamicObjectArray__fini(msg);
    return false;
  }
  // objects
  if (!tier4_perception_msgs__msg__DynamicObject__Sequence__init(&msg->objects, 0)) {
    tier4_perception_msgs__msg__DynamicObjectArray__fini(msg);
    return false;
  }
  return true;
}

void
tier4_perception_msgs__msg__DynamicObjectArray__fini(tier4_perception_msgs__msg__DynamicObjectArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // objects
  tier4_perception_msgs__msg__DynamicObject__Sequence__fini(&msg->objects);
}

bool
tier4_perception_msgs__msg__DynamicObjectArray__are_equal(const tier4_perception_msgs__msg__DynamicObjectArray * lhs, const tier4_perception_msgs__msg__DynamicObjectArray * rhs)
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
  // objects
  if (!tier4_perception_msgs__msg__DynamicObject__Sequence__are_equal(
      &(lhs->objects), &(rhs->objects)))
  {
    return false;
  }
  return true;
}

bool
tier4_perception_msgs__msg__DynamicObjectArray__copy(
  const tier4_perception_msgs__msg__DynamicObjectArray * input,
  tier4_perception_msgs__msg__DynamicObjectArray * output)
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
  // objects
  if (!tier4_perception_msgs__msg__DynamicObject__Sequence__copy(
      &(input->objects), &(output->objects)))
  {
    return false;
  }
  return true;
}

tier4_perception_msgs__msg__DynamicObjectArray *
tier4_perception_msgs__msg__DynamicObjectArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_perception_msgs__msg__DynamicObjectArray * msg = (tier4_perception_msgs__msg__DynamicObjectArray *)allocator.allocate(sizeof(tier4_perception_msgs__msg__DynamicObjectArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_perception_msgs__msg__DynamicObjectArray));
  bool success = tier4_perception_msgs__msg__DynamicObjectArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_perception_msgs__msg__DynamicObjectArray__destroy(tier4_perception_msgs__msg__DynamicObjectArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_perception_msgs__msg__DynamicObjectArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_perception_msgs__msg__DynamicObjectArray__Sequence__init(tier4_perception_msgs__msg__DynamicObjectArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_perception_msgs__msg__DynamicObjectArray * data = NULL;

  if (size) {
    data = (tier4_perception_msgs__msg__DynamicObjectArray *)allocator.zero_allocate(size, sizeof(tier4_perception_msgs__msg__DynamicObjectArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_perception_msgs__msg__DynamicObjectArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_perception_msgs__msg__DynamicObjectArray__fini(&data[i - 1]);
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
tier4_perception_msgs__msg__DynamicObjectArray__Sequence__fini(tier4_perception_msgs__msg__DynamicObjectArray__Sequence * array)
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
      tier4_perception_msgs__msg__DynamicObjectArray__fini(&array->data[i]);
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

tier4_perception_msgs__msg__DynamicObjectArray__Sequence *
tier4_perception_msgs__msg__DynamicObjectArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_perception_msgs__msg__DynamicObjectArray__Sequence * array = (tier4_perception_msgs__msg__DynamicObjectArray__Sequence *)allocator.allocate(sizeof(tier4_perception_msgs__msg__DynamicObjectArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_perception_msgs__msg__DynamicObjectArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_perception_msgs__msg__DynamicObjectArray__Sequence__destroy(tier4_perception_msgs__msg__DynamicObjectArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_perception_msgs__msg__DynamicObjectArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_perception_msgs__msg__DynamicObjectArray__Sequence__are_equal(const tier4_perception_msgs__msg__DynamicObjectArray__Sequence * lhs, const tier4_perception_msgs__msg__DynamicObjectArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_perception_msgs__msg__DynamicObjectArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_perception_msgs__msg__DynamicObjectArray__Sequence__copy(
  const tier4_perception_msgs__msg__DynamicObjectArray__Sequence * input,
  tier4_perception_msgs__msg__DynamicObjectArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_perception_msgs__msg__DynamicObjectArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tier4_perception_msgs__msg__DynamicObjectArray * data =
      (tier4_perception_msgs__msg__DynamicObjectArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_perception_msgs__msg__DynamicObjectArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tier4_perception_msgs__msg__DynamicObjectArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_perception_msgs__msg__DynamicObjectArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
