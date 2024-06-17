// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/VehicleSpec.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__VEHICLE_SPEC__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__VEHICLE_SPEC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/vehicle_spec__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleSpec_rear_overhang
{
public:
  explicit Init_VehicleSpec_rear_overhang(::morai_msgs::msg::VehicleSpec & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::VehicleSpec rear_overhang(::morai_msgs::msg::VehicleSpec::_rear_overhang_type arg)
  {
    msg_.rear_overhang = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::VehicleSpec msg_;
};

class Init_VehicleSpec_overhang
{
public:
  explicit Init_VehicleSpec_overhang(::morai_msgs::msg::VehicleSpec & msg)
  : msg_(msg)
  {}
  Init_VehicleSpec_rear_overhang overhang(::morai_msgs::msg::VehicleSpec::_overhang_type arg)
  {
    msg_.overhang = std::move(arg);
    return Init_VehicleSpec_rear_overhang(msg_);
  }

private:
  ::morai_msgs::msg::VehicleSpec msg_;
};

class Init_VehicleSpec_max_steering
{
public:
  explicit Init_VehicleSpec_max_steering(::morai_msgs::msg::VehicleSpec & msg)
  : msg_(msg)
  {}
  Init_VehicleSpec_overhang max_steering(::morai_msgs::msg::VehicleSpec::_max_steering_type arg)
  {
    msg_.max_steering = std::move(arg);
    return Init_VehicleSpec_overhang(msg_);
  }

private:
  ::morai_msgs::msg::VehicleSpec msg_;
};

class Init_VehicleSpec_wheel_base
{
public:
  explicit Init_VehicleSpec_wheel_base(::morai_msgs::msg::VehicleSpec & msg)
  : msg_(msg)
  {}
  Init_VehicleSpec_max_steering wheel_base(::morai_msgs::msg::VehicleSpec::_wheel_base_type arg)
  {
    msg_.wheel_base = std::move(arg);
    return Init_VehicleSpec_max_steering(msg_);
  }

private:
  ::morai_msgs::msg::VehicleSpec msg_;
};

class Init_VehicleSpec_size
{
public:
  Init_VehicleSpec_size()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleSpec_wheel_base size(::morai_msgs::msg::VehicleSpec::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_VehicleSpec_wheel_base(msg_);
  }

private:
  ::morai_msgs::msg::VehicleSpec msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::VehicleSpec>()
{
  return morai_msgs::msg::builder::Init_VehicleSpec_size();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__VEHICLE_SPEC__BUILDER_HPP_
