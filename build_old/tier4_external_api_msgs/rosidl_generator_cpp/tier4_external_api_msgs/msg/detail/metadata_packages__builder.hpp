// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:msg/MetadataPackages.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__METADATA_PACKAGES__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__METADATA_PACKAGES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/msg/detail/metadata_packages__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace msg
{

namespace builder
{

class Init_MetadataPackages_json
{
public:
  explicit Init_MetadataPackages_json(::tier4_external_api_msgs::msg::MetadataPackages & msg)
  : msg_(msg)
  {}
  ::tier4_external_api_msgs::msg::MetadataPackages json(::tier4_external_api_msgs::msg::MetadataPackages::_json_type arg)
  {
    msg_.json = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::MetadataPackages msg_;
};

class Init_MetadataPackages_format
{
public:
  Init_MetadataPackages_format()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MetadataPackages_json format(::tier4_external_api_msgs::msg::MetadataPackages::_format_type arg)
  {
    msg_.format = std::move(arg);
    return Init_MetadataPackages_json(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::MetadataPackages msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::msg::MetadataPackages>()
{
  return tier4_external_api_msgs::msg::builder::Init_MetadataPackages_format();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__METADATA_PACKAGES__BUILDER_HPP_
