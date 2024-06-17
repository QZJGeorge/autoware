// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:srv/GetRosbagCopyList.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_ROSBAG_COPY_LIST__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_ROSBAG_COPY_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/srv/detail/get_rosbag_copy_list__struct.hpp"
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
auto build<::tier4_external_api_msgs::srv::GetRosbagCopyList_Request>()
{
  return ::tier4_external_api_msgs::srv::GetRosbagCopyList_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace tier4_external_api_msgs


namespace tier4_external_api_msgs
{

namespace srv
{

namespace builder
{

class Init_GetRosbagCopyList_Response_copy_directory_list
{
public:
  explicit Init_GetRosbagCopyList_Response_copy_directory_list(::tier4_external_api_msgs::srv::GetRosbagCopyList_Response & msg)
  : msg_(msg)
  {}
  ::tier4_external_api_msgs::srv::GetRosbagCopyList_Response copy_directory_list(::tier4_external_api_msgs::srv::GetRosbagCopyList_Response::_copy_directory_list_type arg)
  {
    msg_.copy_directory_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::srv::GetRosbagCopyList_Response msg_;
};

class Init_GetRosbagCopyList_Response_status
{
public:
  Init_GetRosbagCopyList_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetRosbagCopyList_Response_copy_directory_list status(::tier4_external_api_msgs::srv::GetRosbagCopyList_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GetRosbagCopyList_Response_copy_directory_list(msg_);
  }

private:
  ::tier4_external_api_msgs::srv::GetRosbagCopyList_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::srv::GetRosbagCopyList_Response>()
{
  return tier4_external_api_msgs::srv::builder::Init_GetRosbagCopyList_Response_status();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_ROSBAG_COPY_LIST__BUILDER_HPP_
