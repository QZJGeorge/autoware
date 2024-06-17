// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mcity_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice
#include "mcity_msgs/msg/detail/vehicle_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mcity_msgs__msg__VehicleState__init(mcity_msgs__msg__VehicleState * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // x
  // y
  // z
  // speed_x
  // speed_y
  // speed_z
  // acc_x
  // acc_y
  // acc_z
  // heading
  // yaw_rate
  // by_wire_enabled
  // throttle_cmd
  // throttle_input
  // throttle_state
  // throttle_enabled
  // throttle_override
  // throttle_driver
  // throttle_timeout
  // brake_cmd
  // brake_input
  // brake_state
  // brake_torq_cmd
  // brake_torq_input
  // brake_torq_state
  // brake_boo_output
  // brake_enabled
  // brake_override
  // brake_driver
  // brake_timeout
  // steer_cmd
  // steer_state
  // steer_torque
  // steer_enabled
  // steer_override
  // steer_timeout
  // gear_pos
  // wheel_v_front_left
  // wheel_v_front_right
  // wheel_v_rear_left
  // wheel_v_rear_right
  return true;
}

void
mcity_msgs__msg__VehicleState__fini(mcity_msgs__msg__VehicleState * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // x
  // y
  // z
  // speed_x
  // speed_y
  // speed_z
  // acc_x
  // acc_y
  // acc_z
  // heading
  // yaw_rate
  // by_wire_enabled
  // throttle_cmd
  // throttle_input
  // throttle_state
  // throttle_enabled
  // throttle_override
  // throttle_driver
  // throttle_timeout
  // brake_cmd
  // brake_input
  // brake_state
  // brake_torq_cmd
  // brake_torq_input
  // brake_torq_state
  // brake_boo_output
  // brake_enabled
  // brake_override
  // brake_driver
  // brake_timeout
  // steer_cmd
  // steer_state
  // steer_torque
  // steer_enabled
  // steer_override
  // steer_timeout
  // gear_pos
  // wheel_v_front_left
  // wheel_v_front_right
  // wheel_v_rear_left
  // wheel_v_rear_right
}

bool
mcity_msgs__msg__VehicleState__are_equal(const mcity_msgs__msg__VehicleState * lhs, const mcity_msgs__msg__VehicleState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // speed_x
  if (lhs->speed_x != rhs->speed_x) {
    return false;
  }
  // speed_y
  if (lhs->speed_y != rhs->speed_y) {
    return false;
  }
  // speed_z
  if (lhs->speed_z != rhs->speed_z) {
    return false;
  }
  // acc_x
  if (lhs->acc_x != rhs->acc_x) {
    return false;
  }
  // acc_y
  if (lhs->acc_y != rhs->acc_y) {
    return false;
  }
  // acc_z
  if (lhs->acc_z != rhs->acc_z) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // yaw_rate
  if (lhs->yaw_rate != rhs->yaw_rate) {
    return false;
  }
  // by_wire_enabled
  if (lhs->by_wire_enabled != rhs->by_wire_enabled) {
    return false;
  }
  // throttle_cmd
  if (lhs->throttle_cmd != rhs->throttle_cmd) {
    return false;
  }
  // throttle_input
  if (lhs->throttle_input != rhs->throttle_input) {
    return false;
  }
  // throttle_state
  if (lhs->throttle_state != rhs->throttle_state) {
    return false;
  }
  // throttle_enabled
  if (lhs->throttle_enabled != rhs->throttle_enabled) {
    return false;
  }
  // throttle_override
  if (lhs->throttle_override != rhs->throttle_override) {
    return false;
  }
  // throttle_driver
  if (lhs->throttle_driver != rhs->throttle_driver) {
    return false;
  }
  // throttle_timeout
  if (lhs->throttle_timeout != rhs->throttle_timeout) {
    return false;
  }
  // brake_cmd
  if (lhs->brake_cmd != rhs->brake_cmd) {
    return false;
  }
  // brake_input
  if (lhs->brake_input != rhs->brake_input) {
    return false;
  }
  // brake_state
  if (lhs->brake_state != rhs->brake_state) {
    return false;
  }
  // brake_torq_cmd
  if (lhs->brake_torq_cmd != rhs->brake_torq_cmd) {
    return false;
  }
  // brake_torq_input
  if (lhs->brake_torq_input != rhs->brake_torq_input) {
    return false;
  }
  // brake_torq_state
  if (lhs->brake_torq_state != rhs->brake_torq_state) {
    return false;
  }
  // brake_boo_output
  if (lhs->brake_boo_output != rhs->brake_boo_output) {
    return false;
  }
  // brake_enabled
  if (lhs->brake_enabled != rhs->brake_enabled) {
    return false;
  }
  // brake_override
  if (lhs->brake_override != rhs->brake_override) {
    return false;
  }
  // brake_driver
  if (lhs->brake_driver != rhs->brake_driver) {
    return false;
  }
  // brake_timeout
  if (lhs->brake_timeout != rhs->brake_timeout) {
    return false;
  }
  // steer_cmd
  if (lhs->steer_cmd != rhs->steer_cmd) {
    return false;
  }
  // steer_state
  if (lhs->steer_state != rhs->steer_state) {
    return false;
  }
  // steer_torque
  if (lhs->steer_torque != rhs->steer_torque) {
    return false;
  }
  // steer_enabled
  if (lhs->steer_enabled != rhs->steer_enabled) {
    return false;
  }
  // steer_override
  if (lhs->steer_override != rhs->steer_override) {
    return false;
  }
  // steer_timeout
  if (lhs->steer_timeout != rhs->steer_timeout) {
    return false;
  }
  // gear_pos
  if (lhs->gear_pos != rhs->gear_pos) {
    return false;
  }
  // wheel_v_front_left
  if (lhs->wheel_v_front_left != rhs->wheel_v_front_left) {
    return false;
  }
  // wheel_v_front_right
  if (lhs->wheel_v_front_right != rhs->wheel_v_front_right) {
    return false;
  }
  // wheel_v_rear_left
  if (lhs->wheel_v_rear_left != rhs->wheel_v_rear_left) {
    return false;
  }
  // wheel_v_rear_right
  if (lhs->wheel_v_rear_right != rhs->wheel_v_rear_right) {
    return false;
  }
  return true;
}

