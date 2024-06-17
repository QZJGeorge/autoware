// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_performance_analysis:msg/Error.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR__BUILDER_HPP_
#define CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_performance_analysis/msg/detail/error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_performance_analysis
{

namespace msg
{

namespace builder
{

class Init_Error_tracking_curvature_discontinuity_ability
{
public:
  explicit Init_Error_tracking_curvature_discontinuity_ability(::control_performance_analysis::msg::Error & msg)
  : msg_(msg)
  {}
  ::control_performance_analysis::msg::Error tracking_curvature_discontinuity_ability(::control_performance_analysis::msg::Error::_tracking_curvature_discontinuity_ability_type arg)
  {
    msg_.tracking_curvature_discontinuity_ability = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_performance_analysis::msg::Error msg_;
};

class Init_Error_vehicle_velocity_error
{
public:
  explicit Init_Error_vehicle_velocity_error(::control_performance_analysis::msg::Error & msg)
  : msg_(msg)
  {}
  Init_Error_tracking_curvature_discontinuity_ability vehicle_velocity_error(::control_performance_analysis::msg::Error::_vehicle_velocity_error_type arg)
  {
    msg_.vehicle_velocity_error = std::move(arg);
    return Init_Error_tracking_curvature_discontinuity_ability(msg_);
  }

private:
  ::control_performance_analysis::msg::Error msg_;
};

class Init_Error_curvature_estimate_pp
{
public:
  explicit Init_Error_curvature_estimate_pp(::control_performance_analysis::msg::Error & msg)
  : msg_(msg)
  {}
  Init_Error_vehicle_velocity_error curvature_estimate_pp(::control_performance_analysis::msg::Error::_curvature_estimate_pp_type arg)
  {
    msg_.curvature_estimate_pp = std::move(arg);
    return Init_Error_vehicle_velocity_error(msg_);
  }

private:
  ::control_performance_analysis::msg::Error msg_;
};

class Init_Error_curvature_estimate
{
public:
  explicit Init_Error_curvature_estimate(::control_performance_analysis::msg::Error & msg)
  : msg_(msg)
  {}
  Init_Error_curvature_estimate_pp curvature_estimate(::control_performance_analysis::msg::Error::_curvature_estimate_type arg)
  {
    msg_.curvature_estimate = std::move(arg);
    return Init_Error_curvature_estimate_pp(msg_);
  }

private:
  ::control_performance_analysis::msg::Error msg_;
};

class Init_Error_value_approximation
{
public:
  explicit Init_Error_value_approximation(::control_performance_analysis::msg::Error & msg)
  : msg_(msg)
  {}
  Init_Error_curvature_estimate value_approximation(::control_performance_analysis::msg::Error::_value_approximation_type arg)
  {
    msg_.value_approximation = std::move(arg);
    return Init_Error_curvature_estimate(msg_);
  }

private:
  ::control_performance_analysis::msg::Error msg_;
};

class Init_Error_error_energy
{
public:
  explicit Init_Error_error_energy(::control_performance_analysis::msg::Error & msg)
  : msg_(msg)
  {}
  Init_Error_value_approximation error_energy(::control_performance_analysis::msg::Error::_error_energy_type arg)
  {
    msg_.error_energy = std::move(arg);
    return Init_Error_value_approximation(msg_);
  }

private:
  ::control_performance_analysis::msg::Error msg_;
};

class Init_Error_control_effort_energy
{
public:
  explicit Init_Error_control_effort_energy(::control_performance_analysis::msg::Error & msg)
  : msg_(msg)
  {}
  Init_Error_error_energy control_effort_energy(::control_performance_analysis::msg::Error::_control_effort_energy_type arg)
  {
    msg_.control_effort_energy = std::move(arg);
    return Init_Error_error_energy(msg_);
  }

private:
  ::control_performance_analysis::msg::Error msg_;
};

class Init_Error_heading_error_velocity
{
public:
  explicit Init_Error_heading_error_velocity(::control_performance_analysis::msg::Error & msg)
  : msg_(msg)
  {}
  Init_Error_control_effort_energy heading_error_velocity(::control_performance_analysis::msg::Error::_heading_error_velocity_type arg)
  {
    msg_.heading_error_velocity = std::move(arg);
    return Init_Error_control_effort_energy(msg_);
  }

private:
  ::control_performance_analysis::msg::Error msg_;
};

class Init_Error_heading_error
{
public:
  explicit Init_Error_heading_error(::control_performance_analysis::msg::Error & msg)
  : msg_(msg)
  {}
  Init_Error_heading_error_velocity heading_error(::control_performance_analysis::msg::Error::_heading_error_type arg)
  {
    msg_.heading_error = std::move(arg);
    return Init_Error_heading_error_velocity(msg_);
  }

private:
  ::control_performance_analysis::msg::Error msg_;
};

class Init_Error_longitudinal_error_acceleration
{
public:
  explicit Init_Error_longitudinal_error_acceleration(::control_performance_analysis::msg::Error & msg)
  : msg_(msg)
  {}
  Init_Error_heading_error longitudinal_error_acceleration(::control_performance_analysis::msg::Error::_longitudinal_error_acceleration_type arg)
  {
    msg_.longitudinal_error_acceleration = std::move(arg);
    return Init_Error_heading_error(msg_);
  }

private:
  ::control_performance_analysis::msg::Error msg_;
};

class Init_Error_longitudinal_error_velocity
{
public:
  explicit Init_Error_longitudinal_error_velocity(::control_performance_analysis::msg::Error & msg)
  : msg_(msg)
  {}
  Init_Error_longitudinal_error_acceleration longitudinal_error_velocity(::control_performance_analysis::msg::Error::_longitudinal_error_velocity_type arg)
  {
    msg_.longitudinal_error_velocity = std::move(arg);
    return Init_Error_longitudinal_error_acceleration(msg_);
  }

private:
  ::control_performance_analysis::msg::Error msg_;
};

class Init_Error_longitudinal_error
{
public:
  explicit Init_Error_longitudinal_error(::control_performance_analysis::msg::Error & msg)
  : msg_(msg)
  {}
  Init_Error_longitudinal_error_velocity longitudinal_error(::control_performance_analysis::msg::Error::_longitudinal_error_type arg)
  {
    msg_.longitudinal_error = std::move(arg);
    return Init_Error_longitudinal_error_velocity(msg_);
  }

private:
  ::control_performance_analysis::msg::Error msg_;
};

class Init_Error_lateral_error_acceleration
{
public:
  explicit Init_Error_lateral_error_acceleration(::control_performance_analysis::msg::Error & msg)
  : msg_(msg)
  {}
  Init_Error_longitudinal_error lateral_error_acceleration(::control_performance_analysis::msg::Error::_lateral_error_acceleration_type arg)
  {
    msg_.lateral_error_acceleration = std::move(arg);
    return Init_Error_longitudinal_error(msg_);
  }

private:
  ::control_performance_analysis::msg::Error msg_;
};

class Init_Error_lateral_error_velocity
{
public:
  explicit Init_Error_lateral_error_velocity(::control_performance_analysis::msg::Error & msg)
  : msg_(msg)
  {}
  Init_Error_lateral_error_acceleration lateral_error_velocity(::control_performance_analysis::msg::Error::_lateral_error_velocity_type arg)
  {
    msg_.lateral_error_velocity = std::move(arg);
    return Init_Error_lateral_error_acceleration(msg_);
  }

private:
  ::control_performance_analysis::msg::Error msg_;
};

class Init_Error_lateral_error
{
public:
  Init_Error_lateral_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Error_lateral_error_velocity lateral_error(::control_performance_analysis::msg::Error::_lateral_error_type arg)
  {
    msg_.lateral_error = std::move(arg);
    return Init_Error_lateral_error_velocity(msg_);
  }

private:
  ::control_performance_analysis::msg::Error msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_performance_analysis::msg::Error>()
{
  return control_performance_analysis::msg::builder::Init_Error_lateral_error();
}

}  // namespace control_performance_analysis

#endif  // CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR__BUILDER_HPP_
