// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yabloc_particle_filter:msg/Particle.idl
// generated code does not contain a copyright notice

#ifndef YABLOC_PARTICLE_FILTER__MSG__DETAIL__PARTICLE__STRUCT_H_
#define YABLOC_PARTICLE_FILTER__MSG__DETAIL__PARTICLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/Particle in the package yabloc_particle_filter.
/**
  * A representation of particle, composed of weight and pose.
 */
typedef struct yabloc_particle_filter__msg__Particle
{
  float weight;
  geometry_msgs__msg__Pose pose;
} yabloc_particle_filter__msg__Particle;

// Struct for a sequence of yabloc_particle_filter__msg__Particle.
typedef struct yabloc_particle_filter__msg__Particle__Sequence
{
  yabloc_particle_filter__msg__Particle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yabloc_particle_filter__msg__Particle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YABLOC_PARTICLE_FILTER__MSG__DETAIL__PARTICLE__STRUCT_H_
