// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yabloc_particle_filter:msg/Particle.idl
// generated code does not contain a copyright notice

#ifndef YABLOC_PARTICLE_FILTER__MSG__DETAIL__PARTICLE__BUILDER_HPP_
#define YABLOC_PARTICLE_FILTER__MSG__DETAIL__PARTICLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yabloc_particle_filter/msg/detail/particle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yabloc_particle_filter
{

namespace msg
{

namespace builder
{

class Init_Particle_pose
{
public:
  explicit Init_Particle_pose(::yabloc_particle_filter::msg::Particle & msg)
  : msg_(msg)
  {}
  ::yabloc_particle_filter::msg::Particle pose(::yabloc_particle_filter::msg::Particle::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yabloc_particle_filter::msg::Particle msg_;
};

class Init_Particle_weight
{
public:
  Init_Particle_weight()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Particle_pose weight(::yabloc_particle_filter::msg::Particle::_weight_type arg)
  {
    msg_.weight = std::move(arg);
    return Init_Particle_pose(msg_);
  }

private:
  ::yabloc_particle_filter::msg::Particle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yabloc_particle_filter::msg::Particle>()
{
  return yabloc_particle_filter::msg::builder::Init_Particle_weight();
}

}  // namespace yabloc_particle_filter

#endif  // YABLOC_PARTICLE_FILTER__MSG__DETAIL__PARTICLE__BUILDER_HPP_
