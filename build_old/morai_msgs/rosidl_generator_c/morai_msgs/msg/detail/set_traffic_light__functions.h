// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from morai_msgs:msg/SetTrafficLight.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SET_TRAFFIC_LIGHT__FUNCTIONS_H_
#define MORAI_MSGS__MSG__DETAIL__SET_TRAFFIC_LIGHT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "morai_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "morai_msgs/msg/detail/set_traffic_light__struct.h"

/// Initialize msg/SetTrafficLight message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * morai_msgs__msg__SetTrafficLight
 * )) before or use
 * morai_msgs__msg__SetTrafficLight__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
bool
morai_msgs__msg__SetTrafficLight__init(morai_msgs__msg__SetTrafficLight * msg);

/// Finalize msg/SetTrafficLight message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
void
morai_msgs__msg__SetTrafficLight__fini(morai_msgs__msg__SetTrafficLight * msg);

/// Create msg/SetTrafficLight message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * morai_msgs__msg__SetTrafficLight__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
morai_msgs__msg__SetTrafficLight *
morai_msgs__msg__SetTrafficLight__create();

/// Destroy msg/SetTrafficLight message.
/**
 * It calls
 * morai_msgs__msg__SetTrafficLight__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
void
morai_msgs__msg__SetTrafficLight__destroy(morai_msgs__msg__SetTrafficLight * msg);

/// Check for msg/SetTrafficLight message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
bool
morai_msgs__msg__SetTrafficLight__are_equal(const morai_msgs__msg__SetTrafficLight * lhs, const morai_msgs__msg__SetTrafficLight * rhs);

/// Copy a msg/SetTrafficLight message.
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
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
bool
morai_msgs__msg__SetTrafficLight__copy(
  const morai_msgs__msg__SetTrafficLight * input,
  morai_msgs__msg__SetTrafficLight * output);

/// Initialize array of msg/SetTrafficLight messages.
/**
 * It allocates the memory for the number of elements and calls
 * morai_msgs__msg__SetTrafficLight__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
bool
morai_msgs__msg__SetTrafficLight__Sequence__init(morai_msgs__msg__SetTrafficLight__Sequence * array, size_t size);

/// Finalize array of msg/SetTrafficLight messages.
/**
 * It calls
 * morai_msgs__msg__SetTrafficLight__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
void
morai_msgs__msg__SetTrafficLight__Sequence__fini(morai_msgs__msg__SetTrafficLight__Sequence * array);

/// Create array of msg/SetTrafficLight messages.
/**
 * It allocates the memory for the array and calls
 * morai_msgs__msg__SetTrafficLight__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
morai_msgs__msg__SetTrafficLight__Sequence *
morai_msgs__msg__SetTrafficLight__Sequence__create(size_t size);

/// Destroy array of msg/SetTrafficLight messages.
/**
 * It calls
 * morai_msgs__msg__SetTrafficLight__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
void
morai_msgs__msg__SetTrafficLight__Sequence__destroy(morai_msgs__msg__SetTrafficLight__Sequence * array);

/// Check for msg/SetTrafficLight message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
bool
morai_msgs__msg__SetTrafficLight__Sequence__are_equal(const morai_msgs__msg__SetTrafficLight__Sequence * lhs, const morai_msgs__msg__SetTrafficLight__Sequence * rhs);

/// Copy an array of msg/SetTrafficLight messages.
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
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
bool
morai_msgs__msg__SetTrafficLight__Sequence__copy(
  const morai_msgs__msg__SetTrafficLight__Sequence * input,
  morai_msgs__msg__SetTrafficLight__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__SET_TRAFFIC_LIGHT__FUNCTIONS_H_
