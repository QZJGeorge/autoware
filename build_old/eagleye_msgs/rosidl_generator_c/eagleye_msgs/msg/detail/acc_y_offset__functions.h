// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from eagleye_msgs:msg/AccYOffset.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__ACC_Y_OFFSET__FUNCTIONS_H_
#define EAGLEYE_MSGS__MSG__DETAIL__ACC_Y_OFFSET__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "eagleye_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "eagleye_msgs/msg/detail/acc_y_offset__struct.h"

/// Initialize msg/AccYOffset message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * eagleye_msgs__msg__AccYOffset
 * )) before or use
 * eagleye_msgs__msg__AccYOffset__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
bool
eagleye_msgs__msg__AccYOffset__init(eagleye_msgs__msg__AccYOffset * msg);

/// Finalize msg/AccYOffset message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
void
eagleye_msgs__msg__AccYOffset__fini(eagleye_msgs__msg__AccYOffset * msg);

/// Create msg/AccYOffset message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * eagleye_msgs__msg__AccYOffset__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
eagleye_msgs__msg__AccYOffset *
eagleye_msgs__msg__AccYOffset__create();

/// Destroy msg/AccYOffset message.
/**
 * It calls
 * eagleye_msgs__msg__AccYOffset__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
void
eagleye_msgs__msg__AccYOffset__destroy(eagleye_msgs__msg__AccYOffset * msg);

/// Check for msg/AccYOffset message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
bool
eagleye_msgs__msg__AccYOffset__are_equal(const eagleye_msgs__msg__AccYOffset * lhs, const eagleye_msgs__msg__AccYOffset * rhs);

/// Copy a msg/AccYOffset message.
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
eagleye_msgs__msg__AccYOffset__copy(
  const eagleye_msgs__msg__AccYOffset * input,
  eagleye_msgs__msg__AccYOffset * output);

/// Initialize array of msg/AccYOffset messages.
/**
 * It allocates the memory for the number of elements and calls
 * eagleye_msgs__msg__AccYOffset__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
bool
eagleye_msgs__msg__AccYOffset__Sequence__init(eagleye_msgs__msg__AccYOffset__Sequence * array, size_t size);

/// Finalize array of msg/AccYOffset messages.
/**
 * It calls
 * eagleye_msgs__msg__AccYOffset__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
void
eagleye_msgs__msg__AccYOffset__Sequence__fini(eagleye_msgs__msg__AccYOffset__Sequence * array);

/// Create array of msg/AccYOffset messages.
/**
 * It allocates the memory for the array and calls
 * eagleye_msgs__msg__AccYOffset__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
eagleye_msgs__msg__AccYOffset__Sequence *
eagleye_msgs__msg__AccYOffset__Sequence__create(size_t size);

/// Destroy array of msg/AccYOffset messages.
/**
 * It calls
 * eagleye_msgs__msg__AccYOffset__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
void
eagleye_msgs__msg__AccYOffset__Sequence__destroy(eagleye_msgs__msg__AccYOffset__Sequence * array);

/// Check for msg/AccYOffset message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
bool
eagleye_msgs__msg__AccYOffset__Sequence__are_equal(const eagleye_msgs__msg__AccYOffset__Sequence * lhs, const eagleye_msgs__msg__AccYOffset__Sequence * rhs);

/// Copy an array of msg/AccYOffset messages.
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
eagleye_msgs__msg__AccYOffset__Sequence__copy(
  const eagleye_msgs__msg__AccYOffset__Sequence * input,
  eagleye_msgs__msg__AccYOffset__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // EAGLEYE_MSGS__MSG__DETAIL__ACC_Y_OFFSET__FUNCTIONS_H_
