// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/MapSpec.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/map_spec__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `utm_offset`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `ellipse`
#include "rosidl_runtime_c/string_functions.h"

bool
morai_msgs__msg__MapSpec__init(morai_msgs__msg__MapSpec * msg)
{
  if (!msg) {
    return false;
  }
  // plane_coordinate_system
  // utm_num
  // utm_offset
  if (!geometry_msgs__msg__Vector3__init(&msg->utm_offset)) {
    morai_msgs__msg__MapSpec__fini(msg);
    return false;
  }
  // ellipse
  if (!rosidl_runtime_c__String__init(&msg->ellipse)) {
    morai_msgs__msg__MapSpec__fini(msg);
    return false;
  }
  // central_latitude
  // central_meridian
  // scale_factor
  // false_easting
  // false_northing
  return true;
}

void
morai_msgs__msg__MapSpec__fini(morai_msgs__msg__MapSpec * msg)
{
  if (!msg) {
    return;
  }
  // plane_coordinate_system
  // utm_num
  // utm_offset
  geometry_msgs__msg__Vector3__fini(&msg->utm_offset);
  // ellipse
  rosidl_runtime_c__String__fini(&msg->ellipse);
  // central_latitude
  // central_meridian
  // scale_factor
  // false_easting
  // false_northing
}

bool
morai_msgs__msg__MapSpec__are_equal(const morai_msgs__msg__MapSpec * lhs, const morai_msgs__msg__MapSpec * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // plane_coordinate_system
  if (lhs->plane_coordinate_system != rhs->plane_coordinate_system) {
    return false;
  }
  // utm_num
  if (lhs->utm_num != rhs->utm_num) {
    return false;
  }
  // utm_offset
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->utm_offset), &(rhs->utm_offset)))
  {
    return false;
  }
  // ellipse
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ellipse), &(rhs->ellipse)))
  {
    return false;
  }
  // central_latitude
  if (lhs->central_latitude != rhs->central_latitude) {
    return false;
  }
  // central_meridian
  if (lhs->central_meridian != rhs->central_meridian) {
    return false;
  }
  // scale_factor
  if (lhs->scale_factor != rhs->scale_factor) {
    return false;
  }
  // false_easting
  if (lhs->false_easting != rhs->false_easting) {
    return false;
  }
  // false_northing
  if (lhs->false_northing != rhs->false_northing) {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__MapSpec__copy(
  const morai_msgs__msg__MapSpec * input,
  morai_msgs__msg__MapSpec * output)
{
  if (!input || !output) {
    return false;
  }
  // plane_coordinate_system
  output->plane_coordinate_system = input->plane_coordinate_system;
  // utm_num
  output->utm_num = input->utm_num;
  // utm_offset
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->utm_offset), &(output->utm_offset)))
  {
    return false;
  }
  // ellipse
  if (!rosidl_runtime_c__String__copy(
      &(input->ellipse), &(output->ellipse)))
  {
    return false;
  }
  // central_latitude
  output->central_latitude = input->central_latitude;
  // central_meridian
  output->central_meridian = input->central_meridian;
  // scale_factor
  output->scale_factor = input->scale_factor;
  // false_easting
  output->false_easting = input->false_easting;
  // false_northing
  output->false_northing = input->false_northing;
  return true;
}

morai_msgs__msg__MapSpec *
morai_msgs__msg__MapSpec__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__MapSpec * msg = (morai_msgs__msg__MapSpec *)allocator.allocate(sizeof(morai_msgs__msg__MapSpec), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__MapSpec));
  bool success = morai_msgs__msg__MapSpec__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__MapSpec__destroy(morai_msgs__msg__MapSpec * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    morai_msgs__msg__MapSpec__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
morai_msgs__msg__MapSpec__Sequence__init(morai_msgs__msg__MapSpec__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__MapSpec * data = NULL;

  if (size) {
    data = (morai_msgs__msg__MapSpec *)allocator.zero_allocate(size, sizeof(morai_msgs__msg__MapSpec), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__MapSpec__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__MapSpec__fini(&data[i - 1]);
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
morai_msgs__msg__MapSpec__Sequence__fini(morai_msgs__msg__MapSpec__Sequence * array)
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
      morai_msgs__msg__MapSpec__fini(&array->data[i]);
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

morai_msgs__msg__MapSpec__Sequence *
morai_msgs__msg__MapSpec__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__MapSpec__Sequence * array = (morai_msgs__msg__MapSpec__Sequence *)allocator.allocate(sizeof(morai_msgs__msg__MapSpec__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__MapSpec__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__MapSpec__Sequence__destroy(morai_msgs__msg__MapSpec__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    morai_msgs__msg__MapSpec__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
morai_msgs__msg__MapSpec__Sequence__are_equal(const morai_msgs__msg__MapSpec__Sequence * lhs, const morai_msgs__msg__MapSpec__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__MapSpec__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__MapSpec__Sequence__copy(
  const morai_msgs__msg__MapSpec__Sequence * input,
  morai_msgs__msg__MapSpec__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__MapSpec);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    morai_msgs__msg__MapSpec * data =
      (morai_msgs__msg__MapSpec *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__MapSpec__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__MapSpec__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!morai_msgs__msg__MapSpec__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
