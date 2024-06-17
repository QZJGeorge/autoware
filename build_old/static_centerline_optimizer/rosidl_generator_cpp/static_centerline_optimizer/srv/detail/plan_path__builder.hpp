// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from static_centerline_optimizer:srv/PlanPath.idl
// generated code does not contain a copyright notice

#ifndef STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_PATH__BUILDER_HPP_
#define STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "static_centerline_optimizer/srv/detail/plan_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace static_centerline_optimizer
{

namespace srv
{

namespace builder
{

class Init_PlanPath_Request_route
{
public:
  explicit Init_PlanPath_Request_route(::static_centerline_optimizer::srv::PlanPath_Request & msg)
  : msg_(msg)
  {}
  ::static_centerline_optimizer::srv::PlanPath_Request route(::static_centerline_optimizer::srv::PlanPath_Request::_route_type arg)
  {
    msg_.route = std::move(arg);
    return std::move(msg_);
  }

private:
  ::static_centerline_optimizer::srv::PlanPath_Request msg_;
};

class Init_PlanPath_Request_map_id
{
public:
  Init_PlanPath_Request_map_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanPath_Request_route map_id(::static_centerline_optimizer::srv::PlanPath_Request::_map_id_type arg)
  {
    msg_.map_id = std::move(arg);
    return Init_PlanPath_Request_route(msg_);
  }

private:
  ::static_centerline_optimizer::srv::PlanPath_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::static_centerline_optimizer::srv::PlanPath_Request>()
{
  return static_centerline_optimizer::srv::builder::Init_PlanPath_Request_map_id();
}

}  // namespace static_centerline_optimizer


namespace static_centerline_optimizer
{

namespace srv
{

namespace builder
{

class Init_PlanPath_Response_unconnected_lane_ids
{
public:
  explicit Init_PlanPath_Response_unconnected_lane_ids(::static_centerline_optimizer::srv::PlanPath_Response & msg)
  : msg_(msg)
  {}
  ::static_centerline_optimizer::srv::PlanPath_Response unconnected_lane_ids(::static_centerline_optimizer::srv::PlanPath_Response::_unconnected_lane_ids_type arg)
  {
    msg_.unconnected_lane_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::static_centerline_optimizer::srv::PlanPath_Response msg_;
};

class Init_PlanPath_Response_message
{
public:
  explicit Init_PlanPath_Response_message(::static_centerline_optimizer::srv::PlanPath_Response & msg)
  : msg_(msg)
  {}
  Init_PlanPath_Response_unconnected_lane_ids message(::static_centerline_optimizer::srv::PlanPath_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_PlanPath_Response_unconnected_lane_ids(msg_);
  }

private:
  ::static_centerline_optimizer::srv::PlanPath_Response msg_;
};

class Init_PlanPath_Response_points_with_lane_ids
{
public:
  Init_PlanPath_Response_points_with_lane_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanPath_Response_message points_with_lane_ids(::static_centerline_optimizer::srv::PlanPath_Response::_points_with_lane_ids_type arg)
  {
    msg_.points_with_lane_ids = std::move(arg);
    return Init_PlanPath_Response_message(msg_);
  }

private:
  ::static_centerline_optimizer::srv::PlanPath_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::static_centerline_optimizer::srv::PlanPath_Response>()
{
  return static_centerline_optimizer::srv::builder::Init_PlanPath_Response_points_with_lane_ids();
}

}  // namespace static_centerline_optimizer

#endif  // STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_PATH__BUILDER_HPP_
