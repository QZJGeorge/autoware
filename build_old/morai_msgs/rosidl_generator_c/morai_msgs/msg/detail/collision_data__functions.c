// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/CollisionData.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/collision_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `collision_object`
#include "morai_msgs/msg/detail/object_status__functions.h"

bool
morai_msgs__msg__CollisionData__init(morai_msgs__msg__CollisionData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    morai_msgs__msg__CollisionData__fini(msg);
    return false;
  }
  // global_offset_x
  // global_offset_y
  // global_offset_z
  // collision_object
  if (!morai_msgs__msg__ObjectStatus__Sequence__init(&msg->collision_object, 0)) {
    morai_msgs__msg__CollisionData__fini(msg);
    return false;
  }
  return true;
}

void
morai_msgs__msg__CollisionData__fini(morai_msgs__msg__CollisionData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // global_offset_x
  // global_offset_y
  // global_offset_z
  // collision_object
  morai_msgs__msg__ObjectStatus__Sequence__fini(&msg->collision_object);
}

bool
morai_msgs__msg__CollisionData__are_equal(const morai_msgs__msg__CollisionData * lhs, const morai_msgs__msg__CollisionData * rhs)
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
  // global_offset_x
  if (lhs->global_offset_x != rhs->global_offset_x) {
    return false;
  }
  // global_offset_y
  if (lhs->global_offset_y != rhs->global_offset_y) {
    return false;
  }
  // global_offset_z
  if (lhs->global_offset_z != rhs->global_offset_z) {
    return false;
  }
  // collision_object
  if (!morai_msgs__msg__ObjectStatus__Sequence__are_equal(
      &(lhs->collision_object), &(rhs->collision_object)))
  {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__CollisionData__copy(
  const morai_msgs__msg__CollisionData * input,
  morai_msgs__msg__CollisionData * output)
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
  // global_offset_x
  output->global_offset_x = input->global_offset_x;
  // global_offset_y
  output->global_offset_y = input->global_offset_y;
  // global_offset_z
  output->global_offset_z = input->global_offset_z;
  // collision_object
  if (!morai_msgs__msg__ObjectStatus__Sequence__copy(
      &(input->collision_object), &(output->collision_object)))
  {
    return false;
  }
  return true;
}

morai_msgs__msg__CollisionData *
morai_msgs__msg__CollisionData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__CollisionData * msg = (morai_msgs__msg__CollisionData *)allocator.allocate(sizeof(morai_msgs__msg__CollisionData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__CollisionData));
  bool success = morai_msgs__msg__CollisionData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__CollisionData__destroy(morai_msgs__msg__CollisionData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    morai_msgs__msg__CollisionData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
morai_msgs__msg__CollisionData__Sequence__init(morai_msgs__msg__CollisionData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__CollisionData * data = NULL;

  if (size) {
    data = (morai_msgs__msg__CollisionData *)allocator.zero_allocate(size, sizeof(morai_msgs__msg__CollisionData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__CollisionData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__CollisionData__fini(&data[i - 1]);
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
morai_msgs__msg__CollisionData__Sequence__fini(morai_msgs__msg__CollisionData__Sequence * array)
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
      morai_msgs__msg__CollisionData__fini(&array->data[i]);
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

morai_msgs__msg__CollisionData__Sequence *
morai_msgs__msg__CollisionData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__CollisionData__Sequence * array = (morai_msgs__msg__CollisionData__Sequence *)allocator.allocate(sizeof(morai_msgs__msg__CollisionData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__CollisionData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__CollisionData__Sequence__destroy(morai_msgs__msg__CollisionData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    morai_msgs__msg__CollisionData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
morai_msgs__msg__CollisionData__Sequence__are_equal(const morai_msgs__msg__CollisionData__Sequence * lhs, const morai_msgs__msg__CollisionData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__CollisionData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__CollisionData__Sequence__copy(
  const morai_msgs__msg__CollisionData__Sequence * input,
  morai_msgs__msg__CollisionData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__CollisionData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    morai_msgs__msg__CollisionData * data =
      (morai_msgs__msg__CollisionData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__CollisionData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__CollisionData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!morai_msgs__msg__CollisionData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
