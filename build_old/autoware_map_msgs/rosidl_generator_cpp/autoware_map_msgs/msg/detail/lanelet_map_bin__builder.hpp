// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_map_msgs:msg/LaneletMapBin.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__LANELET_MAP_BIN__BUILDER_HPP_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__LANELET_MAP_BIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_map_msgs/msg/detail/lanelet_map_bin__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_map_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneletMapBin_data
{
public:
  explicit Init_LaneletMapBin_data(::autoware_map_msgs::msg::LaneletMapBin & msg)
  : msg_(msg)
  {}
  ::autoware_map_msgs::msg::LaneletMapBin data(::autoware_map_msgs::msg::LaneletMapBin::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_map_msgs::msg::LaneletMapBin msg_;
};

class Init_LaneletMapBin_name_map
{
public:
  explicit Init_LaneletMapBin_name_map(::autoware_map_msgs::msg::LaneletMapBin & msg)
  : msg_(msg)
  {}
  Init_LaneletMapBin_data name_map(::autoware_map_msgs::msg::LaneletMapBin::_name_map_type arg)
  {
    msg_.name_map = std::move(arg);
    return Init_LaneletMapBin_data(msg_);
  }

private:
  ::autoware_map_msgs::msg::LaneletMapBin msg_;
};

class Init_LaneletMapBin_version_map
{
public:
  explicit Init_LaneletMapBin_version_map(::autoware_map_msgs::msg::LaneletMapBin & msg)
  : msg_(msg)
  {}
  Init_LaneletMapBin_name_map version_map(::autoware_map_msgs::msg::LaneletMapBin::_version_map_type arg)
  {
    msg_.version_map = std::move(arg);
    return Init_LaneletMapBin_name_map(msg_);
  }

private:
  ::autoware_map_msgs::msg::LaneletMapBin msg_;
};

class Init_LaneletMapBin_version_map_format
{
public:
  explicit Init_LaneletMapBin_version_map_format(::autoware_map_msgs::msg::LaneletMapBin & msg)
  : msg_(msg)
  {}
  Init_LaneletMapBin_version_map version_map_format(::autoware_map_msgs::msg::LaneletMapBin::_version_map_format_type arg)
  {
    msg_.version_map_format = std::move(arg);
    return Init_LaneletMapBin_version_map(msg_);
  }

private:
  ::autoware_map_msgs::msg::LaneletMapBin msg_;
};

class Init_LaneletMapBin_header
{
public:
  Init_LaneletMapBin_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneletMapBin_version_map_format header(::autoware_map_msgs::msg::LaneletMapBin::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LaneletMapBin_version_map_format(msg_);
  }

private:
  ::autoware_map_msgs::msg::LaneletMapBin msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_map_msgs::msg::LaneletMapBin>()
{
  return autoware_map_msgs::msg::builder::Init_LaneletMapBin_header();
}

}  // namespace autoware_map_msgs

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__LANELET_MAP_BIN__BUILDER_HPP_
