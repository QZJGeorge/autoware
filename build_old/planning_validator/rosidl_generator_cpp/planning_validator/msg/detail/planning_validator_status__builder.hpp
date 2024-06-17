// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from planning_validator:msg/PlanningValidatorStatus.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_VALIDATOR__MSG__DETAIL__PLANNING_VALIDATOR_STATUS__BUILDER_HPP_
#define PLANNING_VALIDATOR__MSG__DETAIL__PLANNING_VALIDATOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "planning_validator/msg/detail/planning_validator_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace planning_validator
{

namespace msg
{

namespace builder
{

class Init_PlanningValidatorStatus_invalid_count
{
public:
  explicit Init_PlanningValidatorStatus_invalid_count(::planning_validator::msg::PlanningValidatorStatus & msg)
  : msg_(msg)
  {}
  ::planning_validator::msg::PlanningValidatorStatus invalid_count(::planning_validator::msg::PlanningValidatorStatus::_invalid_count_type arg)
  {
    msg_.invalid_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planning_validator::msg::PlanningValidatorStatus msg_;
};

class Init_PlanningValidatorStatus_distance_deviation
{
public:
  explicit Init_PlanningValidatorStatus_distance_deviation(::planning_validator::msg::PlanningValidatorStatus & msg)
  : msg_(msg)
  {}
  Init_PlanningValidatorStatus_invalid_count distance_deviation(::planning_validator::msg::PlanningValidatorStatus::_distance_deviation_type arg)
  {
    msg_.distance_deviation = std::move(arg);
    return Init_PlanningValidatorStatus_invalid_count(msg_);
  }

private:
  ::planning_validator::msg::PlanningValidatorStatus msg_;
};

class Init_PlanningValidatorStatus_velocity_deviation
{
public:
  explicit Init_PlanningValidatorStatus_velocity_deviation(::planning_validator::msg::PlanningValidatorStatus & msg)
  : msg_(msg)
  {}
  Init_PlanningValidatorStatus_distance_deviation velocity_deviation(::planning_validator::msg::PlanningValidatorStatus::_velocity_deviation_type arg)
  {
    msg_.velocity_deviation = std::move(arg);
    return Init_PlanningValidatorStatus_distance_deviation(msg_);
  }

private:
  ::planning_validator::msg::PlanningValidatorStatus msg_;
};

class Init_PlanningValidatorStatus_max_steering_rate
{
public:
  explicit Init_PlanningValidatorStatus_max_steering_rate(::planning_validator::msg::PlanningValidatorStatus & msg)
  : msg_(msg)
  {}
  Init_PlanningValidatorStatus_velocity_deviation max_steering_rate(::planning_validator::msg::PlanningValidatorStatus::_max_steering_rate_type arg)
  {
    msg_.max_steering_rate = std::move(arg);
    return Init_PlanningValidatorStatus_velocity_deviation(msg_);
  }

private:
  ::planning_validator::msg::PlanningValidatorStatus msg_;
};

class Init_PlanningValidatorStatus_max_steering
{
public:
  explicit Init_PlanningValidatorStatus_max_steering(::planning_validator::msg::PlanningValidatorStatus & msg)
  : msg_(msg)
  {}
  Init_PlanningValidatorStatus_max_steering_rate max_steering(::planning_validator::msg::PlanningValidatorStatus::_max_steering_type arg)
  {
    msg_.max_steering = std::move(arg);
    return Init_PlanningValidatorStatus_max_steering_rate(msg_);
  }

private:
  ::planning_validator::msg::PlanningValidatorStatus msg_;
};

class Init_PlanningValidatorStatus_min_longitudinal_acc
{
public:
  explicit Init_PlanningValidatorStatus_min_longitudinal_acc(::planning_validator::msg::PlanningValidatorStatus & msg)
  : msg_(msg)
  {}
  Init_PlanningValidatorStatus_max_steering min_longitudinal_acc(::planning_validator::msg::PlanningValidatorStatus::_min_longitudinal_acc_type arg)
  {
    msg_.min_longitudinal_acc = std::move(arg);
    return Init_PlanningValidatorStatus_max_steering(msg_);
  }

private:
  ::planning_validator::msg::PlanningValidatorStatus msg_;
};

class Init_PlanningValidatorStatus_max_longitudinal_acc
{
public:
  explicit Init_PlanningValidatorStatus_max_longitudinal_acc(::planning_validator::msg::PlanningValidatorStatus & msg)
  : msg_(msg)
  {}
  Init_PlanningValidatorStatus_min_longitudinal_acc max_longitudinal_acc(::planning_validator::msg::PlanningValidatorStatus::_max_longitudinal_acc_type arg)
  {
    msg_.max_longitudinal_acc = std::move(arg);
    return Init_PlanningValidatorStatus_min_longitudinal_acc(msg_);
  }

private:
  ::planning_validator::msg::PlanningValidatorStatus msg_;
};

class Init_PlanningValidatorStatus_max_lateral_acc
{
public:
  explicit Init_PlanningValidatorStatus_max_lateral_acc(::planning_validator::msg::PlanningValidatorStatus & msg)
  : msg_(msg)
  {}
  Init_PlanningValidatorStatus_max_longitudinal_acc max_lateral_acc(::planning_validator::msg::PlanningValidatorStatus::_max_lateral_acc_type arg)
  {
    msg_.max_lateral_acc = std::move(arg);
    return Init_PlanningValidatorStatus_max_longitudinal_acc(msg_);
  }

private:
  ::planning_validator::msg::PlanningValidatorStatus msg_;
};

class Init_PlanningValidatorStatus_max_curvature
{
public:
  explicit Init_PlanningValidatorStatus_max_curvature(::planning_validator::msg::PlanningValidatorStatus & msg)
  : msg_(msg)
  {}
  Init_PlanningValidatorStatus_max_lateral_acc max_curvature(::planning_validator::msg::PlanningValidatorStatus::_max_curvature_type arg)
  {
    msg_.max_curvature = std::move(arg);
    return Init_PlanningValidatorStatus_max_lateral_acc(msg_);
  }

private:
  ::planning_validator::msg::PlanningValidatorStatus msg_;
};

class Init_PlanningValidatorStatus_max_relative_angle
{
public:
  explicit Init_PlanningValidatorStatus_max_relative_angle(::planning_validator::msg::PlanningValidatorStatus & msg)
  : msg_(msg)
  {}
  Init_PlanningValidatorStatus_max_curvature max_relative_angle(::planning_validator::msg::PlanningValidatorStatus::_max_relative_angle_type arg)
  {
    msg_.max_relative_angle = std::move(arg);
    return Init_PlanningValidatorStatus_max_curvature(msg_);
  }

private:
  ::planning_validator::msg::PlanningValidatorStatus msg_;
};

class Init_PlanningValidatorStatus_max_interval_distance
{
public:
  explicit Init_PlanningValidatorStatus_max_interval_distance(::planning_validator::msg::PlanningValidatorStatus & msg)
  : msg_(msg)
  {}
  Init_PlanningValidatorStatus_max_relative_angle max_interval_distance(::planning_validator::msg::PlanningValidatorStatus::_max_interval_distance_type arg)
  {
    msg_.max_interval_distance = std::move(arg);
    return Init_PlanningValidatorStatus_max_relative_angle(msg_);
  }

private:
  ::planning_validator::msg::PlanningValidatorStatus msg_;
};

class Init_PlanningValidatorStatus_is_valid_distance_deviation
{
public:
  explicit Init_PlanningValidatorStatus_is_valid_distance_deviation(::planning_validator::msg::PlanningValidatorStatus & msg)
  : msg_(msg)
  {}
  Init_PlanningValidatorStatus_max_interval_distance is_valid_distance_deviation(::planning_validator::msg::PlanningValidatorStatus::_is_valid_distance_deviation_type arg)
  {
    msg_.is_valid_distance_deviation = std::move(arg);
    return Init_PlanningValidatorStatus_max_interval_distance(msg_);
  }

private:
  ::planning_validator::msg::PlanningValidatorStatus msg_;
};

class Init_PlanningValidatorStatus_is_valid_velocity_deviation
{
public:
  explicit Init_PlanningValidatorStatus_is_valid_velocity_deviation(::planning_validator::msg::PlanningValidatorStatus & msg)
  : msg_(msg)
  {}
  Init_PlanningValidatorStatus_is_valid_distance_deviation is_valid_velocity_deviation(::planning_validator::msg::PlanningValidatorStatus::_is_valid_velocity_deviation_type arg)
  {
    msg_.is_valid_velocity_deviation = std::move(arg);
    return Init_PlanningValidatorStatus_is_valid_distance_deviation(msg_);
  }

private:
  ::planning_validator::msg::PlanningValidatorStatus msg_;
};

class Init_PlanningValidatorStatus_is_valid_steering_rate
{
public:
  explicit Init_PlanningValidatorStatus_is_valid_steering_rate(::planning_validator::msg::PlanningValidatorStatus & msg)
  : msg_(msg)
  {}
  Init_PlanningValidatorStatus_is_valid_velocity_deviation is_valid_steering_rate(::planning_validator::msg::PlanningValidatorStatus::_is_valid_steering_rate_type arg)
  {
    msg_.is_valid_steering_rate = std::move(arg);
    return Init_PlanningValidatorStatus_is_valid_velocity_deviation(msg_);
  }

private:
  ::planning_validator::msg::PlanningValidatorStatus msg_;
};

class Init_PlanningValidatorStatus_is_valid_steering
{
public:
  explicit Init_PlanningValidatorStatus_is_valid_steering(::planning_validator::msg::PlanningValidatorStatus & msg)
  : msg_(msg)
  {}
  Init_PlanningValidatorStatus_is_valid_steering_rate is_valid_steering(::planning_validator::msg::PlanningValidatorStatus::_is_valid_steering_type arg)
  {
    msg_.is_valid_steering = std::move(arg);
    return Init_PlanningValidatorStatus_is_valid_steering_rate(msg_);
  }

private:
  ::planning_validator::msg::PlanningValidatorStatus msg_;
};

class Init_PlanningValidatorStatus_is_valid_longitudinal_min_acc
{
public:
  explicit Init_PlanningValidatorStatus_is_valid_longitudinal_min_acc(::planning_validator::msg::PlanningValidatorStatus & msg)
  : msg_(msg)
  {}
  Init_PlanningValidatorStatus_is_valid_steering is_valid_longitudinal_min_acc(::planning_validator::msg::PlanningValidatorStatus::_is_valid_longitudinal_min_acc_type arg)
  {
    msg_.is_valid_longitudinal_min_acc = std::move(arg);
    return Init_PlanningValidatorStatus_is_valid_steering(msg_);
  }

private:
  ::planning_validator::msg::PlanningValidatorStatus msg_;
};

class Init_PlanningValidatorStatus_is_valid_longitudinal_max_acc
{
public:
  explicit Init_PlanningValidatorStatus_is_valid_longitudinal_max_acc(::planning_validator::msg::PlanningValidatorStatus & msg)
  : msg_(msg)
  {}
  Init_PlanningValidatorStatus_is_valid_longitudinal_min_acc is_valid_longitudinal_max_acc(::planning_validator::msg::PlanningValidatorStatus::_is_valid_longitudinal_max_acc_type arg)
  {
    msg_.is_valid_longitudinal_max_acc = std::move(arg);
    return Init_PlanningValidatorStatus_is_valid_longitudinal_min_acc(msg_);
  }

private:
  ::planning_validator::msg::PlanningValidatorStatus msg_;
};

class Init_PlanningValidatorStatus_is_valid_lateral_acc
{
public:
  explicit Init_PlanningValidatorStatus_is_valid_lateral_acc(::planning_validator::msg::PlanningValidatorStatus & msg)
  : msg_(msg)
  {}
  Init_PlanningValidatorStatus_is_valid_longitudinal_max_acc is_valid_lateral_acc(::planning_validator::msg::PlanningValidatorStatus::_is_valid_lateral_acc_type arg)
  {
    msg_.is_valid_lateral_acc = std::move(arg);
    return Init_PlanningValidatorStatus_is_valid_longitudinal_max_acc(msg_);
  }

private:
  ::planning_validator::msg::PlanningValidatorStatus msg_;
};

class Init_PlanningValidatorStatus_is_valid_curvature
{
public:
  explicit Init_PlanningValidatorStatus_is_valid_curvature(::planning_validator::msg::PlanningValidatorStatus & msg)
  : msg_(msg)
  {}
  Init_PlanningValidatorStatus_is_valid_lateral_acc is_valid_curvature(::planning_validator::msg::PlanningValidatorStatus::_is_valid_curvature_type arg)
  {
    msg_.is_valid_curvature = std::move(arg);
    return Init_PlanningValidatorStatus_is_valid_lateral_acc(msg_);
  }

private:
  ::planning_validator::msg::PlanningValidatorStatus msg_;
};

class Init_PlanningValidatorStatus_is_valid_relative_angle
{
public:
  explicit Init_PlanningValidatorStatus_is_valid_relative_angle(::planning_validator::msg::PlanningValidatorStatus & msg)
  : msg_(msg)
  {}
  Init_PlanningValidatorStatus_is_valid_curvature is_valid_relative_angle(::planning_validator::msg::PlanningValidatorStatus::_is_valid_relative_angle_type arg)
  {
    msg_.is_valid_relative_angle = std::move(arg);
    return Init_PlanningValidatorStatus_is_valid_curvature(msg_);
  }

private:
  ::planning_validator::msg::PlanningValidatorStatus msg_;
};

class Init_PlanningValidatorStatus_is_valid_interval
{
public:
  explicit Init_PlanningValidatorStatus_is_valid_interval(::planning_validator::msg::PlanningValidatorStatus & msg)
  : msg_(msg)
  {}
  Init_PlanningValidatorStatus_is_valid_relative_angle is_valid_interval(::planning_validator::msg::PlanningValidatorStatus::_is_valid_interval_type arg)
  {
    msg_.is_valid_interval = std::move(arg);
    return Init_PlanningValidatorStatus_is_valid_relative_angle(msg_);
  }

private:
  ::planning_validator::msg::PlanningValidatorStatus msg_;
};

class Init_PlanningValidatorStatus_is_valid_finite_value
{
public:
  explicit Init_PlanningValidatorStatus_is_valid_finite_value(::planning_validator::msg::PlanningValidatorStatus & msg)
  : msg_(msg)
  {}
  Init_PlanningValidatorStatus_is_valid_interval is_valid_finite_value(::planning_validator::msg::PlanningValidatorStatus::_is_valid_finite_value_type arg)
  {
    msg_.is_valid_finite_value = std::move(arg);
    return Init_PlanningValidatorStatus_is_valid_interval(msg_);
  }

private:
  ::planning_validator::msg::PlanningValidatorStatus msg_;
};

class Init_PlanningValidatorStatus_stamp
{
public:
  Init_PlanningValidatorStatus_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningValidatorStatus_is_valid_finite_value stamp(::planning_validator::msg::PlanningValidatorStatus::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_PlanningValidatorStatus_is_valid_finite_value(msg_);
  }

private:
  ::planning_validator::msg::PlanningValidatorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::planning_validator::msg::PlanningValidatorStatus>()
{
  return planning_validator::msg::builder::Init_PlanningValidatorStatus_stamp();
}

}  // namespace planning_validator

#endif  // PLANNING_VALIDATOR__MSG__DETAIL__PLANNING_VALIDATOR_STATUS__BUILDER_HPP_
