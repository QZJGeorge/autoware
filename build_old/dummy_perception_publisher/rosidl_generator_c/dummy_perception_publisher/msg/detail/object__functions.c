// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dummy_perception_publisher:msg/Object.idl
// generated code does not contain a copyright notice
#include "dummy_perception_publisher/msg/detail/object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `initial_state`
#include "dummy_perception_publisher/msg/detail/initial_state__functions.h"
// Member `classification`
#include "autoware_auto_perception_msgs/msg/detail/object_classification__functions.h"
// Member `shape`
#include "autoware_auto_perception_msgs/msg/detail/shape__functions.h"

bool
dummy_perception_publisher__msg__Object__init(dummy_perception_publisher__msg__Object * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    dummy_perception_publisher__msg__Object__fini(msg);
    return false;
  }
  // id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->id)) {
    dummy_perception_publisher__msg__Object__fini(msg);
    return false;
  }
  // initial_state
  if (!dummy_perception_publisher__msg__InitialState__init(&msg->initial_state)) {
    dummy_perception_publisher__msg__Object__fini(msg);
    return false;
  }
  // classification
  if (!autoware_auto_perception_msgs__msg__ObjectClassification__init(&msg->classification)) {
    dummy_perception_publisher__msg__Object__fini(msg);
    return false;
  }
  // shape
  if (!autoware_auto_perception_msgs__msg__Shape__init(&msg->shape)) {
    dummy_perception_publisher__msg__Object__fini(msg);
    return false;
  }
  // max_velocity
  // min_velocity
  // action
  return true;
}

void
dummy_perception_publisher__msg__Object__fini(dummy_perception_publisher__msg__Object * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  unique_identifier_msgs__msg__UUID__fini(&msg->id);
  // initial_state
  dummy_perception_publisher__msg__InitialState__fini(&msg->initial_state);
  // classification
  autoware_auto_perception_msgs__msg__ObjectClassification__fini(&msg->classification);
  // shape
  autoware_auto_perception_msgs__msg__Shape__fini(&msg->shape);
  // max_velocity
  // min_velocity
  // action
}

bool
dummy_perception_publisher__msg__Object__are_equal(const dummy_perception_publisher__msg__Object * lhs, const dummy_perception_publisher__msg__Object * rhs)
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
  // id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // initial_state
  if (!dummy_perception_publisher__msg__InitialState__are_equal(
      &(lhs->initial_state), &(rhs->initial_state)))
  {
    return false;
  }
  // classification
  if (!autoware_auto_perception_msgs__msg__ObjectClassification__are_equal(
      &(lhs->classification), &(rhs->classification)))
  {
    return false;
  }
  // shape
  if (!autoware_auto_perception_msgs__msg__Shape__are_equal(
      &(lhs->shape), &(rhs->shape)))
  {
    return false;
  }
  // max_velocity
  if (lhs->max_velocity != rhs->max_velocity) {
    return false;
  }
  // min_velocity
  if (lhs->min_velocity != rhs->min_velocity) {
    return false;
  }
  // action
  if (lhs->action != rhs->action) {
    return false;
  }
  return true;
}

bool
dummy_perception_publisher__msg__Object__copy(
  const dummy_perception_publisher__msg__Object * input,
  dummy_perception_publisher__msg__Object * output)
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
  // id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // initial_state
  if (!dummy_perception_publisher__msg__InitialState__copy(
      &(input->initial_state), &(output->initial_state)))
  {
    return false;
  }
  // classification
  if (!autoware_auto_perception_msgs__msg__ObjectClassification__copy(
      &(input->classification), &(output->classification)))
  {
    return false;
  }
  // shape
  if (!autoware_auto_perception_msgs__msg__Shape__copy(
      &(input->shape), &(output->shape)))
  {
    return false;
  }
  // max_velocity
  output->max_velocity = input->max_velocity;
  // min_velocity
  output->min_velocity = input->min_velocity;
  // action
  output->action = input->action;
  return true;
}

dummy_perception_publisher__msg__Object *
dummy_perception_publisher__msg__Object__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dummy_perception_publisher__msg__Object * msg = (dummy_perception_publisher__msg__Object *)allocator.allocate(sizeof(dummy_perception_publisher__msg__Object), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dummy_perception_publisher__msg__Object));
  bool success = dummy_perception_publisher__msg__Object__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dummy_perception_publisher__msg__Object__destroy(dummy_perception_publisher__msg__Object * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dummy_perception_publisher__msg__Object__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dummy_perception_publisher__msg__Object__Sequence__init(dummy_perception_publisher__msg__Object__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dummy_perception_publisher__msg__Object * data = NULL;

  if (size) {
    data = (dummy_perception_publisher__msg__Object *)allocator.zero_allocate(size, sizeof(dummy_perception_publisher__msg__Object), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dummy_perception_publisher__msg__Object__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dummy_perception_publisher__msg__Object__fini(&data[i - 1]);
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
dummy_perception_publisher__msg__Object__Sequence__fini(dummy_perception_publisher__msg__Object__Sequence * array)
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
      dummy_perception_publisher__msg__Object__fini(&array->data[i]);
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

dummy_perception_publisher__msg__Object__Sequence *
dummy_perception_publisher__msg__Object__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dummy_perception_publisher__msg__Object__Sequence * array = (dummy_perception_publisher__msg__Object__Sequence *)allocator.allocate(sizeof(dummy_perception_publisher__msg__Object__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dummy_perception_publisher__msg__Object__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dummy_perception_publisher__msg__Object__Sequence__destroy(dummy_perception_publisher__msg__Object__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dummy_perception_publisher__msg__Object__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dummy_perception_publisher__msg__Object__Sequence__are_equal(const dummy_perception_publisher__msg__Object__Sequence * lhs, const dummy_perception_publisher__msg__Object__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dummy_perception_publisher__msg__Object__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dummy_perception_publisher__msg__Object__Sequence__copy(
  const dummy_perception_publisher__msg__Object__Sequence * input,
  dummy_perception_publisher__msg__Object__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dummy_perception_publisher__msg__Object);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dummy_perception_publisher__msg__Object * data =
      (dummy_perception_publisher__msg__Object *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dummy_perception_publisher__msg__Object__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dummy_perception_publisher__msg__Object__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dummy_perception_publisher__msg__Object__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
