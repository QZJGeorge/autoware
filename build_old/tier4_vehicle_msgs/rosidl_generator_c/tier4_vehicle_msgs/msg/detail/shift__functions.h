// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tier4_vehicle_msgs:msg/Shift.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__SHIFT__FUNCTIONS_H_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__SHIFT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tier4_vehicle_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tier4_vehicle_msgs/msg/detail/shift__struct.h"

/// Initialize msg/Shift message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tier4_vehicle_msgs__msg__Shift
 * )) before or use
 * tier4_vehicle_msgs__msg__Shift__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_vehicle_msgs
bool
tier4_vehicle_msgs__msg__Shift__init(tier4_vehicle_msgs__msg__Shift * msg);

/// Finalize msg/Shift message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_vehicle_msgs
void
tier4_vehicle_msgs__msg__Shift__fini(tier4_vehicle_msgs__msg__Shift * msg);

/// Create msg/Shift message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tier4_vehicle_msgs__msg__Shift__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_vehicle_msgs
tier4_vehicle_msgs__msg__Shift *
tier4_vehicle_msgs__msg__Shift__create();

/// Destroy msg/Shift message.
/**
 * It calls
 * tier4_vehicle_msgs__msg__Shift__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_vehicle_msgs
void
tier4_vehicle_msgs__msg__Shift__destroy(tier4_vehicle_msgs__msg__Shift * msg);

/// Check for msg/Shift message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_vehicle_msgs
bool
tier4_vehicle_msgs__msg__Shift__are_equal(const tier4_vehicle_msgs__msg__Shift * lhs, const tier4_vehicle_msgs__msg__Shift * rhs);

/// Copy a msg/Shift message.
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
tier4_vehicle_msgs__msg__Shift__copy(
  const tier4_vehicle_msgs__msg__Shift * input,
  tier4_vehicle_msgs__msg__Shift * output);

/// Initialize array of msg/Shift messages.
/**
 * It allocates the memory for the number of elements and calls
 * tier4_vehicle_msgs__msg__Shift__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_vehicle_msgs
bool
tier4_vehicle_msgs__msg__Shift__Sequence__init(tier4_vehicle_msgs__msg__Shift__Sequence * array, size_t size);

/// Finalize array of msg/Shift messages.
/**
 * It calls
 * tier4_vehicle_msgs__msg__Shift__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_vehicle_msgs
void
tier4_vehicle_msgs__msg__Shift__Sequence__fini(tier4_vehicle_msgs__msg__Shift__Sequence * array);

/// Create array of msg/Shift messages.
/**
 * It allocates the memory for the array and calls
 * tier4_vehicle_msgs__msg__Shift__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_vehicle_msgs
tier4_vehicle_msgs__msg__Shift__Sequence *
tier4_vehicle_msgs__msg__Shift__Sequence__create(size_t size);

/// Destroy array of msg/Shift messages.
/**
 * It calls
 * tier4_vehicle_msgs__msg__Shift__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_vehicle_msgs
void
tier4_vehicle_msgs__msg__Shift__Sequence__destroy(tier4_vehicle_msgs__msg__Shift__Sequence * array);

/// Check for msg/Shift message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_vehicle_msgs
bool
tier4_vehicle_msgs__msg__Shift__Sequence__are_equal(const tier4_vehicle_msgs__msg__Shift__Sequence * lhs, const tier4_vehicle_msgs__msg__Shift__Sequence * rhs);

/// Copy an array of msg/Shift messages.
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
tier4_vehicle_msgs__msg__Shift__Sequence__copy(
  const tier4_vehicle_msgs__msg__Shift__Sequence * input,
  tier4_vehicle_msgs__msg__Shift__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__SHIFT__FUNCTIONS_H_
