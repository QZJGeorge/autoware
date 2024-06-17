// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from static_centerline_optimizer:srv/PlanRoute.idl
// generated code does not contain a copyright notice

#ifndef STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_ROUTE__BUILDER_HPP_
#define STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_ROUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "static_centerline_optimizer/srv/detail/plan_route__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace static_centerline_optimizer
{

namespace srv
{

namespace builder
{

class Init_PlanRoute_Request_end_lane_id
{
public:
  explicit Init_PlanRoute_Request_end_lane_id(::static_centerline_optimizer::srv::PlanRoute_Request & msg)
  : msg_(msg)
  {}
  ::static_centerline_optimizer::srv::PlanRoute_Request end_lane_id(::static_centerline_optimizer::srv::PlanRoute_Request::_end_lane_id_type arg)
  {
    msg_.end_lane_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::static_centerline_optimizer::srv::PlanRoute_Request msg_;
};

class Init_PlanRoute_Request_start_lane_id
{
public:
  Init_PlanRoute_Request_start_lane_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanRoute_Request_end_lane_id start_lane_id(::static_centerline_optimizer::srv::PlanRoute_Request::_start_lane_id_type arg)
  {
    msg_.start_lane_id = std::move(arg);
    return Init_PlanRoute_Request_end_lane_id(msg_);
  }

private:
  ::static_centerline_optimizer::srv::PlanRoute_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::static_centerline_optimizer::srv::PlanRoute_Request>()
{
  return static_centerline_optimizer::srv::builder::Init_PlanRoute_Request_start_lane_id();
}

}  // namespace static_centerline_optimizer


namespace static_centerline_optimizer
{

namespace srv
{

namespace builder
{

class Init_PlanRoute_Response_message
{
public:
  explicit Init_PlanRoute_Response_message(::static_centerline_optimizer::srv::PlanRoute_Response & msg)
  : msg_(msg)
  {}
  ::static_centerline_optimizer::srv::PlanRoute_Response message(::static_centerline_optimizer::srv::PlanRoute_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::static_centerline_optimizer::srv::PlanRoute_Response msg_;
};

class Init_PlanRoute_Response_lane_ids
{
public:
  Init_PlanRoute_Response_lane_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanRoute_Response_message lane_ids(::static_centerline_optimizer::srv::PlanRoute_Response::_lane_ids_type arg)
  {
    msg_.lane_ids = std::move(arg);
    return Init_PlanRoute_Response_message(msg_);
  }

private:
  ::static_centerline_optimizer::srv::PlanRoute_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::static_centerline_optimizer::srv::PlanRoute_Response>()
{
  return static_centerline_optimizer::srv::builder::Init_PlanRoute_Response_lane_ids();
}

}  // namespace static_centerline_optimizer

#endif  // STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_ROUTE__BUILDER_HPP_
