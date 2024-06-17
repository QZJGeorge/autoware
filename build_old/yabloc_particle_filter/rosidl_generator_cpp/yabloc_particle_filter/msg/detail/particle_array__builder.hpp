// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yabloc_particle_filter:msg/ParticleArray.idl
// generated code does not contain a copyright notice

#ifndef YABLOC_PARTICLE_FILTER__MSG__DETAIL__PARTICLE_ARRAY__BUILDER_HPP_
#define YABLOC_PARTICLE_FILTER__MSG__DETAIL__PARTICLE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yabloc_particle_filter/msg/detail/particle_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yabloc_particle_filter
{

namespace msg
{

namespace builder
{

class Init_ParticleArray_particles
{
public:
  explicit Init_ParticleArray_particles(::yabloc_particle_filter::msg::ParticleArray & msg)
  : msg_(msg)
  {}
  ::yabloc_particle_filter::msg::ParticleArray particles(::yabloc_particle_filter::msg::ParticleArray::_particles_type arg)
  {
    msg_.particles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yabloc_particle_filter::msg::ParticleArray msg_;
};

class Init_ParticleArray_id
{
public:
  explicit Init_ParticleArray_id(::yabloc_particle_filter::msg::ParticleArray & msg)
  : msg_(msg)
  {}
  Init_ParticleArray_particles id(::yabloc_particle_filter::msg::ParticleArray::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ParticleArray_particles(msg_);
  }

private:
  ::yabloc_particle_filter::msg::ParticleArray msg_;
};

class Init_ParticleArray_header
{
public:
  Init_ParticleArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParticleArray_id header(::yabloc_particle_filter::msg::ParticleArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ParticleArray_id(msg_);
  }

private:
  ::yabloc_particle_filter::msg::ParticleArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yabloc_particle_filter::msg::ParticleArray>()
{
  return yabloc_particle_filter::msg::builder::Init_ParticleArray_header();
}

}  // namespace yabloc_particle_filter

#endif  // YABLOC_PARTICLE_FILTER__MSG__DETAIL__PARTICLE_ARRAY__BUILDER_HPP_
