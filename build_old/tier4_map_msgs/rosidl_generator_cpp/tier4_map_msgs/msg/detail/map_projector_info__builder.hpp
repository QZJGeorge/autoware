// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_map_msgs:msg/MapProjectorInfo.idl
// generated code does not contain a copyright notice

#ifndef TIER4_MAP_MSGS__MSG__DETAIL__MAP_PROJECTOR_INFO__BUILDER_HPP_
#define TIER4_MAP_MSGS__MSG__DETAIL__MAP_PROJECTOR_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_map_msgs/msg/detail/map_projector_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_map_msgs
{

namespace msg
{

namespace builder
{

class Init_MapProjectorInfo_map_origin
{
public:
  explicit Init_MapProjectorInfo_map_origin(::tier4_map_msgs::msg::MapProjectorInfo & msg)
  : msg_(msg)
  {}
  ::tier4_map_msgs::msg::MapProjectorInfo map_origin(::tier4_map_msgs::msg::MapProjectorInfo::_map_origin_type arg)
  {
    msg_.map_origin = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_map_msgs::msg::MapProjectorInfo msg_;
};

class Init_MapProjectorInfo_mgrs_grid
{
public:
  explicit Init_MapProjectorInfo_mgrs_grid(::tier4_map_msgs::msg::MapProjectorInfo & msg)
  : msg_(msg)
  {}
  Init_MapProjectorInfo_map_origin mgrs_grid(::tier4_map_msgs::msg::MapProjectorInfo::_mgrs_grid_type arg)
  {
    msg_.mgrs_grid = std::move(arg);
    return Init_MapProjectorInfo_map_origin(msg_);
  }

private:
  ::tier4_map_msgs::msg::MapProjectorInfo msg_;
};

class Init_MapProjectorInfo_vertical_datum
{
public:
  explicit Init_MapProjectorInfo_vertical_datum(::tier4_map_msgs::msg::MapProjectorInfo & msg)
  : msg_(msg)
  {}
  Init_MapProjectorInfo_mgrs_grid vertical_datum(::tier4_map_msgs::msg::MapProjectorInfo::_vertical_datum_type arg)
  {
    msg_.vertical_datum = std::move(arg);
    return Init_MapProjectorInfo_mgrs_grid(msg_);
  }

private:
  ::tier4_map_msgs::msg::MapProjectorInfo msg_;
};

class Init_MapProjectorInfo_projector_type
{
public:
  Init_MapProjectorInfo_projector_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapProjectorInfo_vertical_datum projector_type(::tier4_map_msgs::msg::MapProjectorInfo::_projector_type_type arg)
  {
    msg_.projector_type = std::move(arg);
    return Init_MapProjectorInfo_vertical_datum(msg_);
  }

private:
  ::tier4_map_msgs::msg::MapProjectorInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_map_msgs::msg::MapProjectorInfo>()
{
  return tier4_map_msgs::msg::builder::Init_MapProjectorInfo_projector_type();
}

}  // namespace tier4_map_msgs

#endif  // TIER4_MAP_MSGS__MSG__DETAIL__MAP_PROJECTOR_INFO__BUILDER_HPP_
