// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_system_msgs:srv/OperateMrm.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__SRV__DETAIL__OPERATE_MRM__BUILDER_HPP_
#define TIER4_SYSTEM_MSGS__SRV__DETAIL__OPERATE_MRM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_system_msgs/srv/detail/operate_mrm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_system_msgs
{

namespace srv
{

namespace builder
{

class Init_OperateMrm_Request_operate
{
public:
  explicit Init_OperateMrm_Request_operate(::tier4_system_msgs::srv::OperateMrm_Request & msg)
  : msg_(msg)
  {}
  ::tier4_system_msgs::srv::OperateMrm_Request operate(::tier4_system_msgs::srv::OperateMrm_Request::_operate_type arg)
  {
    msg_.operate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_system_msgs::srv::OperateMrm_Request msg_;
};

class Init_OperateMrm_Request_stamp
{
public:
  Init_OperateMrm_Request_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OperateMrm_Request_operate stamp(::tier4_system_msgs::srv::OperateMrm_Request::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_OperateMrm_Request_operate(msg_);
  }

private:
  ::tier4_system_msgs::srv::OperateMrm_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_system_msgs::srv::OperateMrm_Request>()
{
  return tier4_system_msgs::srv::builder::Init_OperateMrm_Request_stamp();
}

}  // namespace tier4_system_msgs


namespace tier4_system_msgs
{

namespace srv
{

namespace builder
{

class Init_OperateMrm_Response_response
{
public:
  Init_OperateMrm_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_system_msgs::srv::OperateMrm_Response response(::tier4_system_msgs::srv::OperateMrm_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_system_msgs::srv::OperateMrm_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_system_msgs::srv::OperateMrm_Response>()
{
  return tier4_system_msgs::srv::builder::Init_OperateMrm_Response_response();
}

}  // namespace tier4_system_msgs

#endif  // TIER4_SYSTEM_MSGS__SRV__DETAIL__OPERATE_MRM__BUILDER_HPP_
