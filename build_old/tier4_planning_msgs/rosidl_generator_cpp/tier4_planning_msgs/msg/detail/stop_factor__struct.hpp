// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_planning_msgs:msg/StopFactor.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_FACTOR__STRUCT_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_FACTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stop_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'stop_factor_points'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_planning_msgs__msg__StopFactor __attribute__((deprecated))
#else
# define DEPRECATED__tier4_planning_msgs__msg__StopFactor __declspec(deprecated)
#endif

namespace tier4_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StopFactor_
{
  using Type = StopFactor_<ContainerAllocator>;

  explicit StopFactor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stop_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dist_to_stop_pose = 0.0;
    }
  }

  explicit StopFactor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stop_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dist_to_stop_pose = 0.0;
    }
  }

  // field types and members
  using _stop_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _stop_pose_type stop_pose;
  using _dist_to_stop_pose_type =
    double;
  _dist_to_stop_pose_type dist_to_stop_pose;
  using _stop_factor_points_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _stop_factor_points_type stop_factor_points;

  // setters for named parameter idiom
  Type & set__stop_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->stop_pose = _arg;
    return *this;
  }
  Type & set__dist_to_stop_pose(
    const double & _arg)
  {
    this->dist_to_stop_pose = _arg;
    return *this;
  }
  Type & set__stop_factor_points(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->stop_factor_points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_planning_msgs::msg::StopFactor_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_planning_msgs::msg::StopFactor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_planning_msgs::msg::StopFactor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_planning_msgs::msg::StopFactor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_planning_msgs::msg::StopFactor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_planning_msgs::msg::StopFactor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_planning_msgs::msg::StopFactor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_planning_msgs::msg::StopFactor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_planning_msgs::msg::StopFactor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_planning_msgs::msg::StopFactor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_planning_msgs__msg__StopFactor
    std::shared_ptr<tier4_planning_msgs::msg::StopFactor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_planning_msgs__msg__StopFactor
    std::shared_ptr<tier4_planning_msgs::msg::StopFactor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopFactor_ & other) const
  {
    if (this->stop_pose != other.stop_pose) {
      return false;
    }
    if (this->dist_to_stop_pose != other.dist_to_stop_pose) {
      return false;
    }
    if (this->stop_factor_points != other.stop_factor_points) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopFactor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopFactor_

// alias to use template instance with default allocator
using StopFactor =
  tier4_planning_msgs::msg::StopFactor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_FACTOR__STRUCT_HPP_
