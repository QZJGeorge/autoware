// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yabloc_particle_filter:msg/ParticleArray.idl
// generated code does not contain a copyright notice
#include "yabloc_particle_filter/msg/detail/particle_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `particles`
#include "yabloc_particle_filter/msg/detail/particle__functions.h"

bool
yabloc_particle_filter__msg__ParticleArray__init(yabloc_particle_filter__msg__ParticleArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    yabloc_particle_filter__msg__ParticleArray__fini(msg);
    return false;
  }
  // id
  // particles
  if (!yabloc_particle_filter__msg__Particle__Sequence__init(&msg->particles, 0)) {
    yabloc_particle_filter__msg__ParticleArray__fini(msg);
    return false;
  }
  return true;
}

void
yabloc_particle_filter__msg__ParticleArray__fini(yabloc_particle_filter__msg__ParticleArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  // particles
  yabloc_particle_filter__msg__Particle__Sequence__fini(&msg->particles);
}

bool
yabloc_particle_filter__msg__ParticleArray__are_equal(const yabloc_particle_filter__msg__ParticleArray * lhs, const yabloc_particle_filter__msg__ParticleArray * rhs)
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
  if (lhs->id != rhs->id) {
    return false;
  }
  // particles
  if (!yabloc_particle_filter__msg__Particle__Sequence__are_equal(
      &(lhs->particles), &(rhs->particles)))
  {
    return false;
  }
  return true;
}

bool
yabloc_particle_filter__msg__ParticleArray__copy(
  const yabloc_particle_filter__msg__ParticleArray * input,
  yabloc_particle_filter__msg__ParticleArray * output)
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
  output->id = input->id;
  // particles
  if (!yabloc_particle_filter__msg__Particle__Sequence__copy(
      &(input->particles), &(output->particles)))
  {
    return false;
  }
  return true;
}

yabloc_particle_filter__msg__ParticleArray *
yabloc_particle_filter__msg__ParticleArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yabloc_particle_filter__msg__ParticleArray * msg = (yabloc_particle_filter__msg__ParticleArray *)allocator.allocate(sizeof(yabloc_particle_filter__msg__ParticleArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yabloc_particle_filter__msg__ParticleArray));
  bool success = yabloc_particle_filter__msg__ParticleArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yabloc_particle_filter__msg__ParticleArray__destroy(yabloc_particle_filter__msg__ParticleArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yabloc_particle_filter__msg__ParticleArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yabloc_particle_filter__msg__ParticleArray__Sequence__init(yabloc_particle_filter__msg__ParticleArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yabloc_particle_filter__msg__ParticleArray * data = NULL;

  if (size) {
    data = (yabloc_particle_filter__msg__ParticleArray *)allocator.zero_allocate(size, sizeof(yabloc_particle_filter__msg__ParticleArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yabloc_particle_filter__msg__ParticleArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yabloc_particle_filter__msg__ParticleArray__fini(&data[i - 1]);
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
yabloc_particle_filter__msg__ParticleArray__Sequence__fini(yabloc_particle_filter__msg__ParticleArray__Sequence * array)
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
      yabloc_particle_filter__msg__ParticleArray__fini(&array->data[i]);
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

yabloc_particle_filter__msg__ParticleArray__Sequence *
yabloc_particle_filter__msg__ParticleArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yabloc_particle_filter__msg__ParticleArray__Sequence * array = (yabloc_particle_filter__msg__ParticleArray__Sequence *)allocator.allocate(sizeof(yabloc_particle_filter__msg__ParticleArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yabloc_particle_filter__msg__ParticleArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yabloc_particle_filter__msg__ParticleArray__Sequence__destroy(yabloc_particle_filter__msg__ParticleArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yabloc_particle_filter__msg__ParticleArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yabloc_particle_filter__msg__ParticleArray__Sequence__are_equal(const yabloc_particle_filter__msg__ParticleArray__Sequence * lhs, const yabloc_particle_filter__msg__ParticleArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yabloc_particle_filter__msg__ParticleArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yabloc_particle_filter__msg__ParticleArray__Sequence__copy(
  const yabloc_particle_filter__msg__ParticleArray__Sequence * input,
  yabloc_particle_filter__msg__ParticleArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yabloc_particle_filter__msg__ParticleArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yabloc_particle_filter__msg__ParticleArray * data =
      (yabloc_particle_filter__msg__ParticleArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yabloc_particle_filter__msg__ParticleArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yabloc_particle_filter__msg__ParticleArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yabloc_particle_filter__msg__ParticleArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
