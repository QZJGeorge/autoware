// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yabloc_particle_filter:msg/ParticleArray.idl
// generated code does not contain a copyright notice

#ifndef YABLOC_PARTICLE_FILTER__MSG__DETAIL__PARTICLE_ARRAY__STRUCT_H_
#define YABLOC_PARTICLE_FILTER__MSG__DETAIL__PARTICLE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'particles'
#include "yabloc_particle_filter/msg/detail/particle__struct.h"

/// Struct defined in msg/ParticleArray in the package yabloc_particle_filter.
/**
  * An array of particles with a header for global reference.
 */
typedef struct yabloc_particle_filter__msg__ParticleArray
{
  std_msgs__msg__Header header;
  int32_t id;
  yabloc_particle_filter__msg__Particle__Sequence particles;
} yabloc_particle_filter__msg__ParticleArray;

// Struct for a sequence of yabloc_particle_filter__msg__ParticleArray.
typedef struct yabloc_particle_filter__msg__ParticleArray__Sequence
{
  yabloc_particle_filter__msg__ParticleArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yabloc_particle_filter__msg__ParticleArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YABLOC_PARTICLE_FILTER__MSG__DETAIL__PARTICLE_ARRAY__STRUCT_H_
