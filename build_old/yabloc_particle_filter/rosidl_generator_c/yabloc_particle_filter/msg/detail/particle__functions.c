// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yabloc_particle_filter:msg/Particle.idl
// generated code does not contain a copyright notice
#include "yabloc_particle_filter/msg/detail/particle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
yabloc_particle_filter__msg__Particle__init(yabloc_particle_filter__msg__Particle * msg)
{
  if (!msg) {
    return false;
  }
  // weight
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    yabloc_particle_filter__msg__Particle__fini(msg);
    return false;
  }
  return true;
}

void
yabloc_particle_filter__msg__Particle__fini(yabloc_particle_filter__msg__Particle * msg)
{
  if (!msg) {
    return;
  }
  // weight
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
yabloc_particle_filter__msg__Particle__are_equal(const yabloc_particle_filter__msg__Particle * lhs, const yabloc_particle_filter__msg__Particle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // weight
  if (lhs->weight != rhs->weight) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
yabloc_particle_filter__msg__Particle__copy(
  const yabloc_particle_filter__msg__Particle * input,
  yabloc_particle_filter__msg__Particle * output)
{
  if (!input || !output) {
    return false;
  }
  // weight
  output->weight = input->weight;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

yabloc_particle_filter__msg__Particle *
yabloc_particle_filter__msg__Particle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yabloc_particle_filter__msg__Particle * msg = (yabloc_particle_filter__msg__Particle *)allocator.allocate(sizeof(yabloc_particle_filter__msg__Particle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yabloc_particle_filter__msg__Particle));
  bool success = yabloc_particle_filter__msg__Particle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yabloc_particle_filter__msg__Particle__destroy(yabloc_particle_filter__msg__Particle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yabloc_particle_filter__msg__Particle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yabloc_particle_filter__msg__Particle__Sequence__init(yabloc_particle_filter__msg__Particle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yabloc_particle_filter__msg__Particle * data = NULL;

  if (size) {
    data = (yabloc_particle_filter__msg__Particle *)allocator.zero_allocate(size, sizeof(yabloc_particle_filter__msg__Particle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yabloc_particle_filter__msg__Particle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yabloc_particle_filter__msg__Particle__fini(&data[i - 1]);
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
yabloc_particle_filter__msg__Particle__Sequence__fini(yabloc_particle_filter__msg__Particle__Sequence * array)
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
      yabloc_particle_filter__msg__Particle__fini(&array->data[i]);
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

yabloc_particle_filter__msg__Particle__Sequence *
yabloc_particle_filter__msg__Particle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yabloc_particle_filter__msg__Particle__Sequence * array = (yabloc_particle_filter__msg__Particle__Sequence *)allocator.allocate(sizeof(yabloc_particle_filter__msg__Particle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yabloc_particle_filter__msg__Particle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yabloc_particle_filter__msg__Particle__Sequence__destroy(yabloc_particle_filter__msg__Particle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yabloc_particle_filter__msg__Particle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yabloc_particle_filter__msg__Particle__Sequence__are_equal(const yabloc_particle_filter__msg__Particle__Sequence * lhs, const yabloc_particle_filter__msg__Particle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yabloc_particle_filter__msg__Particle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yabloc_particle_filter__msg__Particle__Sequence__copy(
  const yabloc_particle_filter__msg__Particle__Sequence * input,
  yabloc_particle_filter__msg__Particle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yabloc_particle_filter__msg__Particle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yabloc_particle_filter__msg__Particle * data =
      (yabloc_particle_filter__msg__Particle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yabloc_particle_filter__msg__Particle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yabloc_particle_filter__msg__Particle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yabloc_particle_filter__msg__Particle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
