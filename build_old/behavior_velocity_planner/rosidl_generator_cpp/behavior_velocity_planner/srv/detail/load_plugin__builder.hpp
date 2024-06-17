// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_velocity_planner:srv/LoadPlugin.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_VELOCITY_PLANNER__SRV__DETAIL__LOAD_PLUGIN__BUILDER_HPP_
#define BEHAVIOR_VELOCITY_PLANNER__SRV__DETAIL__LOAD_PLUGIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_velocity_planner/srv/detail/load_plugin__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_velocity_planner
{

namespace srv
{

namespace builder
{

class Init_LoadPlugin_Request_plugin_name
{
public:
  Init_LoadPlugin_Request_plugin_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behavior_velocity_planner::srv::LoadPlugin_Request plugin_name(::behavior_velocity_planner::srv::LoadPlugin_Request::_plugin_name_type arg)
  {
    msg_.plugin_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_velocity_planner::srv::LoadPlugin_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_velocity_planner::srv::LoadPlugin_Request>()
{
  return behavior_velocity_planner::srv::builder::Init_LoadPlugin_Request_plugin_name();
}

}  // namespace behavior_velocity_planner


namespace behavior_velocity_planner
{

namespace srv
{

namespace builder
{

class Init_LoadPlugin_Response_success
{
public:
  Init_LoadPlugin_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behavior_velocity_planner::srv::LoadPlugin_Response success(::behavior_velocity_planner::srv::LoadPlugin_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_velocity_planner::srv::LoadPlugin_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_velocity_planner::srv::LoadPlugin_Response>()
{
  return behavior_velocity_planner::srv::builder::Init_LoadPlugin_Response_success();
}

}  // namespace behavior_velocity_planner

#endif  // BEHAVIOR_VELOCITY_PLANNER__SRV__DETAIL__LOAD_PLUGIN__BUILDER_HPP_
