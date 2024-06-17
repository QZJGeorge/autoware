// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/MapSpec.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MAP_SPEC__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__MAP_SPEC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/map_spec__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_MapSpec_false_northing
{
public:
  explicit Init_MapSpec_false_northing(::morai_msgs::msg::MapSpec & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::MapSpec false_northing(::morai_msgs::msg::MapSpec::_false_northing_type arg)
  {
    msg_.false_northing = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::MapSpec msg_;
};

class Init_MapSpec_false_easting
{
public:
  explicit Init_MapSpec_false_easting(::morai_msgs::msg::MapSpec & msg)
  : msg_(msg)
  {}
  Init_MapSpec_false_northing false_easting(::morai_msgs::msg::MapSpec::_false_easting_type arg)
  {
    msg_.false_easting = std::move(arg);
    return Init_MapSpec_false_northing(msg_);
  }

private:
  ::morai_msgs::msg::MapSpec msg_;
};

class Init_MapSpec_scale_factor
{
public:
  explicit Init_MapSpec_scale_factor(::morai_msgs::msg::MapSpec & msg)
  : msg_(msg)
  {}
  Init_MapSpec_false_easting scale_factor(::morai_msgs::msg::MapSpec::_scale_factor_type arg)
  {
    msg_.scale_factor = std::move(arg);
    return Init_MapSpec_false_easting(msg_);
  }

private:
  ::morai_msgs::msg::MapSpec msg_;
};

class Init_MapSpec_central_meridian
{
public:
  explicit Init_MapSpec_central_meridian(::morai_msgs::msg::MapSpec & msg)
  : msg_(msg)
  {}
  Init_MapSpec_scale_factor central_meridian(::morai_msgs::msg::MapSpec::_central_meridian_type arg)
  {
    msg_.central_meridian = std::move(arg);
    return Init_MapSpec_scale_factor(msg_);
  }

private:
  ::morai_msgs::msg::MapSpec msg_;
};

class Init_MapSpec_central_latitude
{
public:
  explicit Init_MapSpec_central_latitude(::morai_msgs::msg::MapSpec & msg)
  : msg_(msg)
  {}
  Init_MapSpec_central_meridian central_latitude(::morai_msgs::msg::MapSpec::_central_latitude_type arg)
  {
    msg_.central_latitude = std::move(arg);
    return Init_MapSpec_central_meridian(msg_);
  }

private:
  ::morai_msgs::msg::MapSpec msg_;
};

class Init_MapSpec_ellipse
{
public:
  explicit Init_MapSpec_ellipse(::morai_msgs::msg::MapSpec & msg)
  : msg_(msg)
  {}
  Init_MapSpec_central_latitude ellipse(::morai_msgs::msg::MapSpec::_ellipse_type arg)
  {
    msg_.ellipse = std::move(arg);
    return Init_MapSpec_central_latitude(msg_);
  }

private:
  ::morai_msgs::msg::MapSpec msg_;
};

class Init_MapSpec_utm_offset
{
public:
  explicit Init_MapSpec_utm_offset(::morai_msgs::msg::MapSpec & msg)
  : msg_(msg)
  {}
  Init_MapSpec_ellipse utm_offset(::morai_msgs::msg::MapSpec::_utm_offset_type arg)
  {
    msg_.utm_offset = std::move(arg);
    return Init_MapSpec_ellipse(msg_);
  }

private:
  ::morai_msgs::msg::MapSpec msg_;
};

class Init_MapSpec_utm_num
{
public:
  explicit Init_MapSpec_utm_num(::morai_msgs::msg::MapSpec & msg)
  : msg_(msg)
  {}
  Init_MapSpec_utm_offset utm_num(::morai_msgs::msg::MapSpec::_utm_num_type arg)
  {
    msg_.utm_num = std::move(arg);
    return Init_MapSpec_utm_offset(msg_);
  }

private:
  ::morai_msgs::msg::MapSpec msg_;
};

class Init_MapSpec_plane_coordinate_system
{
public:
  Init_MapSpec_plane_coordinate_system()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapSpec_utm_num plane_coordinate_system(::morai_msgs::msg::MapSpec::_plane_coordinate_system_type arg)
  {
    msg_.plane_coordinate_system = std::move(arg);
    return Init_MapSpec_utm_num(msg_);
  }

private:
  ::morai_msgs::msg::MapSpec msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::MapSpec>()
{
  return morai_msgs::msg::builder::Init_MapSpec_plane_coordinate_system();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__MAP_SPEC__BUILDER_HPP_
