// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_adapi_v1_msgs:msg/VehicleDimensions.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/msg/detail/vehicle_dimensions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `footprint`
#include "geometry_msgs/msg/detail/polygon__functions.h"

bool
autoware_adapi_v1_msgs__msg__VehicleDimensions__init(autoware_adapi_v1_msgs__msg__VehicleDimensions * msg)
{
  if (!msg) {
    return false;
  }
  // wheel_radius
  // wheel_width
  // wheel_base
  // wheel_tread
  // front_overhang
  // rear_overhang
  // left_overhang
  // right_overhang
  // height
  // footprint
  if (!geometry_msgs__msg__Polygon__init(&msg->footprint)) {
    autoware_adapi_v1_msgs__msg__VehicleDimensions__fini(msg);
    return false;
  }
  return true;
}

void
autoware_adapi_v1_msgs__msg__VehicleDimensions__fini(autoware_adapi_v1_msgs__msg__VehicleDimensions * msg)
{
  if (!msg) {
    return;
  }
  // wheel_radius
  // wheel_width
  // wheel_base
  // wheel_tread
  // front_overhang
  // rear_overhang
  // left_overhang
  // right_overhang
  // height
  // footprint
  geometry_msgs__msg__Polygon__fini(&msg->footprint);
}

bool
autoware_adapi_v1_msgs__msg__VehicleDimensions__are_equal(const autoware_adapi_v1_msgs__msg__VehicleDimensions * lhs, const autoware_adapi_v1_msgs__msg__VehicleDimensions * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // wheel_radius
  if (lhs->wheel_radius != rhs->wheel_radius) {
    return false;
  }
  // wheel_width
  if (lhs->wheel_width != rhs->wheel_width) {
    return false;
  }
  // wheel_base
  if (lhs->wheel_base != rhs->wheel_base) {
    return false;
  }
  // wheel_tread
  if (lhs->wheel_tread != rhs->wheel_tread) {
    return false;
  }
  // front_overhang
  if (lhs->front_overhang != rhs->front_overhang) {
    return false;
  }
  // rear_overhang
  if (lhs->rear_overhang != rhs->rear_overhang) {
    return false;
  }
  // left_overhang
  if (lhs->left_overhang != rhs->left_overhang) {
    return false;
  }
  // right_overhang
  if (lhs->right_overhang != rhs->right_overhang) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // footprint
  if (!geometry_msgs__msg__Polygon__are_equal(
      &(lhs->footprint), &(rhs->footprint)))
  {
    return false;
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__VehicleDimensions__copy(
  const autoware_adapi_v1_msgs__msg__VehicleDimensions * input,
  autoware_adapi_v1_msgs__msg__VehicleDimensions * output)
{
  if (!input || !output) {
    return false;
  }
  // wheel_radius
  output->wheel_radius = input->wheel_radius;
  // wheel_width
  output->wheel_width = input->wheel_width;
  // wheel_base
  output->wheel_base = input->wheel_base;
  // wheel_tread
  output->wheel_tread = input->wheel_tread;
  // front_overhang
  output->front_overhang = input->front_overhang;
  // rear_overhang
  output->rear_overhang = input->rear_overhang;
  // left_overhang
  output->left_overhang = input->left_overhang;
  // right_overhang
  output->right_overhang = input->right_overhang;
  // height
  output->height = input->height;
  // footprint
  if (!geometry_msgs__msg__Polygon__copy(
      &(input->footprint), &(output->footprint)))
  {
    return false;
  }
  return true;
}

autoware_adapi_v1_msgs__msg__VehicleDimensions *
autoware_adapi_v1_msgs__msg__VehicleDimensions__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__VehicleDimensions * msg = (autoware_adapi_v1_msgs__msg__VehicleDimensions *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__msg__VehicleDimensions), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_adapi_v1_msgs__msg__VehicleDimensions));
  bool success = autoware_adapi_v1_msgs__msg__VehicleDimensions__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_adapi_v1_msgs__msg__VehicleDimensions__destroy(autoware_adapi_v1_msgs__msg__VehicleDimensions * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_adapi_v1_msgs__msg__VehicleDimensions__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence__init(autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__VehicleDimensions * data = NULL;

  if (size) {
    data = (autoware_adapi_v1_msgs__msg__VehicleDimensions *)allocator.zero_allocate(size, sizeof(autoware_adapi_v1_msgs__msg__VehicleDimensions), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_adapi_v1_msgs__msg__VehicleDimensions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_adapi_v1_msgs__msg__VehicleDimensions__fini(&data[i - 1]);
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
autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence__fini(autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence * array)
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
      autoware_adapi_v1_msgs__msg__VehicleDimensions__fini(&array->data[i]);
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

autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence *
autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence * array = (autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence__destroy(autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence__are_equal(const autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence * lhs, const autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__VehicleDimensions__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence__copy(
  const autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence * input,
  autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_adapi_v1_msgs__msg__VehicleDimensions);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_adapi_v1_msgs__msg__VehicleDimensions * data =
      (autoware_adapi_v1_msgs__msg__VehicleDimensions *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_adapi_v1_msgs__msg__VehicleDimensions__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_adapi_v1_msgs__msg__VehicleDimensions__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__VehicleDimensions__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
