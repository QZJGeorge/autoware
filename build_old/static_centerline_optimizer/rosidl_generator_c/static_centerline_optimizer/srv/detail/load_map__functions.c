// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from static_centerline_optimizer:srv/LoadMap.idl
// generated code does not contain a copyright notice
#include "static_centerline_optimizer/srv/detail/load_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `map`
#include "rosidl_runtime_c/string_functions.h"

bool
static_centerline_optimizer__srv__LoadMap_Request__init(static_centerline_optimizer__srv__LoadMap_Request * msg)
{
  if (!msg) {
    return false;
  }
  // map
  if (!rosidl_runtime_c__String__init(&msg->map)) {
    static_centerline_optimizer__srv__LoadMap_Request__fini(msg);
    return false;
  }
  return true;
}

void
static_centerline_optimizer__srv__LoadMap_Request__fini(static_centerline_optimizer__srv__LoadMap_Request * msg)
{
  if (!msg) {
    return;
  }
  // map
  rosidl_runtime_c__String__fini(&msg->map);
}

bool
static_centerline_optimizer__srv__LoadMap_Request__are_equal(const static_centerline_optimizer__srv__LoadMap_Request * lhs, const static_centerline_optimizer__srv__LoadMap_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // map
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map), &(rhs->map)))
  {
    return false;
  }
  return true;
}

bool
static_centerline_optimizer__srv__LoadMap_Request__copy(
  const static_centerline_optimizer__srv__LoadMap_Request * input,
  static_centerline_optimizer__srv__LoadMap_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // map
  if (!rosidl_runtime_c__String__copy(
      &(input->map), &(output->map)))
  {
    return false;
  }
  return true;
}