bool
mcity_msgs__msg__VehicleState__copy(
  const mcity_msgs__msg__VehicleState * input,
  mcity_msgs__msg__VehicleState * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // speed_x
  output->speed_x = input->speed_x;
  // speed_y
  output->speed_y = input->speed_y;
  // speed_z
  output->speed_z = input->speed_z;
  // acc_x
  output->acc_x = input->acc_x;
  // acc_y
  output->acc_y = input->acc_y;
  // acc_z
  output->acc_z = input->acc_z;
  // heading
  output->heading = input->heading;
  // yaw_rate
  output->yaw_rate = input->yaw_rate;
  // by_wire_enabled
  output->by_wire_enabled = input->by_wire_enabled;
  // throttle_cmd
  output->throttle_cmd = input->throttle_cmd;
  // throttle_input
  output->throttle_input = input->throttle_input;
  // throttle_state
  output->throttle_state = input->throttle_state;
  // throttle_enabled
  output->throttle_enabled = input->throttle_enabled;
  // throttle_override
  output->throttle_override = input->throttle_override;
  // throttle_driver
  output->throttle_driver = input->throttle_driver;
  // throttle_timeout
  output->throttle_timeout = input->throttle_timeout;
  // brake_cmd
  output->brake_cmd = input->brake_cmd;
  // brake_input
  output->brake_input = input->brake_input;
  // brake_state
  output->brake_state = input->brake_state;
  // brake_torq_cmd
  output->brake_torq_cmd = input->brake_torq_cmd;
  // brake_torq_input
  output->brake_torq_input = input->brake_torq_input;
  // brake_torq_state
  output->brake_torq_state = input->brake_torq_state;
  // brake_boo_output
  output->brake_boo_output = input->brake_boo_output;
  // brake_enabled
  output->brake_enabled = input->brake_enabled;
  // brake_override
  output->brake_override = input->brake_override;
  // brake_driver
  output->brake_driver = input->brake_driver;
  // brake_timeout
  output->brake_timeout = input->brake_timeout;
  // steer_cmd
  output->steer_cmd = input->steer_cmd;
  // steer_state
  output->steer_state = input->steer_state;
  // steer_torque
  output->steer_torque = input->steer_torque;
  // steer_enabled
  output->steer_enabled = input->steer_enabled;
  // steer_override
  output->steer_override = input->steer_override;
  // steer_timeout
  output->steer_timeout = input->steer_timeout;
  // gear_pos
  output->gear_pos = input->gear_pos;
  // wheel_v_front_left
  output->wheel_v_front_left = input->wheel_v_front_left;
  // wheel_v_front_right
  output->wheel_v_front_right = input->wheel_v_front_right;
  // wheel_v_rear_left
  output->wheel_v_rear_left = input->wheel_v_rear_left;
  // wheel_v_rear_right
  output->wheel_v_rear_right = input->wheel_v_rear_right;
  return true;
}

mcity_msgs__msg__VehicleState *
mcity_msgs__msg__VehicleState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mcity_msgs__msg__VehicleState * msg = (mcity_msgs__msg__VehicleState *)allocator.allocate(sizeof(mcity_msgs__msg__VehicleState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mcity_msgs__msg__VehicleState));
  bool success = mcity_msgs__msg__VehicleState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mcity_msgs__msg__VehicleState__destroy(mcity_msgs__msg__VehicleState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mcity_msgs__msg__VehicleState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mcity_msgs__msg__VehicleState__Sequence__init(mcity_msgs__msg__VehicleState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mcity_msgs__msg__VehicleState * data = NULL;

  if (size) {
    data = (mcity_msgs__msg__VehicleState *)allocator.zero_allocate(size, sizeof(mcity_msgs__msg__VehicleState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mcity_msgs__msg__VehicleState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mcity_msgs__msg__VehicleState__fini(&data[i - 1]);
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
mcity_msgs__msg__VehicleState__Sequence__fini(mcity_msgs__msg__VehicleState__Sequence * array)
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
      mcity_msgs__msg__VehicleState__fini(&array->data[i]);
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

mcity_msgs__msg__VehicleState__Sequence *
mcity_msgs__msg__VehicleState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mcity_msgs__msg__VehicleState__Sequence * array = (mcity_msgs__msg__VehicleState__Sequence *)allocator.allocate(sizeof(mcity_msgs__msg__VehicleState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mcity_msgs__msg__VehicleState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mcity_msgs__msg__VehicleState__Sequence__destroy(mcity_msgs__msg__VehicleState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mcity_msgs__msg__VehicleState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mcity_msgs__msg__VehicleState__Sequence__are_equal(const mcity_msgs__msg__VehicleState__Sequence * lhs, const mcity_msgs__msg__VehicleState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mcity_msgs__msg__VehicleState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mcity_msgs__msg__VehicleState__Sequence__copy(
  const mcity_msgs__msg__VehicleState__Sequence * input,
  mcity_msgs__msg__VehicleState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mcity_msgs__msg__VehicleState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mcity_msgs__msg__VehicleState * data =
      (mcity_msgs__msg__VehicleState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mcity_msgs__msg__VehicleState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mcity_msgs__msg__VehicleState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mcity_msgs__msg__VehicleState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
