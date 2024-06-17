// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:srv/MoraiMapSpecSrv.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__SRV__DETAIL__MORAI_MAP_SPEC_SRV__BUILDER_HPP_
#define MORAI_MSGS__SRV__DETAIL__MORAI_MAP_SPEC_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/srv/detail/morai_map_spec_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace srv
{

namespace builder
{

class Init_MoraiMapSpecSrv_Request_request
{
public:
  Init_MoraiMapSpecSrv_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::morai_msgs::srv::MoraiMapSpecSrv_Request request(::morai_msgs::srv::MoraiMapSpecSrv_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::srv::MoraiMapSpecSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::srv::MoraiMapSpecSrv_Request>()
{
  return morai_msgs::srv::builder::Init_MoraiMapSpecSrv_Request_request();
}

}  // namespace morai_msgs


namespace morai_msgs
{

namespace srv
{

namespace builder
{

class Init_MoraiMapSpecSrv_Response_response
{
public:
  Init_MoraiMapSpecSrv_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::morai_msgs::srv::MoraiMapSpecSrv_Response response(::morai_msgs::srv::MoraiMapSpecSrv_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::srv::MoraiMapSpecSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::srv::MoraiMapSpecSrv_Response>()
{
  return morai_msgs::srv::builder::Init_MoraiMapSpecSrv_Response_response();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__SRV__DETAIL__MORAI_MAP_SPEC_SRV__BUILDER_HPP_