static_centerline_optimizer__srv__LoadMap_Request *
static_centerline_optimizer__srv__LoadMap_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  static_centerline_optimizer__srv__LoadMap_Request * msg = (static_centerline_optimizer__srv__LoadMap_Request *)allocator.allocate(sizeof(static_centerline_optimizer__srv__LoadMap_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(static_centerline_optimizer__srv__LoadMap_Request));
  bool success = static_centerline_optimizer__srv__LoadMap_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
static_centerline_optimizer__srv__LoadMap_Request__destroy(static_centerline_optimizer__srv__LoadMap_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    static_centerline_optimizer__srv__LoadMap_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
static_centerline_optimizer__srv__LoadMap_Request__Sequence__init(static_centerline_optimizer__srv__LoadMap_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  static_centerline_optimizer__srv__LoadMap_Request * data = NULL;

  if (size) {
    data = (static_centerline_optimizer__srv__LoadMap_Request *)allocator.zero_allocate(size, sizeof(static_centerline_optimizer__srv__LoadMap_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = static_centerline_optimizer__srv__LoadMap_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        static_centerline_optimizer__srv__LoadMap_Request__fini(&data[i - 1]);
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
static_centerline_optimizer__srv__LoadMap_Request__Sequence__fini(static_centerline_optimizer__srv__LoadMap_Request__Sequence * array)
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
      static_centerline_optimizer__srv__LoadMap_Request__fini(&array->data[i]);
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

static_centerline_optimizer__srv__LoadMap_Request__Sequence *
static_centerline_optimizer__srv__LoadMap_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  static_centerline_optimizer__srv__LoadMap_Request__Sequence * array = (static_centerline_optimizer__srv__LoadMap_Request__Sequence *)allocator.allocate(sizeof(static_centerline_optimizer__srv__LoadMap_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = static_centerline_optimizer__srv__LoadMap_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
static_centerline_optimizer__srv__LoadMap_Request__Sequence__destroy(static_centerline_optimizer__srv__LoadMap_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    static_centerline_optimizer__srv__LoadMap_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
static_centerline_optimizer__srv__LoadMap_Request__Sequence__are_equal(const static_centerline_optimizer__srv__LoadMap_Request__Sequence * lhs, const static_centerline_optimizer__srv__LoadMap_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!static_centerline_optimizer__srv__LoadMap_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
static_centerline_optimizer__srv__LoadMap_Request__Sequence__copy(
  const static_centerline_optimizer__srv__LoadMap_Request__Sequence * input,
  static_centerline_optimizer__srv__LoadMap_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(static_centerline_optimizer__srv__LoadMap_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    static_centerline_optimizer__srv__LoadMap_Request * data =
      (static_centerline_optimizer__srv__LoadMap_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!static_centerline_optimizer__srv__LoadMap_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          static_centerline_optimizer__srv__LoadMap_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!static_centerline_optimizer__srv__LoadMap_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
static_centerline_optimizer__srv__LoadMap_Response__init(static_centerline_optimizer__srv__LoadMap_Response * msg)
{
  if (!msg) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    static_centerline_optimizer__srv__LoadMap_Response__fini(msg);
    return false;
  }
  return true;
}

void
static_centerline_optimizer__srv__LoadMap_Response__fini(static_centerline_optimizer__srv__LoadMap_Response * msg)
{
  if (!msg) {
    return;
  }
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
static_centerline_optimizer__srv__LoadMap_Response__are_equal(const static_centerline_optimizer__srv__LoadMap_Response * lhs, const static_centerline_optimizer__srv__LoadMap_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
static_centerline_optimizer__srv__LoadMap_Response__copy(
  const static_centerline_optimizer__srv__LoadMap_Response * input,
  static_centerline_optimizer__srv__LoadMap_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

static_centerline_optimizer__srv__LoadMap_Response *
static_centerline_optimizer__srv__LoadMap_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  static_centerline_optimizer__srv__LoadMap_Response * msg = (static_centerline_optimizer__srv__LoadMap_Response *)allocator.allocate(sizeof(static_centerline_optimizer__srv__LoadMap_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(static_centerline_optimizer__srv__LoadMap_Response));
  bool success = static_centerline_optimizer__srv__LoadMap_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
static_centerline_optimizer__srv__LoadMap_Response__destroy(static_centerline_optimizer__srv__LoadMap_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    static_centerline_optimizer__srv__LoadMap_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
static_centerline_optimizer__srv__LoadMap_Response__Sequence__init(static_centerline_optimizer__srv__LoadMap_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  static_centerline_optimizer__srv__LoadMap_Response * data = NULL;

  if (size) {
    data = (static_centerline_optimizer__srv__LoadMap_Response *)allocator.zero_allocate(size, sizeof(static_centerline_optimizer__srv__LoadMap_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = static_centerline_optimizer__srv__LoadMap_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        static_centerline_optimizer__srv__LoadMap_Response__fini(&data[i - 1]);
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
static_centerline_optimizer__srv__LoadMap_Response__Sequence__fini(static_centerline_optimizer__srv__LoadMap_Response__Sequence * array)
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
      static_centerline_optimizer__srv__LoadMap_Response__fini(&array->data[i]);
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

static_centerline_optimizer__srv__LoadMap_Response__Sequence *
static_centerline_optimizer__srv__LoadMap_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  static_centerline_optimizer__srv__LoadMap_Response__Sequence * array = (static_centerline_optimizer__srv__LoadMap_Response__Sequence *)allocator.allocate(sizeof(static_centerline_optimizer__srv__LoadMap_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = static_centerline_optimizer__srv__LoadMap_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
static_centerline_optimizer__srv__LoadMap_Response__Sequence__destroy(static_centerline_optimizer__srv__LoadMap_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    static_centerline_optimizer__srv__LoadMap_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
static_centerline_optimizer__srv__LoadMap_Response__Sequence__are_equal(const static_centerline_optimizer__srv__LoadMap_Response__Sequence * lhs, const static_centerline_optimizer__srv__LoadMap_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!static_centerline_optimizer__srv__LoadMap_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
static_centerline_optimizer__srv__LoadMap_Response__Sequence__copy(
  const static_centerline_optimizer__srv__LoadMap_Response__Sequence * input,
  static_centerline_optimizer__srv__LoadMap_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(static_centerline_optimizer__srv__LoadMap_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    static_centerline_optimizer__srv__LoadMap_Response * data =
      (static_centerline_optimizer__srv__LoadMap_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!static_centerline_optimizer__srv__LoadMap_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          static_centerline_optimizer__srv__LoadMap_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!static_centerline_optimizer__srv__LoadMap_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
