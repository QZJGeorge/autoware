// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:msg/LocalizationScore.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__LOCALIZATION_SCORE__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__LOCALIZATION_SCORE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/msg/detail/localization_score__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace msg
{

namespace builder
{

class Init_LocalizationScore_value
{
public:
  explicit Init_LocalizationScore_value(::tier4_external_api_msgs::msg::LocalizationScore & msg)
  : msg_(msg)
  {}
  ::tier4_external_api_msgs::msg::LocalizationScore value(::tier4_external_api_msgs::msg::LocalizationScore::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::LocalizationScore msg_;
};

class Init_LocalizationScore_name
{
public:
  Init_LocalizationScore_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalizationScore_value name(::tier4_external_api_msgs::msg::LocalizationScore::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_LocalizationScore_value(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::LocalizationScore msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::msg::LocalizationScore>()
{
  return tier4_external_api_msgs::msg::builder::Init_LocalizationScore_name();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__LOCALIZATION_SCORE__BUILDER_HPP_
