// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tier4_rtc_msgs:msg/CooperateResponse.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_RESPONSE__FUNCTIONS_H_
#define TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_RESPONSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tier4_rtc_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tier4_rtc_msgs/msg/detail/cooperate_response__struct.h"

/// Initialize msg/CooperateResponse message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tier4_rtc_msgs__msg__CooperateResponse
 * )) before or use
 * tier4_rtc_msgs__msg__CooperateResponse__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_rtc_msgs
bool
tier4_rtc_msgs__msg__CooperateResponse__init(tier4_rtc_msgs__msg__CooperateResponse * msg);

/// Finalize msg/CooperateResponse message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_rtc_msgs
void
tier4_rtc_msgs__msg__CooperateResponse__fini(tier4_rtc_msgs__msg__CooperateResponse * msg);

/// Create msg/CooperateResponse message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tier4_rtc_msgs__msg__CooperateResponse__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_rtc_msgs
tier4_rtc_msgs__msg__CooperateResponse *
tier4_rtc_msgs__msg__CooperateResponse__create();

/// Destroy msg/CooperateResponse message.
/**
 * It calls
 * tier4_rtc_msgs__msg__CooperateResponse__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_rtc_msgs
void
tier4_rtc_msgs__msg__CooperateResponse__destroy(tier4_rtc_msgs__msg__CooperateResponse * msg);

/// Check for msg/CooperateResponse message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_rtc_msgs
bool
tier4_rtc_msgs__msg__CooperateResponse__are_equal(const tier4_rtc_msgs__msg__CooperateResponse * lhs, const tier4_rtc_msgs__msg__CooperateResponse * rhs);

/// Copy a msg/CooperateResponse message.
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
ROSIDL_GENERATOR_C_PUBLIC_tier4_rtc_msgs
bool
tier4_rtc_msgs__msg__CooperateResponse__copy(
  const tier4_rtc_msgs__msg__CooperateResponse * input,
  tier4_rtc_msgs__msg__CooperateResponse * output);

/// Initialize array of msg/CooperateResponse messages.
/**
 * It allocates the memory for the number of elements and calls
 * tier4_rtc_msgs__msg__CooperateResponse__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_rtc_msgs
bool
tier4_rtc_msgs__msg__CooperateResponse__Sequence__init(tier4_rtc_msgs__msg__CooperateResponse__Sequence * array, size_t size);

/// Finalize array of msg/CooperateResponse messages.
/**
 * It calls
 * tier4_rtc_msgs__msg__CooperateResponse__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_rtc_msgs
void
tier4_rtc_msgs__msg__CooperateResponse__Sequence__fini(tier4_rtc_msgs__msg__CooperateResponse__Sequence * array);

/// Create array of msg/CooperateResponse messages.
/**
 * It allocates the memory for the array and calls
 * tier4_rtc_msgs__msg__CooperateResponse__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_rtc_msgs
tier4_rtc_msgs__msg__CooperateResponse__Sequence *
tier4_rtc_msgs__msg__CooperateResponse__Sequence__create(size_t size);

/// Destroy array of msg/CooperateResponse messages.
/**
 * It calls
 * tier4_rtc_msgs__msg__CooperateResponse__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_rtc_msgs
void
tier4_rtc_msgs__msg__CooperateResponse__Sequence__destroy(tier4_rtc_msgs__msg__CooperateResponse__Sequence * array);

/// Check for msg/CooperateResponse message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_rtc_msgs
bool
tier4_rtc_msgs__msg__CooperateResponse__Sequence__are_equal(const tier4_rtc_msgs__msg__CooperateResponse__Sequence * lhs, const tier4_rtc_msgs__msg__CooperateResponse__Sequence * rhs);

/// Copy an array of msg/CooperateResponse messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tier4_rtc_msgs
bool
tier4_rtc_msgs__msg__CooperateResponse__Sequence__copy(
  const tier4_rtc_msgs__msg__CooperateResponse__Sequence * input,
  tier4_rtc_msgs__msg__CooperateResponse__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_RESPONSE__FUNCTIONS_H_
