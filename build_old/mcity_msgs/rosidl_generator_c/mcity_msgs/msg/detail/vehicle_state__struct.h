// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mcity_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef MCITY_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_
#define MCITY_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VehicleState in the package mcity_msgs.
typedef struct mcity_msgs__msg__VehicleState
{
  double timestamp;
  double x;
  double y;
  double z;
  double speed_x;
  double speed_y;
  double speed_z;
  double acc_x;
  double acc_y;
  double acc_z;
  double heading;
  double yaw_rate;
  bool by_wire_enabled;
  double throttle_cmd;
  double throttle_input;
  double throttle_state;
  bool throttle_enabled;
  bool throttle_override;
  bool throttle_driver;
  bool throttle_timeout;
  double brake_cmd;
  double brake_input;
  double brake_state;
  double brake_torq_cmd;
  double brake_torq_input;
  double brake_torq_state;
  bool brake_boo_output;
  bool brake_enabled;
  bool brake_override;
  bool brake_driver;
  bool brake_timeout;
  double steer_cmd;
  double steer_state;
  double steer_torque;
  bool steer_enabled;
  bool steer_override;
  bool steer_timeout;
  int16_t gear_pos;
  double wheel_v_front_left;
  double wheel_v_front_right;
  double wheel_v_rear_left;
  double wheel_v_rear_right;
} mcity_msgs__msg__VehicleState;

// Struct for a sequence of mcity_msgs__msg__VehicleState.
typedef struct mcity_msgs__msg__VehicleState__Sequence
{
  mcity_msgs__msg__VehicleState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mcity_msgs__msg__VehicleState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MCITY_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_
