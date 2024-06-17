// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_validator:msg/ControlValidatorStatus.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_VALIDATOR__MSG__DETAIL__CONTROL_VALIDATOR_STATUS__BUILDER_HPP_
#define CONTROL_VALIDATOR__MSG__DETAIL__CONTROL_VALIDATOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_validator/msg/detail/control_validator_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_validator
{

namespace msg
{

namespace builder
{

class Init_ControlValidatorStatus_invalid_count
{
public:
  explicit Init_ControlValidatorStatus_invalid_count(::control_validator::msg::ControlValidatorStatus & msg)
  : msg_(msg)
  {}
  ::control_validator::msg::ControlValidatorStatus invalid_count(::control_validator::msg::ControlValidatorStatus::_invalid_count_type arg)
  {
    msg_.invalid_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_validator::msg::ControlValidatorStatus msg_;
};

class Init_ControlValidatorStatus_max_distance_deviation
{
public:
  explicit Init_ControlValidatorStatus_max_distance_deviation(::control_validator::msg::ControlValidatorStatus & msg)
  : msg_(msg)
  {}
  Init_ControlValidatorStatus_invalid_count max_distance_deviation(::control_validator::msg::ControlValidatorStatus::_max_distance_deviation_type arg)
  {
    msg_.max_distance_deviation = std::move(arg);
    return Init_ControlValidatorStatus_invalid_count(msg_);
  }

private:
  ::control_validator::msg::ControlValidatorStatus msg_;
};

class Init_ControlValidatorStatus_is_valid_max_distance_deviation
{
public:
  explicit Init_ControlValidatorStatus_is_valid_max_distance_deviation(::control_validator::msg::ControlValidatorStatus & msg)
  : msg_(msg)
  {}
  Init_ControlValidatorStatus_max_distance_deviation is_valid_max_distance_deviation(::control_validator::msg::ControlValidatorStatus::_is_valid_max_distance_deviation_type arg)
  {
    msg_.is_valid_max_distance_deviation = std::move(arg);
    return Init_ControlValidatorStatus_max_distance_deviation(msg_);
  }

private:
  ::control_validator::msg::ControlValidatorStatus msg_;
};

class Init_ControlValidatorStatus_stamp
{
public:
  Init_ControlValidatorStatus_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlValidatorStatus_is_valid_max_distance_deviation stamp(::control_validator::msg::ControlValidatorStatus::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_ControlValidatorStatus_is_valid_max_distance_deviation(msg_);
  }

private:
  ::control_validator::msg::ControlValidatorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_validator::msg::ControlValidatorStatus>()
{
  return control_validator::msg::builder::Init_ControlValidatorStatus_stamp();
}

}  // namespace control_validator

#endif  // CONTROL_VALIDATOR__MSG__DETAIL__CONTROL_VALIDATOR_STATUS__BUILDER_HPP_
