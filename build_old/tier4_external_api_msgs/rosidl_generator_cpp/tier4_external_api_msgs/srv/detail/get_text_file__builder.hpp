// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:srv/GetTextFile.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_TEXT_FILE__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_TEXT_FILE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/srv/detail/get_text_file__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::srv::GetTextFile_Request>()
{
  return ::tier4_external_api_msgs::srv::GetTextFile_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace tier4_external_api_msgs


namespace tier4_external_api_msgs
{

namespace srv
{

namespace builder
{

class Init_GetTextFile_Response_file
{
public:
  explicit Init_GetTextFile_Response_file(::tier4_external_api_msgs::srv::GetTextFile_Response & msg)
  : msg_(msg)
  {}
  ::tier4_external_api_msgs::srv::GetTextFile_Response file(::tier4_external_api_msgs::srv::GetTextFile_Response::_file_type arg)
  {
    msg_.file = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::srv::GetTextFile_Response msg_;
};

class Init_GetTextFile_Response_status
{
public:
  Init_GetTextFile_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetTextFile_Response_file status(::tier4_external_api_msgs::srv::GetTextFile_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GetTextFile_Response_file(msg_);
  }

private:
  ::tier4_external_api_msgs::srv::GetTextFile_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::srv::GetTextFile_Response>()
{
  return tier4_external_api_msgs::srv::builder::Init_GetTextFile_Response_status();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_TEXT_FILE__BUILDER_HPP_
