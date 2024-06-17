// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from yabloc_particle_filter:msg/ParticleArray.idl
// generated code does not contain a copyright notice

#ifndef YABLOC_PARTICLE_FILTER__MSG__DETAIL__PARTICLE_ARRAY__FUNCTIONS_H_
#define YABLOC_PARTICLE_FILTER__MSG__DETAIL__PARTICLE_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "yabloc_particle_filter/msg/rosidl_generator_c__visibility_control.h"

#include "yabloc_particle_filter/msg/detail/particle_array__struct.h"

/// Initialize msg/ParticleArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * yabloc_particle_filter__msg__ParticleArray
 * )) before or use
 * yabloc_particle_filter__msg__ParticleArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_yabloc_particle_filter
bool
yabloc_particle_filter__msg__ParticleArray__init(yabloc_particle_filter__msg__ParticleArray * msg);

/// Finalize msg/ParticleArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yabloc_particle_filter
void
yabloc_particle_filter__msg__ParticleArray__fini(yabloc_particle_filter__msg__ParticleArray * msg);

/// Create msg/ParticleArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * yabloc_particle_filter__msg__ParticleArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_yabloc_particle_filter
yabloc_particle_filter__msg__ParticleArray *
yabloc_particle_filter__msg__ParticleArray__create();

/// Destroy msg/ParticleArray message.
/**
 * It calls
 * yabloc_particle_filter__msg__ParticleArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yabloc_particle_filter
void
yabloc_particle_filter__msg__ParticleArray__destroy(yabloc_particle_filter__msg__ParticleArray * msg);

/// Check for msg/ParticleArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_yabloc_particle_filter
bool
yabloc_particle_filter__msg__ParticleArray__are_equal(const yabloc_particle_filter__msg__ParticleArray * lhs, const yabloc_particle_filter__msg__ParticleArray * rhs);

/// Copy a msg/ParticleArray message.
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
ROSIDL_GENERATOR_C_PUBLIC_yabloc_particle_filter
bool
yabloc_particle_filter__msg__ParticleArray__copy(
  const yabloc_particle_filter__msg__ParticleArray * input,
  yabloc_particle_filter__msg__ParticleArray * output);

/// Initialize array of msg/ParticleArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * yabloc_particle_filter__msg__ParticleArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_yabloc_particle_filter
bool
yabloc_particle_filter__msg__ParticleArray__Sequence__init(yabloc_particle_filter__msg__ParticleArray__Sequence * array, size_t size);

/// Finalize array of msg/ParticleArray messages.
/**
 * It calls
 * yabloc_particle_filter__msg__ParticleArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yabloc_particle_filter
void
yabloc_particle_filter__msg__ParticleArray__Sequence__fini(yabloc_particle_filter__msg__ParticleArray__Sequence * array);

/// Create array of msg/ParticleArray messages.
/**
 * It allocates the memory for the array and calls
 * yabloc_particle_filter__msg__ParticleArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_yabloc_particle_filter
yabloc_particle_filter__msg__ParticleArray__Sequence *
yabloc_particle_filter__msg__ParticleArray__Sequence__create(size_t size);

/// Destroy array of msg/ParticleArray messages.
/**
 * It calls
 * yabloc_particle_filter__msg__ParticleArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yabloc_particle_filter
void
yabloc_particle_filter__msg__ParticleArray__Sequence__destroy(yabloc_particle_filter__msg__ParticleArray__Sequence * array);

/// Check for msg/ParticleArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_yabloc_particle_filter
bool
yabloc_particle_filter__msg__ParticleArray__Sequence__are_equal(const yabloc_particle_filter__msg__ParticleArray__Sequence * lhs, const yabloc_particle_filter__msg__ParticleArray__Sequence * rhs);

/// Copy an array of msg/ParticleArray messages.
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
ROSIDL_GENERATOR_C_PUBLIC_yabloc_particle_filter
bool
yabloc_particle_filter__msg__ParticleArray__Sequence__copy(
  const yabloc_particle_filter__msg__ParticleArray__Sequence * input,
  yabloc_particle_filter__msg__ParticleArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // YABLOC_PARTICLE_FILTER__MSG__DETAIL__PARTICLE_ARRAY__FUNCTIONS_H_
