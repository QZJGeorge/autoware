// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pandar_msgs:msg/PandarPacket.idl
// generated code does not contain a copyright notice

#ifndef PANDAR_MSGS__MSG__DETAIL__PANDAR_PACKET__FUNCTIONS_H_
#define PANDAR_MSGS__MSG__DETAIL__PANDAR_PACKET__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pandar_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "pandar_msgs/msg/detail/pandar_packet__struct.h"

/// Initialize msg/PandarPacket message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pandar_msgs__msg__PandarPacket
 * )) before or use
 * pandar_msgs__msg__PandarPacket__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pandar_msgs
bool
pandar_msgs__msg__PandarPacket__init(pandar_msgs__msg__PandarPacket * msg);

/// Finalize msg/PandarPacket message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pandar_msgs
void
pandar_msgs__msg__PandarPacket__fini(pandar_msgs__msg__PandarPacket * msg);

/// Create msg/PandarPacket message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pandar_msgs__msg__PandarPacket__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pandar_msgs
pandar_msgs__msg__PandarPacket *
pandar_msgs__msg__PandarPacket__create();

/// Destroy msg/PandarPacket message.
/**
 * It calls
 * pandar_msgs__msg__PandarPacket__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pandar_msgs
void
pandar_msgs__msg__PandarPacket__destroy(pandar_msgs__msg__PandarPacket * msg);

/// Check for msg/PandarPacket message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pandar_msgs
bool
pandar_msgs__msg__PandarPacket__are_equal(const pandar_msgs__msg__PandarPacket * lhs, const pandar_msgs__msg__PandarPacket * rhs);

/// Copy a msg/PandarPacket message.
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
ROSIDL_GENERATOR_C_PUBLIC_pandar_msgs
bool
pandar_msgs__msg__PandarPacket__copy(
  const pandar_msgs__msg__PandarPacket * input,
  pandar_msgs__msg__PandarPacket * output);

/// Initialize array of msg/PandarPacket messages.
/**
 * It allocates the memory for the number of elements and calls
 * pandar_msgs__msg__PandarPacket__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pandar_msgs
bool
pandar_msgs__msg__PandarPacket__Sequence__init(pandar_msgs__msg__PandarPacket__Sequence * array, size_t size);

/// Finalize array of msg/PandarPacket messages.
/**
 * It calls
 * pandar_msgs__msg__PandarPacket__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pandar_msgs
void
pandar_msgs__msg__PandarPacket__Sequence__fini(pandar_msgs__msg__PandarPacket__Sequence * array);

/// Create array of msg/PandarPacket messages.
/**
 * It allocates the memory for the array and calls
 * pandar_msgs__msg__PandarPacket__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pandar_msgs
pandar_msgs__msg__PandarPacket__Sequence *
pandar_msgs__msg__PandarPacket__Sequence__create(size_t size);

/// Destroy array of msg/PandarPacket messages.
/**
 * It calls
 * pandar_msgs__msg__PandarPacket__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pandar_msgs
void
pandar_msgs__msg__PandarPacket__Sequence__destroy(pandar_msgs__msg__PandarPacket__Sequence * array);

/// Check for msg/PandarPacket message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pandar_msgs
bool
pandar_msgs__msg__PandarPacket__Sequence__are_equal(const pandar_msgs__msg__PandarPacket__Sequence * lhs, const pandar_msgs__msg__PandarPacket__Sequence * rhs);

/// Copy an array of msg/PandarPacket messages.
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
ROSIDL_GENERATOR_C_PUBLIC_pandar_msgs
bool
pandar_msgs__msg__PandarPacket__Sequence__copy(
  const pandar_msgs__msg__PandarPacket__Sequence * input,
  pandar_msgs__msg__PandarPacket__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PANDAR_MSGS__MSG__DETAIL__PANDAR_PACKET__FUNCTIONS_H_
