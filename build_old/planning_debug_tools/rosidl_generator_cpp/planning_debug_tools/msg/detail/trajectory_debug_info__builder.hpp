// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from planning_debug_tools:msg/TrajectoryDebugInfo.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_DEBUG_TOOLS__MSG__DETAIL__TRAJECTORY_DEBUG_INFO__BUILDER_HPP_
#define PLANNING_DEBUG_TOOLS__MSG__DETAIL__TRAJECTORY_DEBUG_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "planning_debug_tools/msg/detail/trajectory_debug_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace planning_debug_tools
{

namespace msg
{

namespace builder
{

class Init_TrajectoryDebugInfo_yaw
{
public:
  explicit Init_TrajectoryDebugInfo_yaw(::planning_debug_tools::msg::TrajectoryDebugInfo & msg)
  : msg_(msg)
  {}
  ::planning_debug_tools::msg::TrajectoryDebugInfo yaw(::planning_debug_tools::msg::TrajectoryDebugInfo::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planning_debug_tools::msg::TrajectoryDebugInfo msg_;
};

class Init_TrajectoryDebugInfo_acceleration
{
public:
  explicit Init_TrajectoryDebugInfo_acceleration(::planning_debug_tools::msg::TrajectoryDebugInfo & msg)
  : msg_(msg)
  {}
  Init_TrajectoryDebugInfo_yaw acceleration(::planning_debug_tools::msg::TrajectoryDebugInfo::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_TrajectoryDebugInfo_yaw(msg_);
  }

private:
  ::planning_debug_tools::msg::TrajectoryDebugInfo msg_;
};

class Init_TrajectoryDebugInfo_velocity
{
public:
  explicit Init_TrajectoryDebugInfo_velocity(::planning_debug_tools::msg::TrajectoryDebugInfo & msg)
  : msg_(msg)
  {}
  Init_TrajectoryDebugInfo_acceleration velocity(::planning_debug_tools::msg::TrajectoryDebugInfo::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_TrajectoryDebugInfo_acceleration(msg_);
  }

private:
  ::planning_debug_tools::msg::TrajectoryDebugInfo msg_;
};

class Init_TrajectoryDebugInfo_curvature
{
public:
  explicit Init_TrajectoryDebugInfo_curvature(::planning_debug_tools::msg::TrajectoryDebugInfo & msg)
  : msg_(msg)
  {}
  Init_TrajectoryDebugInfo_velocity curvature(::planning_debug_tools::msg::TrajectoryDebugInfo::_curvature_type arg)
  {
    msg_.curvature = std::move(arg);
    return Init_TrajectoryDebugInfo_velocity(msg_);
  }

private:
  ::planning_debug_tools::msg::TrajectoryDebugInfo msg_;
};

class Init_TrajectoryDebugInfo_arclength
{
public:
  explicit Init_TrajectoryDebugInfo_arclength(::planning_debug_tools::msg::TrajectoryDebugInfo & msg)
  : msg_(msg)
  {}
  Init_TrajectoryDebugInfo_curvature arclength(::planning_debug_tools::msg::TrajectoryDebugInfo::_arclength_type arg)
  {
    msg_.arclength = std::move(arg);
    return Init_TrajectoryDebugInfo_curvature(msg_);
  }

private:
  ::planning_debug_tools::msg::TrajectoryDebugInfo msg_;
};

class Init_TrajectoryDebugInfo_size
{
public:
  explicit Init_TrajectoryDebugInfo_size(::planning_debug_tools::msg::TrajectoryDebugInfo & msg)
  : msg_(msg)
  {}
  Init_TrajectoryDebugInfo_arclength size(::planning_debug_tools::msg::TrajectoryDebugInfo::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_TrajectoryDebugInfo_arclength(msg_);
  }

private:
  ::planning_debug_tools::msg::TrajectoryDebugInfo msg_;
};

class Init_TrajectoryDebugInfo_stamp
{
public:
  Init_TrajectoryDebugInfo_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryDebugInfo_size stamp(::planning_debug_tools::msg::TrajectoryDebugInfo::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_TrajectoryDebugInfo_size(msg_);
  }

private:
  ::planning_debug_tools::msg::TrajectoryDebugInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::planning_debug_tools::msg::TrajectoryDebugInfo>()
{
  return planning_debug_tools::msg::builder::Init_TrajectoryDebugInfo_stamp();
}

}  // namespace planning_debug_tools

#endif  // PLANNING_DEBUG_TOOLS__MSG__DETAIL__TRAJECTORY_DEBUG_INFO__BUILDER_HPP_
