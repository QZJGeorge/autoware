// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_velocity_planner:srv/UnloadPlugin.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_VELOCITY_PLANNER__SRV__DETAIL__UNLOAD_PLUGIN__BUILDER_HPP_
#define BEHAVIOR_VELOCITY_PLANNER__SRV__DETAIL__UNLOAD_PLUGIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_velocity_planner/srv/detail/unload_plugin__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_velocity_planner
{

namespace srv
{

namespace builder
{

class Init_UnloadPlugin_Request_plugin_name
{
public:
  Init_UnloadPlugin_Request_plugin_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behavior_velocity_planner::srv::UnloadPlugin_Request plugin_name(::behavior_velocity_planner::srv::UnloadPlugin_Request::_plugin_name_type arg)
  {
    msg_.plugin_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_velocity_planner::srv::UnloadPlugin_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_velocity_planner::srv::UnloadPlugin_Request>()
{
  return behavior_velocity_planner::srv::builder::Init_UnloadPlugin_Request_plugin_name();
}

}  // namespace behavior_velocity_planner


namespace behavior_velocity_planner
{

namespace srv
{

namespace builder
{

class Init_UnloadPlugin_Response_success
{
public:
  Init_UnloadPlugin_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behavior_velocity_planner::srv::UnloadPlugin_Response success(::behavior_velocity_planner::srv::UnloadPlugin_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_velocity_planner::srv::UnloadPlugin_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_velocity_planner::srv::UnloadPlugin_Response>()
{
  return behavior_velocity_planner::srv::builder::Init_UnloadPlugin_Response_success();
}

}  // namespace behavior_velocity_planner

#endif  // BEHAVIOR_VELOCITY_PLANNER__SRV__DETAIL__UNLOAD_PLUGIN__BUILDER_HPP_
