// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from static_centerline_optimizer:srv/LoadMap.idl
// generated code does not contain a copyright notice

#ifndef STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__LOAD_MAP__BUILDER_HPP_
#define STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__LOAD_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "static_centerline_optimizer/srv/detail/load_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace static_centerline_optimizer
{

namespace srv
{

namespace builder
{

class Init_LoadMap_Request_map
{
public:
  Init_LoadMap_Request_map()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::static_centerline_optimizer::srv::LoadMap_Request map(::static_centerline_optimizer::srv::LoadMap_Request::_map_type arg)
  {
    msg_.map = std::move(arg);
    return std::move(msg_);
  }

private:
  ::static_centerline_optimizer::srv::LoadMap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::static_centerline_optimizer::srv::LoadMap_Request>()
{
  return static_centerline_optimizer::srv::builder::Init_LoadMap_Request_map();
}

}  // namespace static_centerline_optimizer


namespace static_centerline_optimizer
{

namespace srv
{

namespace builder
{

class Init_LoadMap_Response_message
{
public:
  Init_LoadMap_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::static_centerline_optimizer::srv::LoadMap_Response message(::static_centerline_optimizer::srv::LoadMap_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::static_centerline_optimizer::srv::LoadMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::static_centerline_optimizer::srv::LoadMap_Response>()
{
  return static_centerline_optimizer::srv::builder::Init_LoadMap_Response_message();
}

}  // namespace static_centerline_optimizer

#endif  // STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__LOAD_MAP__BUILDER_HPP_
