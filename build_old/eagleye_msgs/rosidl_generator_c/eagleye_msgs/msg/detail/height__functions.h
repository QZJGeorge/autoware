// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from eagleye_msgs:msg/Height.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__HEIGHT__FUNCTIONS_H_
#define EAGLEYE_MSGS__MSG__DETAIL__HEIGHT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "eagleye_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "eagleye_msgs/msg/detail/height__struct.h"

/// Initialize msg/Height message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * eagleye_msgs__msg__Height
 * )) before or use
 * eagleye_msgs__msg__Height__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
bool
eagleye_msgs__msg__Height__init(eagleye_msgs__msg__Height * msg);

/// Finalize msg/Height message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
void
eagleye_msgs__msg__Height__fini(eagleye_msgs__msg__Height * msg);

/// Create msg/Height message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * eagleye_msgs__msg__Height__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
eagleye_msgs__msg__Height *
eagleye_msgs__msg__Height__create();

/// Destroy msg/Height message.
/**
 * It calls
 * eagleye_msgs__msg__Height__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
void
eagleye_msgs__msg__Height__destroy(eagleye_msgs__msg__Height * msg);

/// Check for msg/Height message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
bool
eagleye_msgs__msg__Height__are_equal(const eagleye_msgs__msg__Height * lhs, const eagleye_msgs__msg__Height * rhs);

/// Copy a msg/Height message.
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
eagleye_msgs__msg__Height__copy(
  const eagleye_msgs__msg__Height * input,
  eagleye_msgs__msg__Height * output);

/// Initialize array of msg/Height messages.
/**
 * It allocates the memory for the number of elements and calls
 * eagleye_msgs__msg__Height__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
bool
eagleye_msgs__msg__Height__Sequence__init(eagleye_msgs__msg__Height__Sequence * array, size_t size);

/// Finalize array of msg/Height messages.
/**
 * It calls
 * eagleye_msgs__msg__Height__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
void
eagleye_msgs__msg__Height__Sequence__fini(eagleye_msgs__msg__Height__Sequence * array);

/// Create array of msg/Height messages.
/**
 * It allocates the memory for the array and calls
 * eagleye_msgs__msg__Height__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
eagleye_msgs__msg__Height__Sequence *
eagleye_msgs__msg__Height__Sequence__create(size_t size);

/// Destroy array of msg/Height messages.
/**
 * It calls
 * eagleye_msgs__msg__Height__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
void
eagleye_msgs__msg__Height__Sequence__destroy(eagleye_msgs__msg__Height__Sequence * array);

/// Check for msg/Height message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_eagleye_msgs
bool
eagleye_msgs__msg__Height__Sequence__are_equal(const eagleye_msgs__msg__Height__Sequence * lhs, const eagleye_msgs__msg__Height__Sequence * rhs);

/// Copy an array of msg/Height messages.
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
eagleye_msgs__msg__Height__Sequence__copy(
  const eagleye_msgs__msg__Height__Sequence * input,
  eagleye_msgs__msg__Height__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // EAGLEYE_MSGS__MSG__DETAIL__HEIGHT__FUNCTIONS_H_
