// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:srv/GetMetadataPackages.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_METADATA_PACKAGES__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_METADATA_PACKAGES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/srv/detail/get_metadata_packages__struct.hpp"
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
auto build<::tier4_external_api_msgs::srv::GetMetadataPackages_Request>()
{
  return ::tier4_external_api_msgs::srv::GetMetadataPackages_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace tier4_external_api_msgs


namespace tier4_external_api_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMetadataPackages_Response_metadata
{
public:
  explicit Init_GetMetadataPackages_Response_metadata(::tier4_external_api_msgs::srv::GetMetadataPackages_Response & msg)
  : msg_(msg)
  {}
  ::tier4_external_api_msgs::srv::GetMetadataPackages_Response metadata(::tier4_external_api_msgs::srv::GetMetadataPackages_Response::_metadata_type arg)
  {
    msg_.metadata = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::srv::GetMetadataPackages_Response msg_;
};

class Init_GetMetadataPackages_Response_status
{
public:
  Init_GetMetadataPackages_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetMetadataPackages_Response_metadata status(::tier4_external_api_msgs::srv::GetMetadataPackages_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GetMetadataPackages_Response_metadata(msg_);
  }

private:
  ::tier4_external_api_msgs::srv::GetMetadataPackages_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::srv::GetMetadataPackages_Response>()
{
  return tier4_external_api_msgs::srv::builder::Init_GetMetadataPackages_Response_status();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_METADATA_PACKAGES__BUILDER_HPP_
