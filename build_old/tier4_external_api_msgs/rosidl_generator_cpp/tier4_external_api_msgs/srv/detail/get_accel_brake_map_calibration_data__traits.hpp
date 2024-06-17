// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_external_api_msgs:srv/GetAccelBrakeMapCalibrationData.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_ACCEL_BRAKE_MAP_CALIBRATION_DATA__TRAITS_HPP_
#define TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_ACCEL_BRAKE_MAP_CALIBRATION_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_external_api_msgs/srv/detail/get_accel_brake_map_calibration_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tier4_external_api_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetAccelBrakeMapCalibrationData_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetAccelBrakeMapCalibrationData_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetAccelBrakeMapCalibrationData_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tier4_external_api_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_external_api_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_external_api_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_external_api_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request & msg)
{
  return tier4_external_api_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request>()
{
  return "tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request";
}

template<>
inline const char * name<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request>()
{
  return "tier4_external_api_msgs/srv/GetAccelBrakeMapCalibrationData_Request";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tier4_external_api_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetAccelBrakeMapCalibrationData_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: graph_image
  {
    if (msg.graph_image.size() == 0) {
      out << "graph_image: []";
    } else {
      out << "graph_image: [";
      size_t pending_items = msg.graph_image.size();
      for (auto item : msg.graph_image) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: accel_map
  {
    out << "accel_map: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_map, out);
    out << ", ";
  }

  // member: brake_map
  {
    out << "brake_map: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_map, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetAccelBrakeMapCalibrationData_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: graph_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.graph_image.size() == 0) {
      out << "graph_image: []\n";
    } else {
      out << "graph_image:\n";
      for (auto item : msg.graph_image) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accel_map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_map: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_map, out);
    out << "\n";
  }

  // member: brake_map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_map: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_map, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetAccelBrakeMapCalibrationData_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tier4_external_api_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_external_api_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_external_api_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_external_api_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response & msg)
{
  return tier4_external_api_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response>()
{
  return "tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response";
}

template<>
inline const char * name<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response>()
{
  return "tier4_external_api_msgs/srv/GetAccelBrakeMapCalibrationData_Response";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData>()
{
  return "tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData";
}

template<>
inline const char * name<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData>()
{
  return "tier4_external_api_msgs/srv/GetAccelBrakeMapCalibrationData";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData>
  : std::integral_constant<
    bool,
    has_fixed_size<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request>::value &&
    has_fixed_size<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response>::value
  >
{
};

template<>
struct has_bounded_size<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData>
  : std::integral_constant<
    bool,
    has_bounded_size<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request>::value &&
    has_bounded_size<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response>::value
  >
{
};

template<>
struct is_service<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData>
  : std::true_type
{
};

template<>
struct is_service_request<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_ACCEL_BRAKE_MAP_CALIBRATION_DATA__TRAITS_HPP_
