// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/MoraiSimProcHandle.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/morai_sim_proc_handle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `rosbag_file_name`
#include "rosidl_runtime_c/string_functions.h"

bool
morai_msgs__msg__MoraiSimProcHandle__init(morai_msgs__msg__MoraiSimProcHandle * msg)
{
  if (!msg) {
    return false;
  }
  // sim_process_status
  // replay_option
  // rosbag_file_name
  if (!rosidl_runtime_c__String__init(&msg->rosbag_file_name)) {
    morai_msgs__msg__MoraiSimProcHandle__fini(msg);
    return false;
  }
  // replay_target_option
  // replay_speed
  // start_time
  return true;
}

void
morai_msgs__msg__MoraiSimProcHandle__fini(morai_msgs__msg__MoraiSimProcHandle * msg)
{
  if (!msg) {
    return;
  }
  // sim_process_status
  // replay_option
  // rosbag_file_name
  rosidl_runtime_c__String__fini(&msg->rosbag_file_name);
  // replay_target_option
  // replay_speed
  // start_time
}

bool
morai_msgs__msg__MoraiSimProcHandle__are_equal(const morai_msgs__msg__MoraiSimProcHandle * lhs, const morai_msgs__msg__MoraiSimProcHandle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sim_process_status
  if (lhs->sim_process_status != rhs->sim_process_status) {
    return false;
  }
  // replay_option
  if (lhs->replay_option != rhs->replay_option) {
    return false;
  }
  // rosbag_file_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->rosbag_file_name), &(rhs->rosbag_file_name)))
  {
    return false;
  }
  // replay_target_option
  if (lhs->replay_target_option != rhs->replay_target_option) {
    return false;
  }
  // replay_speed
  if (lhs->replay_speed != rhs->replay_speed) {
    return false;
  }
  // start_time
  if (lhs->start_time != rhs->start_time) {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__MoraiSimProcHandle__copy(
  const morai_msgs__msg__MoraiSimProcHandle * input,
  morai_msgs__msg__MoraiSimProcHandle * output)
{
  if (!input || !output) {
    return false;
  }
  // sim_process_status
  output->sim_process_status = input->sim_process_status;
  // replay_option
  output->replay_option = input->replay_option;
  // rosbag_file_name
  if (!rosidl_runtime_c__String__copy(
      &(input->rosbag_file_name), &(output->rosbag_file_name)))
  {
    return false;
  }
  // replay_target_option
  output->replay_target_option = input->replay_target_option;
  // replay_speed
  output->replay_speed = input->replay_speed;
  // start_time
  output->start_time = input->start_time;
  return true;
}

morai_msgs__msg__MoraiSimProcHandle *
morai_msgs__msg__MoraiSimProcHandle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__MoraiSimProcHandle * msg = (morai_msgs__msg__MoraiSimProcHandle *)allocator.allocate(sizeof(morai_msgs__msg__MoraiSimProcHandle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__MoraiSimProcHandle));
  bool success = morai_msgs__msg__MoraiSimProcHandle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__MoraiSimProcHandle__destroy(morai_msgs__msg__MoraiSimProcHandle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    morai_msgs__msg__MoraiSimProcHandle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
morai_msgs__msg__MoraiSimProcHandle__Sequence__init(morai_msgs__msg__MoraiSimProcHandle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__MoraiSimProcHandle * data = NULL;

  if (size) {
    data = (morai_msgs__msg__MoraiSimProcHandle *)allocator.zero_allocate(size, sizeof(morai_msgs__msg__MoraiSimProcHandle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__MoraiSimProcHandle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__MoraiSimProcHandle__fini(&data[i - 1]);
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
morai_msgs__msg__MoraiSimProcHandle__Sequence__fini(morai_msgs__msg__MoraiSimProcHandle__Sequence * array)
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
      morai_msgs__msg__MoraiSimProcHandle__fini(&array->data[i]);
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

morai_msgs__msg__MoraiSimProcHandle__Sequence *
morai_msgs__msg__MoraiSimProcHandle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__MoraiSimProcHandle__Sequence * array = (morai_msgs__msg__MoraiSimProcHandle__Sequence *)allocator.allocate(sizeof(morai_msgs__msg__MoraiSimProcHandle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__MoraiSimProcHandle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__MoraiSimProcHandle__Sequence__destroy(morai_msgs__msg__MoraiSimProcHandle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    morai_msgs__msg__MoraiSimProcHandle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
morai_msgs__msg__MoraiSimProcHandle__Sequence__are_equal(const morai_msgs__msg__MoraiSimProcHandle__Sequence * lhs, const morai_msgs__msg__MoraiSimProcHandle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__MoraiSimProcHandle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__MoraiSimProcHandle__Sequence__copy(
  const morai_msgs__msg__MoraiSimProcHandle__Sequence * input,
  morai_msgs__msg__MoraiSimProcHandle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__MoraiSimProcHandle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    morai_msgs__msg__MoraiSimProcHandle * data =
      (morai_msgs__msg__MoraiSimProcHandle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__MoraiSimProcHandle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__MoraiSimProcHandle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!morai_msgs__msg__MoraiSimProcHandle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
