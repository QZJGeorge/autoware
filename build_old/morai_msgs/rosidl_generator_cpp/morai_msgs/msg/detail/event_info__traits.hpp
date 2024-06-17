// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/EventInfo.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__EVENT_INFO__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__EVENT_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "morai_msgs/msg/detail/event_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'lamps'
#include "morai_msgs/msg/detail/lamps__traits.hpp"

namespace morai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EventInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: option
  {
    out << "option: ";
    rosidl_generator_traits::value_to_yaml(msg.option, out);
    out << ", ";
  }

  // member: ctrl_mode
  {
    out << "ctrl_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.ctrl_mode, out);
    out << ", ";
  }

  // member: gear
  {
    out << "gear: ";
    rosidl_generator_traits::value_to_yaml(msg.gear, out);
    out << ", ";
  }

  // member: lamps
  {
    out << "lamps: ";
    to_flow_style_yaml(msg.lamps, out);
    out << ", ";
  }

  // member: set_pause
  {
    out << "set_pause: ";
    rosidl_generator_traits::value_to_yaml(msg.set_pause, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EventInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: option
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "option: ";
    rosidl_generator_traits::value_to_yaml(msg.option, out);
    out << "\n";
  }

  // member: ctrl_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ctrl_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.ctrl_mode, out);
    out << "\n";
  }

  // member: gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear: ";
    rosidl_generator_traits::value_to_yaml(msg.gear, out);
    out << "\n";
  }

  // member: lamps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lamps:\n";
    to_block_style_yaml(msg.lamps, out, indentation + 2);
  }

  // member: set_pause
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_pause: ";
    rosidl_generator_traits::value_to_yaml(msg.set_pause, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EventInfo & msg, bool use_flow_style = false)
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

}  // namespace morai_msgs

namespace rosidl_generator_traits
{

[[deprecated("use morai_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const morai_msgs::msg::EventInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::msg::EventInfo & msg)
{
  return morai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::msg::EventInfo>()
{
  return "morai_msgs::msg::EventInfo";
}

template<>
inline const char * name<morai_msgs::msg::EventInfo>()
{
  return "morai_msgs/msg/EventInfo";
}

template<>
struct has_fixed_size<morai_msgs::msg::EventInfo>
  : std::integral_constant<bool, has_fixed_size<morai_msgs::msg::Lamps>::value> {};

template<>
struct has_bounded_size<morai_msgs::msg::EventInfo>
  : std::integral_constant<bool, has_bounded_size<morai_msgs::msg::Lamps>::value> {};

template<>
struct is_message<morai_msgs::msg::EventInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__EVENT_INFO__TRAITS_HPP_
