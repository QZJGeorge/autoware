// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/ObjectStatus.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/object_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `velocity`
// Member `acceleration`
// Member `size`
// Member `position`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
morai_msgs__msg__ObjectStatus__init(morai_msgs__msg__ObjectStatus * msg)
{
  if (!msg) {
    return false;
  }
  // unique_id
  // type
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    morai_msgs__msg__ObjectStatus__fini(msg);
    return false;
  }
  // heading
  // velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->velocity)) {
    morai_msgs__msg__ObjectStatus__fini(msg);
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__init(&msg->acceleration)) {
    morai_msgs__msg__ObjectStatus__fini(msg);
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__init(&msg->size)) {
    morai_msgs__msg__ObjectStatus__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__init(&msg->position)) {
    morai_msgs__msg__ObjectStatus__fini(msg);
    return false;
  }
  return true;
}

void
morai_msgs__msg__ObjectStatus__fini(morai_msgs__msg__ObjectStatus * msg)
{
  if (!msg) {
    return;
  }
  // unique_id
  // type
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // heading
  // velocity
  geometry_msgs__msg__Vector3__fini(&msg->velocity);
  // acceleration
  geometry_msgs__msg__Vector3__fini(&msg->acceleration);
  // size
  geometry_msgs__msg__Vector3__fini(&msg->size);
  // position
  geometry_msgs__msg__Vector3__fini(&msg->position);
}

bool
morai_msgs__msg__ObjectStatus__are_equal(const morai_msgs__msg__ObjectStatus * lhs, const morai_msgs__msg__ObjectStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // unique_id
  if (lhs->unique_id != rhs->unique_id) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->size), &(rhs->size)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__ObjectStatus__copy(
  const morai_msgs__msg__ObjectStatus * input,
  morai_msgs__msg__ObjectStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // unique_id
  output->unique_id = input->unique_id;
  // type
  output->type = input->type;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // heading
  output->heading = input->heading;
  // velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->size), &(output->size)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  return true;
}

morai_msgs__msg__ObjectStatus *
morai_msgs__msg__ObjectStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__ObjectStatus * msg = (morai_msgs__msg__ObjectStatus *)allocator.allocate(sizeof(morai_msgs__msg__ObjectStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__ObjectStatus));
  bool success = morai_msgs__msg__ObjectStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__ObjectStatus__destroy(morai_msgs__msg__ObjectStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    morai_msgs__msg__ObjectStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
morai_msgs__msg__ObjectStatus__Sequence__init(morai_msgs__msg__ObjectStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__ObjectStatus * data = NULL;

  if (size) {
    data = (morai_msgs__msg__ObjectStatus *)allocator.zero_allocate(size, sizeof(morai_msgs__msg__ObjectStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__ObjectStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__ObjectStatus__fini(&data[i - 1]);
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
morai_msgs__msg__ObjectStatus__Sequence__fini(morai_msgs__msg__ObjectStatus__Sequence * array)
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
      morai_msgs__msg__ObjectStatus__fini(&array->data[i]);
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

morai_msgs__msg__ObjectStatus__Sequence *
morai_msgs__msg__ObjectStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__ObjectStatus__Sequence * array = (morai_msgs__msg__ObjectStatus__Sequence *)allocator.allocate(sizeof(morai_msgs__msg__ObjectStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__ObjectStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__ObjectStatus__Sequence__destroy(morai_msgs__msg__ObjectStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    morai_msgs__msg__ObjectStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
morai_msgs__msg__ObjectStatus__Sequence__are_equal(const morai_msgs__msg__ObjectStatus__Sequence * lhs, const morai_msgs__msg__ObjectStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__ObjectStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__ObjectStatus__Sequence__copy(
  const morai_msgs__msg__ObjectStatus__Sequence * input,
  morai_msgs__msg__ObjectStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__ObjectStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    morai_msgs__msg__ObjectStatus * data =
      (morai_msgs__msg__ObjectStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__ObjectStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__ObjectStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!morai_msgs__msg__ObjectStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
