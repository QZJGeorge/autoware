// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/SyncModeScenarioLoad.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SYNC_MODE_SCENARIO_LOAD__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__SYNC_MODE_SCENARIO_LOAD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "morai_msgs/msg/detail/sync_mode_scenario_load__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace morai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SyncModeScenarioLoad & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame
  {
    out << "frame: ";
    rosidl_generator_traits::value_to_yaml(msg.frame, out);
    out << ", ";
  }

  // member: file_name
  {
    out << "file_name: ";
    rosidl_generator_traits::value_to_yaml(msg.file_name, out);
    out << ", ";
  }

  // member: load_network_connection_data
  {
    out << "load_network_connection_data: ";
    rosidl_generator_traits::value_to_yaml(msg.load_network_connection_data, out);
    out << ", ";
  }

  // member: delete_all
  {
    out << "delete_all: ";
    rosidl_generator_traits::value_to_yaml(msg.delete_all, out);
    out << ", ";
  }

  // member: load_ego_vehicle_data
  {
    out << "load_ego_vehicle_data: ";
    rosidl_generator_traits::value_to_yaml(msg.load_ego_vehicle_data, out);
    out << ", ";
  }

  // member: load_surrounding_vehicle_data
  {
    out << "load_surrounding_vehicle_data: ";
    rosidl_generator_traits::value_to_yaml(msg.load_surrounding_vehicle_data, out);
    out << ", ";
  }

  // member: load_pedestrian_data
  {
    out << "load_pedestrian_data: ";
    rosidl_generator_traits::value_to_yaml(msg.load_pedestrian_data, out);
    out << ", ";
  }

  // member: load_obstacle_data
  {
    out << "load_obstacle_data: ";
    rosidl_generator_traits::value_to_yaml(msg.load_obstacle_data, out);
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
  const SyncModeScenarioLoad & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame: ";
    rosidl_generator_traits::value_to_yaml(msg.frame, out);
    out << "\n";
  }

  // member: file_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "file_name: ";
    rosidl_generator_traits::value_to_yaml(msg.file_name, out);
    out << "\n";
  }

  // member: load_network_connection_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_network_connection_data: ";
    rosidl_generator_traits::value_to_yaml(msg.load_network_connection_data, out);
    out << "\n";
  }

  // member: delete_all
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delete_all: ";
    rosidl_generator_traits::value_to_yaml(msg.delete_all, out);
    out << "\n";
  }

  // member: load_ego_vehicle_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_ego_vehicle_data: ";
    rosidl_generator_traits::value_to_yaml(msg.load_ego_vehicle_data, out);
    out << "\n";
  }

  // member: load_surrounding_vehicle_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_surrounding_vehicle_data: ";
    rosidl_generator_traits::value_to_yaml(msg.load_surrounding_vehicle_data, out);
    out << "\n";
  }

  // member: load_pedestrian_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_pedestrian_data: ";
    rosidl_generator_traits::value_to_yaml(msg.load_pedestrian_data, out);
    out << "\n";
  }

  // member: load_obstacle_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_obstacle_data: ";
    rosidl_generator_traits::value_to_yaml(msg.load_obstacle_data, out);
    out << "\n";
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

inline std::string to_yaml(const SyncModeScenarioLoad & msg, bool use_flow_style = false)
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
  const morai_msgs::msg::SyncModeScenarioLoad & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::msg::SyncModeScenarioLoad & msg)
{
  return morai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::msg::SyncModeScenarioLoad>()
{
  return "morai_msgs::msg::SyncModeScenarioLoad";
}

template<>
inline const char * name<morai_msgs::msg::SyncModeScenarioLoad>()
{
  return "morai_msgs/msg/SyncModeScenarioLoad";
}

template<>
struct has_fixed_size<morai_msgs::msg::SyncModeScenarioLoad>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::SyncModeScenarioLoad>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::SyncModeScenarioLoad>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__SYNC_MODE_SCENARIO_LOAD__TRAITS_HPP_
