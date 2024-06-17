// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_perception_msgs:msg/DynamicObject.idl
// generated code does not contain a copyright notice
#include "tier4_perception_msgs/msg/detail/dynamic_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `semantic`
#include "tier4_perception_msgs/msg/detail/semantic__functions.h"
// Member `state`
#include "tier4_perception_msgs/msg/detail/state__functions.h"
// Member `shape`
#include "tier4_perception_msgs/msg/detail/shape__functions.h"

bool
tier4_perception_msgs__msg__DynamicObject__init(tier4_perception_msgs__msg__DynamicObject * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->id)) {
    tier4_perception_msgs__msg__DynamicObject__fini(msg);
    return false;
  }
  // semantic
  if (!tier4_perception_msgs__msg__Semantic__init(&msg->semantic)) {
    tier4_perception_msgs__msg__DynamicObject__fini(msg);
    return false;
  }
  // state
  if (!tier4_perception_msgs__msg__State__init(&msg->state)) {
    tier4_perception_msgs__msg__DynamicObject__fini(msg);
    return false;
  }
  // shape
  if (!tier4_perception_msgs__msg__Shape__init(&msg->shape)) {
    tier4_perception_msgs__msg__DynamicObject__fini(msg);
    return false;
  }
  return true;
}

void
tier4_perception_msgs__msg__DynamicObject__fini(tier4_perception_msgs__msg__DynamicObject * msg)
{
  if (!msg) {
    return;
  }
  // id
  unique_identifier_msgs__msg__UUID__fini(&msg->id);
  // semantic
  tier4_perception_msgs__msg__Semantic__fini(&msg->semantic);
  // state
  tier4_perception_msgs__msg__State__fini(&msg->state);
  // shape
  tier4_perception_msgs__msg__Shape__fini(&msg->shape);
}

bool
tier4_perception_msgs__msg__DynamicObject__are_equal(const tier4_perception_msgs__msg__DynamicObject * lhs, const tier4_perception_msgs__msg__DynamicObject * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // semantic
  if (!tier4_perception_msgs__msg__Semantic__are_equal(
      &(lhs->semantic), &(rhs->semantic)))
  {
    return false;
  }
  // state
  if (!tier4_perception_msgs__msg__State__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // shape
  if (!tier4_perception_msgs__msg__Shape__are_equal(
      &(lhs->shape), &(rhs->shape)))
  {
    return false;
  }
  return true;
}

bool
tier4_perception_msgs__msg__DynamicObject__copy(
  const tier4_perception_msgs__msg__DynamicObject * input,
  tier4_perception_msgs__msg__DynamicObject * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // semantic
  if (!tier4_perception_msgs__msg__Semantic__copy(
      &(input->semantic), &(output->semantic)))
  {
    return false;
  }
  // state
  if (!tier4_perception_msgs__msg__State__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // shape
  if (!tier4_perception_msgs__msg__Shape__copy(
      &(input->shape), &(output->shape)))
  {
    return false;
  }
  return true;
}

tier4_perception_msgs__msg__DynamicObject *
tier4_perception_msgs__msg__DynamicObject__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_perception_msgs__msg__DynamicObject * msg = (tier4_perception_msgs__msg__DynamicObject *)allocator.allocate(sizeof(tier4_perception_msgs__msg__DynamicObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_perception_msgs__msg__DynamicObject));
  bool success = tier4_perception_msgs__msg__DynamicObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_perception_msgs__msg__DynamicObject__destroy(tier4_perception_msgs__msg__DynamicObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_perception_msgs__msg__DynamicObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_perception_msgs__msg__DynamicObject__Sequence__init(tier4_perception_msgs__msg__DynamicObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_perception_msgs__msg__DynamicObject * data = NULL;

  if (size) {
    data = (tier4_perception_msgs__msg__DynamicObject *)allocator.zero_allocate(size, sizeof(tier4_perception_msgs__msg__DynamicObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_perception_msgs__msg__DynamicObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_perception_msgs__msg__DynamicObject__fini(&data[i - 1]);
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
tier4_perception_msgs__msg__DynamicObject__Sequence__fini(tier4_perception_msgs__msg__DynamicObject__Sequence * array)
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
      tier4_perception_msgs__msg__DynamicObject__fini(&array->data[i]);
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

tier4_perception_msgs__msg__DynamicObject__Sequence *
tier4_perception_msgs__msg__DynamicObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_perception_msgs__msg__DynamicObject__Sequence * array = (tier4_perception_msgs__msg__DynamicObject__Sequence *)allocator.allocate(sizeof(tier4_perception_msgs__msg__DynamicObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_perception_msgs__msg__DynamicObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_perception_msgs__msg__DynamicObject__Sequence__destroy(tier4_perception_msgs__msg__DynamicObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_perception_msgs__msg__DynamicObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_perception_msgs__msg__DynamicObject__Sequence__are_equal(const tier4_perception_msgs__msg__DynamicObject__Sequence * lhs, const tier4_perception_msgs__msg__DynamicObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_perception_msgs__msg__DynamicObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_perception_msgs__msg__DynamicObject__Sequence__copy(
  const tier4_perception_msgs__msg__DynamicObject__Sequence * input,
  tier4_perception_msgs__msg__DynamicObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_perception_msgs__msg__DynamicObject);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tier4_perception_msgs__msg__DynamicObject * data =
      (tier4_perception_msgs__msg__DynamicObject *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_perception_msgs__msg__DynamicObject__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tier4_perception_msgs__msg__DynamicObject__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_perception_msgs__msg__DynamicObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
