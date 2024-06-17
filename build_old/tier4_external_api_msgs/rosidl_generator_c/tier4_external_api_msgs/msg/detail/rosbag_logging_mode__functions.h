// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tier4_external_api_msgs:msg/RosbagLoggingMode.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_LOGGING_MODE__FUNCTIONS_H_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_LOGGING_MODE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tier4_external_api_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tier4_external_api_msgs/msg/detail/rosbag_logging_mode__struct.h"

/// Initialize msg/RosbagLoggingMode message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tier4_external_api_msgs__msg__RosbagLoggingMode
 * )) before or use
 * tier4_external_api_msgs__msg__RosbagLoggingMode__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_external_api_msgs
bool
tier4_external_api_msgs__msg__RosbagLoggingMode__init(tier4_external_api_msgs__msg__RosbagLoggingMode * msg);

/// Finalize msg/RosbagLoggingMode message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_external_api_msgs
void
tier4_external_api_msgs__msg__RosbagLoggingMode__fini(tier4_external_api_msgs__msg__RosbagLoggingMode * msg);

/// Create msg/RosbagLoggingMode message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tier4_external_api_msgs__msg__RosbagLoggingMode__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_external_api_msgs
tier4_external_api_msgs__msg__RosbagLoggingMode *
tier4_external_api_msgs__msg__RosbagLoggingMode__create();

/// Destroy msg/RosbagLoggingMode message.
/**
 * It calls
 * tier4_external_api_msgs__msg__RosbagLoggingMode__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_external_api_msgs
void
tier4_external_api_msgs__msg__RosbagLoggingMode__destroy(tier4_external_api_msgs__msg__RosbagLoggingMode * msg);

/// Check for msg/RosbagLoggingMode message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_external_api_msgs
bool
tier4_external_api_msgs__msg__RosbagLoggingMode__are_equal(const tier4_external_api_msgs__msg__RosbagLoggingMode * lhs, const tier4_external_api_msgs__msg__RosbagLoggingMode * rhs);

/// Copy a msg/RosbagLoggingMode message.
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
ROSIDL_GENERATOR_C_PUBLIC_tier4_external_api_msgs
bool
tier4_external_api_msgs__msg__RosbagLoggingMode__copy(
  const tier4_external_api_msgs__msg__RosbagLoggingMode * input,
  tier4_external_api_msgs__msg__RosbagLoggingMode * output);

/// Initialize array of msg/RosbagLoggingMode messages.
/**
 * It allocates the memory for the number of elements and calls
 * tier4_external_api_msgs__msg__RosbagLoggingMode__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_external_api_msgs
bool
tier4_external_api_msgs__msg__RosbagLoggingMode__Sequence__init(tier4_external_api_msgs__msg__RosbagLoggingMode__Sequence * array, size_t size);

/// Finalize array of msg/RosbagLoggingMode messages.
/**
 * It calls
 * tier4_external_api_msgs__msg__RosbagLoggingMode__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_external_api_msgs
void
tier4_external_api_msgs__msg__RosbagLoggingMode__Sequence__fini(tier4_external_api_msgs__msg__RosbagLoggingMode__Sequence * array);

/// Create array of msg/RosbagLoggingMode messages.
/**
 * It allocates the memory for the array and calls
 * tier4_external_api_msgs__msg__RosbagLoggingMode__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_external_api_msgs
tier4_external_api_msgs__msg__RosbagLoggingMode__Sequence *
tier4_external_api_msgs__msg__RosbagLoggingMode__Sequence__create(size_t size);

/// Destroy array of msg/RosbagLoggingMode messages.
/**
 * It calls
 * tier4_external_api_msgs__msg__RosbagLoggingMode__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_external_api_msgs
void
tier4_external_api_msgs__msg__RosbagLoggingMode__Sequence__destroy(tier4_external_api_msgs__msg__RosbagLoggingMode__Sequence * array);

/// Check for msg/RosbagLoggingMode message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_external_api_msgs
bool
tier4_external_api_msgs__msg__RosbagLoggingMode__Sequence__are_equal(const tier4_external_api_msgs__msg__RosbagLoggingMode__Sequence * lhs, const tier4_external_api_msgs__msg__RosbagLoggingMode__Sequence * rhs);

/// Copy an array of msg/RosbagLoggingMode messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tier4_external_api_msgs
bool
tier4_external_api_msgs__msg__RosbagLoggingMode__Sequence__copy(
  const tier4_external_api_msgs__msg__RosbagLoggingMode__Sequence * input,
  tier4_external_api_msgs__msg__RosbagLoggingMode__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_LOGGING_MODE__FUNCTIONS_H_
