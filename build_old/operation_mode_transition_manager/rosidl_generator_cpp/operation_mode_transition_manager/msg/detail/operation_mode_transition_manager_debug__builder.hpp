// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from operation_mode_transition_manager:msg/OperationModeTransitionManagerDebug.idl
// generated code does not contain a copyright notice

#ifndef OPERATION_MODE_TRANSITION_MANAGER__MSG__DETAIL__OPERATION_MODE_TRANSITION_MANAGER_DEBUG__BUILDER_HPP_
#define OPERATION_MODE_TRANSITION_MANAGER__MSG__DETAIL__OPERATION_MODE_TRANSITION_MANAGER_DEBUG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "operation_mode_transition_manager/msg/detail/operation_mode_transition_manager_debug__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace operation_mode_transition_manager
{

namespace msg
{

namespace builder
{

class Init_OperationModeTransitionManagerDebug_speed_deviation
{
public:
  explicit Init_OperationModeTransitionManagerDebug_speed_deviation(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg)
  : msg_(msg)
  {}
  ::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug speed_deviation(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug::_speed_deviation_type arg)
  {
    msg_.speed_deviation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug msg_;
};

class Init_OperationModeTransitionManagerDebug_yaw_deviation
{
public:
  explicit Init_OperationModeTransitionManagerDebug_yaw_deviation(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg)
  : msg_(msg)
  {}
  Init_OperationModeTransitionManagerDebug_speed_deviation yaw_deviation(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug::_yaw_deviation_type arg)
  {
    msg_.yaw_deviation = std::move(arg);
    return Init_OperationModeTransitionManagerDebug_speed_deviation(msg_);
  }

private:
  ::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug msg_;
};

class Init_OperationModeTransitionManagerDebug_lateral_deviation
{
public:
  explicit Init_OperationModeTransitionManagerDebug_lateral_deviation(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg)
  : msg_(msg)
  {}
  Init_OperationModeTransitionManagerDebug_yaw_deviation lateral_deviation(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug::_lateral_deviation_type arg)
  {
    msg_.lateral_deviation = std::move(arg);
    return Init_OperationModeTransitionManagerDebug_yaw_deviation(msg_);
  }

private:
  ::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug msg_;
};

class Init_OperationModeTransitionManagerDebug_lateral_acceleration_deviation
{
public:
  explicit Init_OperationModeTransitionManagerDebug_lateral_acceleration_deviation(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg)
  : msg_(msg)
  {}
  Init_OperationModeTransitionManagerDebug_lateral_deviation lateral_acceleration_deviation(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug::_lateral_acceleration_deviation_type arg)
  {
    msg_.lateral_acceleration_deviation = std::move(arg);
    return Init_OperationModeTransitionManagerDebug_lateral_deviation(msg_);
  }

private:
  ::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug msg_;
};

class Init_OperationModeTransitionManagerDebug_lateral_acceleration
{
public:
  explicit Init_OperationModeTransitionManagerDebug_lateral_acceleration(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg)
  : msg_(msg)
  {}
  Init_OperationModeTransitionManagerDebug_lateral_acceleration_deviation lateral_acceleration(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug::_lateral_acceleration_type arg)
  {
    msg_.lateral_acceleration = std::move(arg);
    return Init_OperationModeTransitionManagerDebug_lateral_acceleration_deviation(msg_);
  }

private:
  ::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug msg_;
};

class Init_OperationModeTransitionManagerDebug_target_control_acceleration
{
public:
  explicit Init_OperationModeTransitionManagerDebug_target_control_acceleration(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg)
  : msg_(msg)
  {}
  Init_OperationModeTransitionManagerDebug_lateral_acceleration target_control_acceleration(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug::_target_control_acceleration_type arg)
  {
    msg_.target_control_acceleration = std::move(arg);
    return Init_OperationModeTransitionManagerDebug_lateral_acceleration(msg_);
  }

private:
  ::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug msg_;
};

class Init_OperationModeTransitionManagerDebug_target_planning_speed
{
public:
  explicit Init_OperationModeTransitionManagerDebug_target_planning_speed(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg)
  : msg_(msg)
  {}
  Init_OperationModeTransitionManagerDebug_target_control_acceleration target_planning_speed(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug::_target_planning_speed_type arg)
  {
    msg_.target_planning_speed = std::move(arg);
    return Init_OperationModeTransitionManagerDebug_target_control_acceleration(msg_);
  }

private:
  ::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug msg_;
};

class Init_OperationModeTransitionManagerDebug_target_control_speed
{
public:
  explicit Init_OperationModeTransitionManagerDebug_target_control_speed(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg)
  : msg_(msg)
  {}
  Init_OperationModeTransitionManagerDebug_target_planning_speed target_control_speed(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug::_target_control_speed_type arg)
  {
    msg_.target_control_speed = std::move(arg);
    return Init_OperationModeTransitionManagerDebug_target_planning_speed(msg_);
  }

private:
  ::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug msg_;
};

class Init_OperationModeTransitionManagerDebug_current_speed
{
public:
  explicit Init_OperationModeTransitionManagerDebug_current_speed(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg)
  : msg_(msg)
  {}
  Init_OperationModeTransitionManagerDebug_target_control_speed current_speed(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug::_current_speed_type arg)
  {
    msg_.current_speed = std::move(arg);
    return Init_OperationModeTransitionManagerDebug_target_control_speed(msg_);
  }

private:
  ::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug msg_;
};

class Init_OperationModeTransitionManagerDebug_large_lateral_acceleration_diff_ok
{
public:
  explicit Init_OperationModeTransitionManagerDebug_large_lateral_acceleration_diff_ok(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg)
  : msg_(msg)
  {}
  Init_OperationModeTransitionManagerDebug_current_speed large_lateral_acceleration_diff_ok(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug::_large_lateral_acceleration_diff_ok_type arg)
  {
    msg_.large_lateral_acceleration_diff_ok = std::move(arg);
    return Init_OperationModeTransitionManagerDebug_current_speed(msg_);
  }

private:
  ::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug msg_;
};

class Init_OperationModeTransitionManagerDebug_large_lateral_acceleration_ok
{
public:
  explicit Init_OperationModeTransitionManagerDebug_large_lateral_acceleration_ok(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg)
  : msg_(msg)
  {}
  Init_OperationModeTransitionManagerDebug_large_lateral_acceleration_diff_ok large_lateral_acceleration_ok(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug::_large_lateral_acceleration_ok_type arg)
  {
    msg_.large_lateral_acceleration_ok = std::move(arg);
    return Init_OperationModeTransitionManagerDebug_large_lateral_acceleration_diff_ok(msg_);
  }

private:
  ::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug msg_;
};

class Init_OperationModeTransitionManagerDebug_large_acceleration_ok
{
public:
  explicit Init_OperationModeTransitionManagerDebug_large_acceleration_ok(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg)
  : msg_(msg)
  {}
  Init_OperationModeTransitionManagerDebug_large_lateral_acceleration_ok large_acceleration_ok(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug::_large_acceleration_ok_type arg)
  {
    msg_.large_acceleration_ok = std::move(arg);
    return Init_OperationModeTransitionManagerDebug_large_lateral_acceleration_ok(msg_);
  }

private:
  ::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug msg_;
};

class Init_OperationModeTransitionManagerDebug_stop_ok
{
public:
  explicit Init_OperationModeTransitionManagerDebug_stop_ok(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg)
  : msg_(msg)
  {}
  Init_OperationModeTransitionManagerDebug_large_acceleration_ok stop_ok(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug::_stop_ok_type arg)
  {
    msg_.stop_ok = std::move(arg);
    return Init_OperationModeTransitionManagerDebug_large_acceleration_ok(msg_);
  }

private:
  ::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug msg_;
};

class Init_OperationModeTransitionManagerDebug_speed_lower_deviation_ok
{
public:
  explicit Init_OperationModeTransitionManagerDebug_speed_lower_deviation_ok(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg)
  : msg_(msg)
  {}
  Init_OperationModeTransitionManagerDebug_stop_ok speed_lower_deviation_ok(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug::_speed_lower_deviation_ok_type arg)
  {
    msg_.speed_lower_deviation_ok = std::move(arg);
    return Init_OperationModeTransitionManagerDebug_stop_ok(msg_);
  }

private:
  ::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug msg_;
};

class Init_OperationModeTransitionManagerDebug_speed_upper_deviation_ok
{
public:
  explicit Init_OperationModeTransitionManagerDebug_speed_upper_deviation_ok(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg)
  : msg_(msg)
  {}
  Init_OperationModeTransitionManagerDebug_speed_lower_deviation_ok speed_upper_deviation_ok(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug::_speed_upper_deviation_ok_type arg)
  {
    msg_.speed_upper_deviation_ok = std::move(arg);
    return Init_OperationModeTransitionManagerDebug_speed_lower_deviation_ok(msg_);
  }

private:
  ::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug msg_;
};

class Init_OperationModeTransitionManagerDebug_yaw_deviation_ok
{
public:
  explicit Init_OperationModeTransitionManagerDebug_yaw_deviation_ok(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg)
  : msg_(msg)
  {}
  Init_OperationModeTransitionManagerDebug_speed_upper_deviation_ok yaw_deviation_ok(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug::_yaw_deviation_ok_type arg)
  {
    msg_.yaw_deviation_ok = std::move(arg);
    return Init_OperationModeTransitionManagerDebug_speed_upper_deviation_ok(msg_);
  }

private:
  ::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug msg_;
};

class Init_OperationModeTransitionManagerDebug_lateral_deviation_ok
{
public:
  explicit Init_OperationModeTransitionManagerDebug_lateral_deviation_ok(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg)
  : msg_(msg)
  {}
  Init_OperationModeTransitionManagerDebug_yaw_deviation_ok lateral_deviation_ok(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug::_lateral_deviation_ok_type arg)
  {
    msg_.lateral_deviation_ok = std::move(arg);
    return Init_OperationModeTransitionManagerDebug_yaw_deviation_ok(msg_);
  }

private:
  ::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug msg_;
};

class Init_OperationModeTransitionManagerDebug_trajectory_available_ok
{
public:
  explicit Init_OperationModeTransitionManagerDebug_trajectory_available_ok(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg)
  : msg_(msg)
  {}
  Init_OperationModeTransitionManagerDebug_lateral_deviation_ok trajectory_available_ok(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug::_trajectory_available_ok_type arg)
  {
    msg_.trajectory_available_ok = std::move(arg);
    return Init_OperationModeTransitionManagerDebug_lateral_deviation_ok(msg_);
  }

private:
  ::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug msg_;
};

class Init_OperationModeTransitionManagerDebug_engage_allowed_for_stopped_vehicle
{
public:
  explicit Init_OperationModeTransitionManagerDebug_engage_allowed_for_stopped_vehicle(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg)
  : msg_(msg)
  {}
  Init_OperationModeTransitionManagerDebug_trajectory_available_ok engage_allowed_for_stopped_vehicle(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug::_engage_allowed_for_stopped_vehicle_type arg)
  {
    msg_.engage_allowed_for_stopped_vehicle = std::move(arg);
    return Init_OperationModeTransitionManagerDebug_trajectory_available_ok(msg_);
  }

private:
  ::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug msg_;
};

class Init_OperationModeTransitionManagerDebug_is_all_ok
{
public:
  explicit Init_OperationModeTransitionManagerDebug_is_all_ok(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg)
  : msg_(msg)
  {}
  Init_OperationModeTransitionManagerDebug_engage_allowed_for_stopped_vehicle is_all_ok(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug::_is_all_ok_type arg)
  {
    msg_.is_all_ok = std::move(arg);
    return Init_OperationModeTransitionManagerDebug_engage_allowed_for_stopped_vehicle(msg_);
  }

private:
  ::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug msg_;
};

class Init_OperationModeTransitionManagerDebug_in_transition
{
public:
  explicit Init_OperationModeTransitionManagerDebug_in_transition(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg)
  : msg_(msg)
  {}
  Init_OperationModeTransitionManagerDebug_is_all_ok in_transition(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug::_in_transition_type arg)
  {
    msg_.in_transition = std::move(arg);
    return Init_OperationModeTransitionManagerDebug_is_all_ok(msg_);
  }

private:
  ::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug msg_;
};

class Init_OperationModeTransitionManagerDebug_in_autoware_control
{
public:
  explicit Init_OperationModeTransitionManagerDebug_in_autoware_control(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg)
  : msg_(msg)
  {}
  Init_OperationModeTransitionManagerDebug_in_transition in_autoware_control(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug::_in_autoware_control_type arg)
  {
    msg_.in_autoware_control = std::move(arg);
    return Init_OperationModeTransitionManagerDebug_in_transition(msg_);
  }

private:
  ::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug msg_;
};

class Init_OperationModeTransitionManagerDebug_status
{
public:
  explicit Init_OperationModeTransitionManagerDebug_status(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg)
  : msg_(msg)
  {}
  Init_OperationModeTransitionManagerDebug_in_autoware_control status(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_OperationModeTransitionManagerDebug_in_autoware_control(msg_);
  }

private:
  ::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug msg_;
};

class Init_OperationModeTransitionManagerDebug_stamp
{
public:
  Init_OperationModeTransitionManagerDebug_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OperationModeTransitionManagerDebug_status stamp(::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_OperationModeTransitionManagerDebug_status(msg_);
  }

private:
  ::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug>()
{
  return operation_mode_transition_manager::msg::builder::Init_OperationModeTransitionManagerDebug_stamp();
}

}  // namespace operation_mode_transition_manager

#endif  // OPERATION_MODE_TRANSITION_MANAGER__MSG__DETAIL__OPERATION_MODE_TRANSITION_MANAGER_DEBUG__BUILDER_HPP_
