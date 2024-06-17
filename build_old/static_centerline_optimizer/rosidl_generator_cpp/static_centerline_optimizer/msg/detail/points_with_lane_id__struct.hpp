// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from static_centerline_optimizer:msg/PointsWithLaneId.idl
// generated code does not contain a copyright notice

#ifndef STATIC_CENTERLINE_OPTIMIZER__MSG__DETAIL__POINTS_WITH_LANE_ID__STRUCT_HPP_
#define STATIC_CENTERLINE_OPTIMIZER__MSG__DETAIL__POINTS_WITH_LANE_ID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'points'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__static_centerline_optimizer__msg__PointsWithLaneId __attribute__((deprecated))
#else
# define DEPRECATED__static_centerline_optimizer__msg__PointsWithLaneId __declspec(deprecated)
#endif

namespace static_centerline_optimizer
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PointsWithLaneId_
{
  using Type = PointsWithLaneId_<ContainerAllocator>;

  explicit PointsWithLaneId_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_id = 0ul;
    }
  }

  explicit PointsWithLaneId_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_id = 0ul;
    }
  }

  // field types and members
  using _lane_id_type =
    uint32_t;
  _lane_id_type lane_id;
  using _points_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _points_type points;

  // setters for named parameter idiom
  Type & set__lane_id(
    const uint32_t & _arg)
  {
    this->lane_id = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    static_centerline_optimizer::msg::PointsWithLaneId_<ContainerAllocator> *;
  using ConstRawPtr =
    const static_centerline_optimizer::msg::PointsWithLaneId_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<static_centerline_optimizer::msg::PointsWithLaneId_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<static_centerline_optimizer::msg::PointsWithLaneId_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      static_centerline_optimizer::msg::PointsWithLaneId_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<static_centerline_optimizer::msg::PointsWithLaneId_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      static_centerline_optimizer::msg::PointsWithLaneId_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<static_centerline_optimizer::msg::PointsWithLaneId_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<static_centerline_optimizer::msg::PointsWithLaneId_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<static_centerline_optimizer::msg::PointsWithLaneId_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__static_centerline_optimizer__msg__PointsWithLaneId
    std::shared_ptr<static_centerline_optimizer::msg::PointsWithLaneId_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__static_centerline_optimizer__msg__PointsWithLaneId
    std::shared_ptr<static_centerline_optimizer::msg::PointsWithLaneId_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointsWithLaneId_ & other) const
  {
    if (this->lane_id != other.lane_id) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointsWithLaneId_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointsWithLaneId_

// alias to use template instance with default allocator
using PointsWithLaneId =
  static_centerline_optimizer::msg::PointsWithLaneId_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace static_centerline_optimizer

#endif  // STATIC_CENTERLINE_OPTIMIZER__MSG__DETAIL__POINTS_WITH_LANE_ID__STRUCT_HPP_
