// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_external_api_msgs:msg/RouteSection.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROUTE_SECTION__TRAITS_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROUTE_SECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_external_api_msgs/msg/detail/route_section__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tier4_external_api_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RouteSection & msg,
  std::ostream & out)
{
  out << "{";
  // member: preferred_lane_id
  {
    out << "preferred_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.preferred_lane_id, out);
    out << ", ";
  }

  // member: lane_ids
  {
    if (msg.lane_ids.size() == 0) {
      out << "lane_ids: []";
    } else {
      out << "lane_ids: [";
      size_t pending_items = msg.lane_ids.size();
      for (auto item : msg.lane_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: continued_lane_ids
  {
    if (msg.continued_lane_ids.size() == 0) {
      out << "continued_lane_ids: []";
    } else {
      out << "continued_lane_ids: [";
      size_t pending_items = msg.continued_lane_ids.size();
      for (auto item : msg.continued_lane_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const RouteSection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: preferred_lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preferred_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.preferred_lane_id, out);
    out << "\n";
  }

  // member: lane_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_ids.size() == 0) {
      out << "lane_ids: []\n";
    } else {
      out << "lane_ids:\n";
      for (auto item : msg.lane_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: continued_lane_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.continued_lane_ids.size() == 0) {
      out << "continued_lane_ids: []\n";
    } else {
      out << "continued_lane_ids:\n";
      for (auto item : msg.continued_lane_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RouteSection & msg, bool use_flow_style = false)
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

}  // namespace tier4_external_api_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_external_api_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_external_api_msgs::msg::RouteSection & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_external_api_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_external_api_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_external_api_msgs::msg::RouteSection & msg)
{
  return tier4_external_api_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_external_api_msgs::msg::RouteSection>()
{
  return "tier4_external_api_msgs::msg::RouteSection";
}

template<>
inline const char * name<tier4_external_api_msgs::msg::RouteSection>()
{
  return "tier4_external_api_msgs/msg/RouteSection";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::msg::RouteSection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::msg::RouteSection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_external_api_msgs::msg::RouteSection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROUTE_SECTION__TRAITS_HPP_
