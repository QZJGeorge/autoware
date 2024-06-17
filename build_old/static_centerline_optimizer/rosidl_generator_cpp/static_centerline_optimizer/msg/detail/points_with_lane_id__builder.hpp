// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from static_centerline_optimizer:msg/PointsWithLaneId.idl
// generated code does not contain a copyright notice

#ifndef STATIC_CENTERLINE_OPTIMIZER__MSG__DETAIL__POINTS_WITH_LANE_ID__BUILDER_HPP_
#define STATIC_CENTERLINE_OPTIMIZER__MSG__DETAIL__POINTS_WITH_LANE_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "static_centerline_optimizer/msg/detail/points_with_lane_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace static_centerline_optimizer
{

namespace msg
{

namespace builder
{

class Init_PointsWithLaneId_points
{
public:
  explicit Init_PointsWithLaneId_points(::static_centerline_optimizer::msg::PointsWithLaneId & msg)
  : msg_(msg)
  {}
  ::static_centerline_optimizer::msg::PointsWithLaneId points(::static_centerline_optimizer::msg::PointsWithLaneId::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::static_centerline_optimizer::msg::PointsWithLaneId msg_;
};

class Init_PointsWithLaneId_lane_id
{
public:
  Init_PointsWithLaneId_lane_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointsWithLaneId_points lane_id(::static_centerline_optimizer::msg::PointsWithLaneId::_lane_id_type arg)
  {
    msg_.lane_id = std::move(arg);
    return Init_PointsWithLaneId_points(msg_);
  }

private:
  ::static_centerline_optimizer::msg::PointsWithLaneId msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::static_centerline_optimizer::msg::PointsWithLaneId>()
{
  return static_centerline_optimizer::msg::builder::Init_PointsWithLaneId_lane_id();
}

}  // namespace static_centerline_optimizer

#endif  // STATIC_CENTERLINE_OPTIMIZER__MSG__DETAIL__POINTS_WITH_LANE_ID__BUILDER_HPP_
