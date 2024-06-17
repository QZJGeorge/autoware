// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/VehicleDimensions.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_DIMENSIONS__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_DIMENSIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/vehicle_dimensions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleDimensions_footprint
{
public:
  explicit Init_VehicleDimensions_footprint(::autoware_adapi_v1_msgs::msg::VehicleDimensions & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::msg::VehicleDimensions footprint(::autoware_adapi_v1_msgs::msg::VehicleDimensions::_footprint_type arg)
  {
    msg_.footprint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VehicleDimensions msg_;
};

class Init_VehicleDimensions_height
{
public:
  explicit Init_VehicleDimensions_height(::autoware_adapi_v1_msgs::msg::VehicleDimensions & msg)
  : msg_(msg)
  {}
  Init_VehicleDimensions_footprint height(::autoware_adapi_v1_msgs::msg::VehicleDimensions::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_VehicleDimensions_footprint(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VehicleDimensions msg_;
};

class Init_VehicleDimensions_right_overhang
{
public:
  explicit Init_VehicleDimensions_right_overhang(::autoware_adapi_v1_msgs::msg::VehicleDimensions & msg)
  : msg_(msg)
  {}
  Init_VehicleDimensions_height right_overhang(::autoware_adapi_v1_msgs::msg::VehicleDimensions::_right_overhang_type arg)
  {
    msg_.right_overhang = std::move(arg);
    return Init_VehicleDimensions_height(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VehicleDimensions msg_;
};

class Init_VehicleDimensions_left_overhang
{
public:
  explicit Init_VehicleDimensions_left_overhang(::autoware_adapi_v1_msgs::msg::VehicleDimensions & msg)
  : msg_(msg)
  {}
  Init_VehicleDimensions_right_overhang left_overhang(::autoware_adapi_v1_msgs::msg::VehicleDimensions::_left_overhang_type arg)
  {
    msg_.left_overhang = std::move(arg);
    return Init_VehicleDimensions_right_overhang(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VehicleDimensions msg_;
};

class Init_VehicleDimensions_rear_overhang
{
public:
  explicit Init_VehicleDimensions_rear_overhang(::autoware_adapi_v1_msgs::msg::VehicleDimensions & msg)
  : msg_(msg)
  {}
  Init_VehicleDimensions_left_overhang rear_overhang(::autoware_adapi_v1_msgs::msg::VehicleDimensions::_rear_overhang_type arg)
  {
    msg_.rear_overhang = std::move(arg);
    return Init_VehicleDimensions_left_overhang(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VehicleDimensions msg_;
};

class Init_VehicleDimensions_front_overhang
{
public:
  explicit Init_VehicleDimensions_front_overhang(::autoware_adapi_v1_msgs::msg::VehicleDimensions & msg)
  : msg_(msg)
  {}
  Init_VehicleDimensions_rear_overhang front_overhang(::autoware_adapi_v1_msgs::msg::VehicleDimensions::_front_overhang_type arg)
  {
    msg_.front_overhang = std::move(arg);
    return Init_VehicleDimensions_rear_overhang(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VehicleDimensions msg_;
};

class Init_VehicleDimensions_wheel_tread
{
public:
  explicit Init_VehicleDimensions_wheel_tread(::autoware_adapi_v1_msgs::msg::VehicleDimensions & msg)
  : msg_(msg)
  {}
  Init_VehicleDimensions_front_overhang wheel_tread(::autoware_adapi_v1_msgs::msg::VehicleDimensions::_wheel_tread_type arg)
  {
    msg_.wheel_tread = std::move(arg);
    return Init_VehicleDimensions_front_overhang(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VehicleDimensions msg_;
};

class Init_VehicleDimensions_wheel_base
{
public:
  explicit Init_VehicleDimensions_wheel_base(::autoware_adapi_v1_msgs::msg::VehicleDimensions & msg)
  : msg_(msg)
  {}
  Init_VehicleDimensions_wheel_tread wheel_base(::autoware_adapi_v1_msgs::msg::VehicleDimensions::_wheel_base_type arg)
  {
    msg_.wheel_base = std::move(arg);
    return Init_VehicleDimensions_wheel_tread(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VehicleDimensions msg_;
};

class Init_VehicleDimensions_wheel_width
{
public:
  explicit Init_VehicleDimensions_wheel_width(::autoware_adapi_v1_msgs::msg::VehicleDimensions & msg)
  : msg_(msg)
  {}
  Init_VehicleDimensions_wheel_base wheel_width(::autoware_adapi_v1_msgs::msg::VehicleDimensions::_wheel_width_type arg)
  {
    msg_.wheel_width = std::move(arg);
    return Init_VehicleDimensions_wheel_base(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VehicleDimensions msg_;
};

class Init_VehicleDimensions_wheel_radius
{
public:
  Init_VehicleDimensions_wheel_radius()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleDimensions_wheel_width wheel_radius(::autoware_adapi_v1_msgs::msg::VehicleDimensions::_wheel_radius_type arg)
  {
    msg_.wheel_radius = std::move(arg);
    return Init_VehicleDimensions_wheel_width(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::VehicleDimensions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::VehicleDimensions>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_VehicleDimensions_wheel_radius();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_DIMENSIONS__BUILDER_HPP_
