// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/MoraiSimConfig.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MORAI_SIM_CONFIG__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__MORAI_SIM_CONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "morai_msgs/msg/detail/morai_sim_config__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace morai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MoraiSimConfig & msg,
  std::ostream & out)
{
  out << "{";
  // member: sensor_config_file_name
  {
    out << "sensor_config_file_name: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_config_file_name, out);
    out << ", ";
  }

  // member: publisher_list
  {
    out << "publisher_list: ";
    rosidl_generator_traits::value_to_yaml(msg.publisher_list, out);
    out << ", ";
  }

  // member: subscriber_list
  {
    out << "subscriber_list: ";
    rosidl_generator_traits::value_to_yaml(msg.subscriber_list, out);
    out << ", ";
  }

  // member: service_list
  {
    out << "service_list: ";
    rosidl_generator_traits::value_to_yaml(msg.service_list, out);
    out << ", ";
  }

  // member: camera_list
  {
    out << "camera_list: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_list, out);
    out << ", ";
  }

  // member: gps_list
  {
    out << "gps_list: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_list, out);
    out << ", ";
  }

  // member: imu_list
  {
    out << "imu_list: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_list, out);
    out << ", ";
  }

  // member: lidar_list
  {
    out << "lidar_list: ";
    rosidl_generator_traits::value_to_yaml(msg.lidar_list, out);
    out << ", ";
  }

  // member: radar_list
  {
    out << "radar_list: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_list, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoraiSimConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sensor_config_file_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_config_file_name: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_config_file_name, out);
    out << "\n";
  }

  // member: publisher_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "publisher_list: ";
    rosidl_generator_traits::value_to_yaml(msg.publisher_list, out);
    out << "\n";
  }

  // member: subscriber_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "subscriber_list: ";
    rosidl_generator_traits::value_to_yaml(msg.subscriber_list, out);
    out << "\n";
  }

  // member: service_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "service_list: ";
    rosidl_generator_traits::value_to_yaml(msg.service_list, out);
    out << "\n";
  }

  // member: camera_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_list: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_list, out);
    out << "\n";
  }

  // member: gps_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_list: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_list, out);
    out << "\n";
  }

  // member: imu_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_list: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_list, out);
    out << "\n";
  }

  // member: lidar_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lidar_list: ";
    rosidl_generator_traits::value_to_yaml(msg.lidar_list, out);
    out << "\n";
  }

  // member: radar_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_list: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_list, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoraiSimConfig & msg, bool use_flow_style = false)
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
  const morai_msgs::msg::MoraiSimConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::msg::MoraiSimConfig & msg)
{
  return morai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::msg::MoraiSimConfig>()
{
  return "morai_msgs::msg::MoraiSimConfig";
}

template<>
inline const char * name<morai_msgs::msg::MoraiSimConfig>()
{
  return "morai_msgs/msg/MoraiSimConfig";
}

template<>
struct has_fixed_size<morai_msgs::msg::MoraiSimConfig>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::MoraiSimConfig>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::MoraiSimConfig>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__MORAI_SIM_CONFIG__TRAITS_HPP_
