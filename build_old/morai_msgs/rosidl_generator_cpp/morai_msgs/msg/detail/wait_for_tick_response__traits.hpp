// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/WaitForTickResponse.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__WAIT_FOR_TICK_RESPONSE__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__WAIT_FOR_TICK_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "morai_msgs/msg/detail/wait_for_tick_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'vehicle_status'
#include "morai_msgs/msg/detail/ego_vehicle_status__traits.hpp"

namespace morai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WaitForTickResponse & msg,
  std::ostream & out)
{
  out << "{";
  // member: tick_status
  {
    out << "tick_status: ";
    rosidl_generator_traits::value_to_yaml(msg.tick_status, out);
    out << ", ";
  }

  // member: pause_status
  {
    out << "pause_status: ";
    rosidl_generator_traits::value_to_yaml(msg.pause_status, out);
    out << ", ";
  }

  // member: frame
  {
    out << "frame: ";
    rosidl_generator_traits::value_to_yaml(msg.frame, out);
    out << ", ";
  }

  // member: vehicle_status
  {
    out << "vehicle_status: ";
    to_flow_style_yaml(msg.vehicle_status, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WaitForTickResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tick_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tick_status: ";
    rosidl_generator_traits::value_to_yaml(msg.tick_status, out);
    out << "\n";
  }

  // member: pause_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pause_status: ";
    rosidl_generator_traits::value_to_yaml(msg.pause_status, out);
    out << "\n";
  }

  // member: frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame: ";
    rosidl_generator_traits::value_to_yaml(msg.frame, out);
    out << "\n";
  }

  // member: vehicle_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_status:\n";
    to_block_style_yaml(msg.vehicle_status, out, indentation + 2);
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WaitForTickResponse & msg, bool use_flow_style = false)
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
  const morai_msgs::msg::WaitForTickResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::msg::WaitForTickResponse & msg)
{
  return morai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::msg::WaitForTickResponse>()
{
  return "morai_msgs::msg::WaitForTickResponse";
}

template<>
inline const char * name<morai_msgs::msg::WaitForTickResponse>()
{
  return "morai_msgs/msg/WaitForTickResponse";
}

template<>
struct has_fixed_size<morai_msgs::msg::WaitForTickResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::WaitForTickResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::WaitForTickResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__WAIT_FOR_TICK_RESPONSE__TRAITS_HPP_
