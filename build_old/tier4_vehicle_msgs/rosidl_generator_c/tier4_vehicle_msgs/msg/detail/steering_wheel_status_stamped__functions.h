// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tier4_vehicle_msgs:msg/SteeringWheelStatusStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__STEERING_WHEEL_STATUS_STAMPED__FUNCTIONS_H_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__STEERING_WHEEL_STATUS_STAMPED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tier4_vehicle_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tier4_vehicle_msgs/msg/detail/steering_wheel_status_stamped__struct.h"

/// Initialize msg/SteeringWheelStatusStamped message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tier4_vehicle_msgs__msg__SteeringWheelStatusStamped
 * )) before or use
 * tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_vehicle_msgs
bool
tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__init(tier4_vehicle_msgs__msg__SteeringWheelStatusStamped * msg);

/// Finalize msg/SteeringWheelStatusStamped message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_vehicle_msgs
void
tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__fini(tier4_vehicle_msgs__msg__SteeringWheelStatusStamped * msg);

/// Create msg/SteeringWheelStatusStamped message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_vehicle_msgs
tier4_vehicle_msgs__msg__SteeringWheelStatusStamped *
tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__create();

/// Destroy msg/SteeringWheelStatusStamped message.
/**
 * It calls
 * tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_vehicle_msgs
void
tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__destroy(tier4_vehicle_msgs__msg__SteeringWheelStatusStamped * msg);

/// Check for msg/SteeringWheelStatusStamped message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_vehicle_msgs
bool
tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__are_equal(const tier4_vehicle_msgs__msg__SteeringWheelStatusStamped * lhs, const tier4_vehicle_msgs__msg__SteeringWheelStatusStamped * rhs);

/// Copy a msg/SteeringWheelStatusStamped message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_vehicle_msgs
bool
tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__copy(
  const tier4_vehicle_msgs__msg__SteeringWheelStatusStamped * input,
  tier4_vehicle_msgs__msg__SteeringWheelStatusStamped * output);

/// Initialize array of msg/SteeringWheelStatusStamped messages.
/**
 * It allocates the memory for the number of elements and calls
 * tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_vehicle_msgs
bool
tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__Sequence__init(tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__Sequence * array, size_t size);

/// Finalize array of msg/SteeringWheelStatusStamped messages.
/**
 * It calls
 * tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_vehicle_msgs
void
tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__Sequence__fini(tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__Sequence * array);

/// Create array of msg/SteeringWheelStatusStamped messages.
/**
 * It allocates the memory for the array and calls
 * tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_vehicle_msgs
tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__Sequence *
tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__Sequence__create(size_t size);

/// Destroy array of msg/SteeringWheelStatusStamped messages.
/**
 * It calls
 * tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_vehicle_msgs
void
tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__Sequence__destroy(tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__Sequence * array);

/// Check for msg/SteeringWheelStatusStamped message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_vehicle_msgs
bool
tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__Sequence__are_equal(const tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__Sequence * lhs, const tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__Sequence * rhs);

/// Copy an array of msg/SteeringWheelStatusStamped messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_vehicle_msgs
bool
tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__Sequence__copy(
  const tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__Sequence * input,
  tier4_vehicle_msgs__msg__SteeringWheelStatusStamped__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__STEERING_WHEEL_STATUS_STAMPED__FUNCTIONS_H_
