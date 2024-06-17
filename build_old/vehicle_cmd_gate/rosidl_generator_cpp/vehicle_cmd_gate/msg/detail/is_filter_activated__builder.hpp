// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vehicle_cmd_gate:msg/IsFilterActivated.idl
// generated code does not contain a copyright notice

#ifndef VEHICLE_CMD_GATE__MSG__DETAIL__IS_FILTER_ACTIVATED__BUILDER_HPP_
#define VEHICLE_CMD_GATE__MSG__DETAIL__IS_FILTER_ACTIVATED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vehicle_cmd_gate/msg/detail/is_filter_activated__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vehicle_cmd_gate
{

namespace msg
{

namespace builder
{

class Init_IsFilterActivated_is_activated_on_jerk
{
public:
  explicit Init_IsFilterActivated_is_activated_on_jerk(::vehicle_cmd_gate::msg::IsFilterActivated & msg)
  : msg_(msg)
  {}
  ::vehicle_cmd_gate::msg::IsFilterActivated is_activated_on_jerk(::vehicle_cmd_gate::msg::IsFilterActivated::_is_activated_on_jerk_type arg)
  {
    msg_.is_activated_on_jerk = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vehicle_cmd_gate::msg::IsFilterActivated msg_;
};

class Init_IsFilterActivated_is_activated_on_acceleration
{
public:
  explicit Init_IsFilterActivated_is_activated_on_acceleration(::vehicle_cmd_gate::msg::IsFilterActivated & msg)
  : msg_(msg)
  {}
  Init_IsFilterActivated_is_activated_on_jerk is_activated_on_acceleration(::vehicle_cmd_gate::msg::IsFilterActivated::_is_activated_on_acceleration_type arg)
  {
    msg_.is_activated_on_acceleration = std::move(arg);
    return Init_IsFilterActivated_is_activated_on_jerk(msg_);
  }

private:
  ::vehicle_cmd_gate::msg::IsFilterActivated msg_;
};

class Init_IsFilterActivated_is_activated_on_speed
{
public:
  explicit Init_IsFilterActivated_is_activated_on_speed(::vehicle_cmd_gate::msg::IsFilterActivated & msg)
  : msg_(msg)
  {}
  Init_IsFilterActivated_is_activated_on_acceleration is_activated_on_speed(::vehicle_cmd_gate::msg::IsFilterActivated::_is_activated_on_speed_type arg)
  {
    msg_.is_activated_on_speed = std::move(arg);
    return Init_IsFilterActivated_is_activated_on_acceleration(msg_);
  }

private:
  ::vehicle_cmd_gate::msg::IsFilterActivated msg_;
};

class Init_IsFilterActivated_is_activated_on_steering_rate
{
public:
  explicit Init_IsFilterActivated_is_activated_on_steering_rate(::vehicle_cmd_gate::msg::IsFilterActivated & msg)
  : msg_(msg)
  {}
  Init_IsFilterActivated_is_activated_on_speed is_activated_on_steering_rate(::vehicle_cmd_gate::msg::IsFilterActivated::_is_activated_on_steering_rate_type arg)
  {
    msg_.is_activated_on_steering_rate = std::move(arg);
    return Init_IsFilterActivated_is_activated_on_speed(msg_);
  }

private:
  ::vehicle_cmd_gate::msg::IsFilterActivated msg_;
};

class Init_IsFilterActivated_is_activated_on_steering
{
public:
  explicit Init_IsFilterActivated_is_activated_on_steering(::vehicle_cmd_gate::msg::IsFilterActivated & msg)
  : msg_(msg)
  {}
  Init_IsFilterActivated_is_activated_on_steering_rate is_activated_on_steering(::vehicle_cmd_gate::msg::IsFilterActivated::_is_activated_on_steering_type arg)
  {
    msg_.is_activated_on_steering = std::move(arg);
    return Init_IsFilterActivated_is_activated_on_steering_rate(msg_);
  }

private:
  ::vehicle_cmd_gate::msg::IsFilterActivated msg_;
};

class Init_IsFilterActivated_is_activated
{
public:
  explicit Init_IsFilterActivated_is_activated(::vehicle_cmd_gate::msg::IsFilterActivated & msg)
  : msg_(msg)
  {}
  Init_IsFilterActivated_is_activated_on_steering is_activated(::vehicle_cmd_gate::msg::IsFilterActivated::_is_activated_type arg)
  {
    msg_.is_activated = std::move(arg);
    return Init_IsFilterActivated_is_activated_on_steering(msg_);
  }

private:
  ::vehicle_cmd_gate::msg::IsFilterActivated msg_;
};

class Init_IsFilterActivated_stamp
{
public:
  Init_IsFilterActivated_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IsFilterActivated_is_activated stamp(::vehicle_cmd_gate::msg::IsFilterActivated::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_IsFilterActivated_is_activated(msg_);
  }

private:
  ::vehicle_cmd_gate::msg::IsFilterActivated msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vehicle_cmd_gate::msg::IsFilterActivated>()
{
  return vehicle_cmd_gate::msg::builder::Init_IsFilterActivated_stamp();
}

}  // namespace vehicle_cmd_gate

#endif  // VEHICLE_CMD_GATE__MSG__DETAIL__IS_FILTER_ACTIVATED__BUILDER_HPP_
