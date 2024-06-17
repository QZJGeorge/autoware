// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from eagleye_msgs:msg/AngularVelocityOffset.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__ANGULAR_VELOCITY_OFFSET__FUNCTIONS_H_
#define EAGLEYE_MSGS__MSG__DETAIL__ANGULAR_VELOCITY_OFFSET__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "eagleye_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "eagleye_msgs/msg/detail/angular_velocity_offset__struct.h"

/// Initialize msg/AngularVelocityOffset message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * eagleye_msgs__msg__AngularVelocityOffset
 * )) before or use
 * eagleye_msgs__msg__AngularVelocityOffset__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
bool
eagleye_msgs__msg__AngularVelocityOffset__init(eagleye_msgs__msg__AngularVelocityOffset * msg);

/// Finalize msg/AngularVelocityOffset message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
void
eagleye_msgs__msg__AngularVelocityOffset__fini(eagleye_msgs__msg__AngularVelocityOffset * msg);

/// Create msg/AngularVelocityOffset message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * eagleye_msgs__msg__AngularVelocityOffset__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
eagleye_msgs__msg__AngularVelocityOffset *
eagleye_msgs__msg__AngularVelocityOffset__create();

/// Destroy msg/AngularVelocityOffset message.
/**
 * It calls
 * eagleye_msgs__msg__AngularVelocityOffset__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
void
eagleye_msgs__msg__AngularVelocityOffset__destroy(eagleye_msgs__msg__AngularVelocityOffset * msg);

/// Check for msg/AngularVelocityOffset message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
bool
eagleye_msgs__msg__AngularVelocityOffset__are_equal(const eagleye_msgs__msg__AngularVelocityOffset * lhs, const eagleye_msgs__msg__AngularVelocityOffset * rhs);

/// Copy a msg/AngularVelocityOffset message.
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
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
bool
eagleye_msgs__msg__AngularVelocityOffset__copy(
  const eagleye_msgs__msg__AngularVelocityOffset * input,
  eagleye_msgs__msg__AngularVelocityOffset * output);

/// Initialize array of msg/AngularVelocityOffset messages.
/**
 * It allocates the memory for the number of elements and calls
 * eagleye_msgs__msg__AngularVelocityOffset__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
bool
eagleye_msgs__msg__AngularVelocityOffset__Sequence__init(eagleye_msgs__msg__AngularVelocityOffset__Sequence * array, size_t size);

/// Finalize array of msg/AngularVelocityOffset messages.
/**
 * It calls
 * eagleye_msgs__msg__AngularVelocityOffset__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
void
eagleye_msgs__msg__AngularVelocityOffset__Sequence__fini(eagleye_msgs__msg__AngularVelocityOffset__Sequence * array);

/// Create array of msg/AngularVelocityOffset messages.
/**
 * It allocates the memory for the array and calls
 * eagleye_msgs__msg__AngularVelocityOffset__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
eagleye_msgs__msg__AngularVelocityOffset__Sequence *
eagleye_msgs__msg__AngularVelocityOffset__Sequence__create(size_t size);

/// Destroy array of msg/AngularVelocityOffset messages.
/**
 * It calls
 * eagleye_msgs__msg__AngularVelocityOffset__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
void
eagleye_msgs__msg__AngularVelocityOffset__Sequence__destroy(eagleye_msgs__msg__AngularVelocityOffset__Sequence * array);

/// Check for msg/AngularVelocityOffset message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
bool
eagleye_msgs__msg__AngularVelocityOffset__Sequence__are_equal(const eagleye_msgs__msg__AngularVelocityOffset__Sequence * lhs, const eagleye_msgs__msg__AngularVelocityOffset__Sequence * rhs);

/// Copy an array of msg/AngularVelocityOffset messages.
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
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
bool
eagleye_msgs__msg__AngularVelocityOffset__Sequence__copy(
  const eagleye_msgs__msg__AngularVelocityOffset__Sequence * input,
  eagleye_msgs__msg__AngularVelocityOffset__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // EAGLEYE_MSGS__MSG__DETAIL__ANGULAR_VELOCITY_OFFSET__FUNCTIONS_H_
