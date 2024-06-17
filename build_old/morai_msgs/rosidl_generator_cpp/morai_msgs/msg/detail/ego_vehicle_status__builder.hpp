// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/EgoVehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__EGO_VEHICLE_STATUS__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__EGO_VEHICLE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/ego_vehicle_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_EgoVehicleStatus_wheel_angle
{
public:
  explicit Init_EgoVehicleStatus_wheel_angle(::morai_msgs::msg::EgoVehicleStatus & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::EgoVehicleStatus wheel_angle(::morai_msgs::msg::EgoVehicleStatus::_wheel_angle_type arg)
  {
    msg_.wheel_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::EgoVehicleStatus msg_;
};

class Init_EgoVehicleStatus_brake
{
public:
  explicit Init_EgoVehicleStatus_brake(::morai_msgs::msg::EgoVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleStatus_wheel_angle brake(::morai_msgs::msg::EgoVehicleStatus::_brake_type arg)
  {
    msg_.brake = std::move(arg);
    return Init_EgoVehicleStatus_wheel_angle(msg_);
  }

private:
  ::morai_msgs::msg::EgoVehicleStatus msg_;
};

class Init_EgoVehicleStatus_accel
{
public:
  explicit Init_EgoVehicleStatus_accel(::morai_msgs::msg::EgoVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleStatus_brake accel(::morai_msgs::msg::EgoVehicleStatus::_accel_type arg)
  {
    msg_.accel = std::move(arg);
    return Init_EgoVehicleStatus_brake(msg_);
  }

private:
  ::morai_msgs::msg::EgoVehicleStatus msg_;
};

class Init_EgoVehicleStatus_heading
{
public:
  explicit Init_EgoVehicleStatus_heading(::morai_msgs::msg::EgoVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleStatus_accel heading(::morai_msgs::msg::EgoVehicleStatus::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_EgoVehicleStatus_accel(msg_);
  }

private:
  ::morai_msgs::msg::EgoVehicleStatus msg_;
};

class Init_EgoVehicleStatus_velocity
{
public:
  explicit Init_EgoVehicleStatus_velocity(::morai_msgs::msg::EgoVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleStatus_heading velocity(::morai_msgs::msg::EgoVehicleStatus::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_EgoVehicleStatus_heading(msg_);
  }

private:
  ::morai_msgs::msg::EgoVehicleStatus msg_;
};

class Init_EgoVehicleStatus_position
{
public:
  explicit Init_EgoVehicleStatus_position(::morai_msgs::msg::EgoVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleStatus_velocity position(::morai_msgs::msg::EgoVehicleStatus::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_EgoVehicleStatus_velocity(msg_);
  }

private:
  ::morai_msgs::msg::EgoVehicleStatus msg_;
};

class Init_EgoVehicleStatus_acceleration
{
public:
  explicit Init_EgoVehicleStatus_acceleration(::morai_msgs::msg::EgoVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleStatus_position acceleration(::morai_msgs::msg::EgoVehicleStatus::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_EgoVehicleStatus_position(msg_);
  }

private:
  ::morai_msgs::msg::EgoVehicleStatus msg_;
};

class Init_EgoVehicleStatus_unique_id
{
public:
  explicit Init_EgoVehicleStatus_unique_id(::morai_msgs::msg::EgoVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleStatus_acceleration unique_id(::morai_msgs::msg::EgoVehicleStatus::_unique_id_type arg)
  {
    msg_.unique_id = std::move(arg);
    return Init_EgoVehicleStatus_acceleration(msg_);
  }

private:
  ::morai_msgs::msg::EgoVehicleStatus msg_;
};

class Init_EgoVehicleStatus_header
{
public:
  Init_EgoVehicleStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EgoVehicleStatus_unique_id header(::morai_msgs::msg::EgoVehicleStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EgoVehicleStatus_unique_id(msg_);
  }

private:
  ::morai_msgs::msg::EgoVehicleStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::EgoVehicleStatus>()
{
  return morai_msgs::msg::builder::Init_EgoVehicleStatus_header();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__EGO_VEHICLE_STATUS__BUILDER_HPP_
