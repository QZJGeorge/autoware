// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rtklib_msgs:msg/RtklibNav.idl
// generated code does not contain a copyright notice

#ifndef RTKLIB_MSGS__MSG__DETAIL__RTKLIB_NAV__FUNCTIONS_H_
#define RTKLIB_MSGS__MSG__DETAIL__RTKLIB_NAV__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rtklib_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rtklib_msgs/msg/detail/rtklib_nav__struct.h"

/// Initialize msg/RtklibNav message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rtklib_msgs__msg__RtklibNav
 * )) before or use
 * rtklib_msgs__msg__RtklibNav__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rtklib_msgs
bool
rtklib_msgs__msg__RtklibNav__init(rtklib_msgs__msg__RtklibNav * msg);

/// Finalize msg/RtklibNav message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtklib_msgs
void
rtklib_msgs__msg__RtklibNav__fini(rtklib_msgs__msg__RtklibNav * msg);

/// Create msg/RtklibNav message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rtklib_msgs__msg__RtklibNav__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtklib_msgs
rtklib_msgs__msg__RtklibNav *
rtklib_msgs__msg__RtklibNav__create();

/// Destroy msg/RtklibNav message.
/**
 * It calls
 * rtklib_msgs__msg__RtklibNav__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtklib_msgs
void
rtklib_msgs__msg__RtklibNav__destroy(rtklib_msgs__msg__RtklibNav * msg);

/// Check for msg/RtklibNav message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtklib_msgs
bool
rtklib_msgs__msg__RtklibNav__are_equal(const rtklib_msgs__msg__RtklibNav * lhs, const rtklib_msgs__msg__RtklibNav * rhs);

/// Copy a msg/RtklibNav message.
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
ROSIDL_GENERATOR_C_PUBLIC_rtklib_msgs
bool
rtklib_msgs__msg__RtklibNav__copy(
  const rtklib_msgs__msg__RtklibNav * input,
  rtklib_msgs__msg__RtklibNav * output);

/// Initialize array of msg/RtklibNav messages.
/**
 * It allocates the memory for the number of elements and calls
 * rtklib_msgs__msg__RtklibNav__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtklib_msgs
bool
rtklib_msgs__msg__RtklibNav__Sequence__init(rtklib_msgs__msg__RtklibNav__Sequence * array, size_t size);

/// Finalize array of msg/RtklibNav messages.
/**
 * It calls
 * rtklib_msgs__msg__RtklibNav__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtklib_msgs
void
rtklib_msgs__msg__RtklibNav__Sequence__fini(rtklib_msgs__msg__RtklibNav__Sequence * array);

/// Create array of msg/RtklibNav messages.
/**
 * It allocates the memory for the array and calls
 * rtklib_msgs__msg__RtklibNav__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtklib_msgs
rtklib_msgs__msg__RtklibNav__Sequence *
rtklib_msgs__msg__RtklibNav__Sequence__create(size_t size);

/// Destroy array of msg/RtklibNav messages.
/**
 * It calls
 * rtklib_msgs__msg__RtklibNav__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtklib_msgs
void
rtklib_msgs__msg__RtklibNav__Sequence__destroy(rtklib_msgs__msg__RtklibNav__Sequence * array);

/// Check for msg/RtklibNav message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtklib_msgs
bool
rtklib_msgs__msg__RtklibNav__Sequence__are_equal(const rtklib_msgs__msg__RtklibNav__Sequence * lhs, const rtklib_msgs__msg__RtklibNav__Sequence * rhs);

/// Copy an array of msg/RtklibNav messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rtklib_msgs
bool
rtklib_msgs__msg__RtklibNav__Sequence__copy(
  const rtklib_msgs__msg__RtklibNav__Sequence * input,
  rtklib_msgs__msg__RtklibNav__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RTKLIB_MSGS__MSG__DETAIL__RTKLIB_NAV__FUNCTIONS_H_
