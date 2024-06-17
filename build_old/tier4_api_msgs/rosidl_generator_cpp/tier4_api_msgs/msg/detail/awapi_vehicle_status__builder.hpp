// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_api_msgs:msg/AwapiVehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__AWAPI_VEHICLE_STATUS__BUILDER_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__AWAPI_VEHICLE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_api_msgs/msg/detail/awapi_vehicle_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_api_msgs
{

namespace msg
{

namespace builder
{

class Init_AwapiVehicleStatus_target_steering_velocity
{
public:
  explicit Init_AwapiVehicleStatus_target_steering_velocity(::tier4_api_msgs::msg::AwapiVehicleStatus & msg)
  : msg_(msg)
  {}
  ::tier4_api_msgs::msg::AwapiVehicleStatus target_steering_velocity(::tier4_api_msgs::msg::AwapiVehicleStatus::_target_steering_velocity_type arg)
  {
    msg_.target_steering_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiVehicleStatus msg_;
};

class Init_AwapiVehicleStatus_target_steering
{
public:
  explicit Init_AwapiVehicleStatus_target_steering(::tier4_api_msgs::msg::AwapiVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_AwapiVehicleStatus_target_steering_velocity target_steering(::tier4_api_msgs::msg::AwapiVehicleStatus::_target_steering_type arg)
  {
    msg_.target_steering = std::move(arg);
    return Init_AwapiVehicleStatus_target_steering_velocity(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiVehicleStatus msg_;
};

class Init_AwapiVehicleStatus_target_acceleration
{
public:
  explicit Init_AwapiVehicleStatus_target_acceleration(::tier4_api_msgs::msg::AwapiVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_AwapiVehicleStatus_target_steering target_acceleration(::tier4_api_msgs::msg::AwapiVehicleStatus::_target_acceleration_type arg)
  {
    msg_.target_acceleration = std::move(arg);
    return Init_AwapiVehicleStatus_target_steering(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiVehicleStatus msg_;
};

class Init_AwapiVehicleStatus_target_velocity
{
public:
  explicit Init_AwapiVehicleStatus_target_velocity(::tier4_api_msgs::msg::AwapiVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_AwapiVehicleStatus_target_acceleration target_velocity(::tier4_api_msgs::msg::AwapiVehicleStatus::_target_velocity_type arg)
  {
    msg_.target_velocity = std::move(arg);
    return Init_AwapiVehicleStatus_target_acceleration(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiVehicleStatus msg_;
};

class Init_AwapiVehicleStatus_turn_signal
{
public:
  explicit Init_AwapiVehicleStatus_turn_signal(::tier4_api_msgs::msg::AwapiVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_AwapiVehicleStatus_target_velocity turn_signal(::tier4_api_msgs::msg::AwapiVehicleStatus::_turn_signal_type arg)
  {
    msg_.turn_signal = std::move(arg);
    return Init_AwapiVehicleStatus_target_velocity(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiVehicleStatus msg_;
};

class Init_AwapiVehicleStatus_energy_level
{
public:
  explicit Init_AwapiVehicleStatus_energy_level(::tier4_api_msgs::msg::AwapiVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_AwapiVehicleStatus_turn_signal energy_level(::tier4_api_msgs::msg::AwapiVehicleStatus::_energy_level_type arg)
  {
    msg_.energy_level = std::move(arg);
    return Init_AwapiVehicleStatus_turn_signal(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiVehicleStatus msg_;
};

class Init_AwapiVehicleStatus_gear
{
public:
  explicit Init_AwapiVehicleStatus_gear(::tier4_api_msgs::msg::AwapiVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_AwapiVehicleStatus_energy_level gear(::tier4_api_msgs::msg::AwapiVehicleStatus::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return Init_AwapiVehicleStatus_energy_level(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiVehicleStatus msg_;
};

class Init_AwapiVehicleStatus_angular_velocity
{
public:
  explicit Init_AwapiVehicleStatus_angular_velocity(::tier4_api_msgs::msg::AwapiVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_AwapiVehicleStatus_gear angular_velocity(::tier4_api_msgs::msg::AwapiVehicleStatus::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_AwapiVehicleStatus_gear(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiVehicleStatus msg_;
};

class Init_AwapiVehicleStatus_steering_velocity
{
public:
  explicit Init_AwapiVehicleStatus_steering_velocity(::tier4_api_msgs::msg::AwapiVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_AwapiVehicleStatus_angular_velocity steering_velocity(::tier4_api_msgs::msg::AwapiVehicleStatus::_steering_velocity_type arg)
  {
    msg_.steering_velocity = std::move(arg);
    return Init_AwapiVehicleStatus_angular_velocity(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiVehicleStatus msg_;
};

class Init_AwapiVehicleStatus_steering
{
public:
  explicit Init_AwapiVehicleStatus_steering(::tier4_api_msgs::msg::AwapiVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_AwapiVehicleStatus_steering_velocity steering(::tier4_api_msgs::msg::AwapiVehicleStatus::_steering_type arg)
  {
    msg_.steering = std::move(arg);
    return Init_AwapiVehicleStatus_steering_velocity(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiVehicleStatus msg_;
};

class Init_AwapiVehicleStatus_acceleration
{
public:
  explicit Init_AwapiVehicleStatus_acceleration(::tier4_api_msgs::msg::AwapiVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_AwapiVehicleStatus_steering acceleration(::tier4_api_msgs::msg::AwapiVehicleStatus::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_AwapiVehicleStatus_steering(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiVehicleStatus msg_;
};

class Init_AwapiVehicleStatus_velocity
{
public:
  explicit Init_AwapiVehicleStatus_velocity(::tier4_api_msgs::msg::AwapiVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_AwapiVehicleStatus_acceleration velocity(::tier4_api_msgs::msg::AwapiVehicleStatus::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_AwapiVehicleStatus_acceleration(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiVehicleStatus msg_;
};

class Init_AwapiVehicleStatus_geo_point
{
public:
  explicit Init_AwapiVehicleStatus_geo_point(::tier4_api_msgs::msg::AwapiVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_AwapiVehicleStatus_velocity geo_point(::tier4_api_msgs::msg::AwapiVehicleStatus::_geo_point_type arg)
  {
    msg_.geo_point = std::move(arg);
    return Init_AwapiVehicleStatus_velocity(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiVehicleStatus msg_;
};

class Init_AwapiVehicleStatus_eulerangle
{
public:
  explicit Init_AwapiVehicleStatus_eulerangle(::tier4_api_msgs::msg::AwapiVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_AwapiVehicleStatus_geo_point eulerangle(::tier4_api_msgs::msg::AwapiVehicleStatus::_eulerangle_type arg)
  {
    msg_.eulerangle = std::move(arg);
    return Init_AwapiVehicleStatus_geo_point(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiVehicleStatus msg_;
};

class Init_AwapiVehicleStatus_pose
{
public:
  explicit Init_AwapiVehicleStatus_pose(::tier4_api_msgs::msg::AwapiVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_AwapiVehicleStatus_eulerangle pose(::tier4_api_msgs::msg::AwapiVehicleStatus::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_AwapiVehicleStatus_eulerangle(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiVehicleStatus msg_;
};

class Init_AwapiVehicleStatus_header
{
public:
  Init_AwapiVehicleStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AwapiVehicleStatus_pose header(::tier4_api_msgs::msg::AwapiVehicleStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AwapiVehicleStatus_pose(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiVehicleStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_api_msgs::msg::AwapiVehicleStatus>()
{
  return tier4_api_msgs::msg::builder::Init_AwapiVehicleStatus_header();
}

}  // namespace tier4_api_msgs

#endif  // TIER4_API_MSGS__MSG__DETAIL__AWAPI_VEHICLE_STATUS__BUILDER_HPP_
