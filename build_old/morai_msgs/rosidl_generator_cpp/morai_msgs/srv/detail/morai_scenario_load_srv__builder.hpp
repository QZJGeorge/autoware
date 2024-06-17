// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:srv/MoraiScenarioLoadSrv.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__SRV__DETAIL__MORAI_SCENARIO_LOAD_SRV__BUILDER_HPP_
#define MORAI_MSGS__SRV__DETAIL__MORAI_SCENARIO_LOAD_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/srv/detail/morai_scenario_load_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace srv
{

namespace builder
{

class Init_MoraiScenarioLoadSrv_Request_request
{
public:
  Init_MoraiScenarioLoadSrv_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::morai_msgs::srv::MoraiScenarioLoadSrv_Request request(::morai_msgs::srv::MoraiScenarioLoadSrv_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::srv::MoraiScenarioLoadSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::srv::MoraiScenarioLoadSrv_Request>()
{
  return morai_msgs::srv::builder::Init_MoraiScenarioLoadSrv_Request_request();
}

}  // namespace morai_msgs


namespace morai_msgs
{

namespace srv
{

namespace builder
{

class Init_MoraiScenarioLoadSrv_Response_response
{
public:
  Init_MoraiScenarioLoadSrv_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::morai_msgs::srv::MoraiScenarioLoadSrv_Response response(::morai_msgs::srv::MoraiScenarioLoadSrv_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::srv::MoraiScenarioLoadSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::srv::MoraiScenarioLoadSrv_Response>()
{
  return morai_msgs::srv::builder::Init_MoraiScenarioLoadSrv_Response_response();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__SRV__DETAIL__MORAI_SCENARIO_LOAD_SRV__BUILDER_HPP_
