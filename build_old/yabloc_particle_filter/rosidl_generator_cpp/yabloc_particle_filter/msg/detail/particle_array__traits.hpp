// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yabloc_particle_filter:msg/ParticleArray.idl
// generated code does not contain a copyright notice

#ifndef YABLOC_PARTICLE_FILTER__MSG__DETAIL__PARTICLE_ARRAY__TRAITS_HPP_
#define YABLOC_PARTICLE_FILTER__MSG__DETAIL__PARTICLE_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yabloc_particle_filter/msg/detail/particle_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'particles'
#include "yabloc_particle_filter/msg/detail/particle__traits.hpp"

namespace yabloc_particle_filter
{

namespace msg
{

inline void to_flow_style_yaml(
  const ParticleArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: particles
  {
    if (msg.particles.size() == 0) {
      out << "particles: []";
    } else {
      out << "particles: [";
      size_t pending_items = msg.particles.size();
      for (auto item : msg.particles) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ParticleArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: particles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.particles.size() == 0) {
      out << "particles: []\n";
    } else {
      out << "particles:\n";
      for (auto item : msg.particles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ParticleArray & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace yabloc_particle_filter

namespace rosidl_generator_traits
{

[[deprecated("use yabloc_particle_filter::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const yabloc_particle_filter::msg::ParticleArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  yabloc_particle_filter::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yabloc_particle_filter::msg::to_yaml() instead")]]
inline std::string to_yaml(const yabloc_particle_filter::msg::ParticleArray & msg)
{
  return yabloc_particle_filter::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yabloc_particle_filter::msg::ParticleArray>()
{
  return "yabloc_particle_filter::msg::ParticleArray";
}

template<>
inline const char * name<yabloc_particle_filter::msg::ParticleArray>()
{
  return "yabloc_particle_filter/msg/ParticleArray";
}

template<>
struct has_fixed_size<yabloc_particle_filter::msg::ParticleArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<yabloc_particle_filter::msg::ParticleArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<yabloc_particle_filter::msg::ParticleArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YABLOC_PARTICLE_FILTER__MSG__DETAIL__PARTICLE_ARRAY__TRAITS_HPP_
