// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_api_msgs:msg/ObstacleAvoidanceStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__OBSTACLE_AVOIDANCE_STATUS__STRUCT_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__OBSTACLE_AVOIDANCE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'candidate_path'
#include "tier4_planning_msgs/msg/detail/trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_api_msgs__msg__ObstacleAvoidanceStatus __attribute__((deprecated))
#else
# define DEPRECATED__tier4_api_msgs__msg__ObstacleAvoidanceStatus __declspec(deprecated)
#endif

namespace tier4_api_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleAvoidanceStatus_
{
  using Type = ObstacleAvoidanceStatus_<ContainerAllocator>;

  explicit ObstacleAvoidanceStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    candidate_path(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obstacle_avoidance_ready = false;
    }
  }

  explicit ObstacleAvoidanceStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    candidate_path(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obstacle_avoidance_ready = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _obstacle_avoidance_ready_type =
    bool;
  _obstacle_avoidance_ready_type obstacle_avoidance_ready;
  using _candidate_path_type =
    tier4_planning_msgs::msg::Trajectory_<ContainerAllocator>;
  _candidate_path_type candidate_path;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__obstacle_avoidance_ready(
    const bool & _arg)
  {
    this->obstacle_avoidance_ready = _arg;
    return *this;
  }
  Type & set__candidate_path(
    const tier4_planning_msgs::msg::Trajectory_<ContainerAllocator> & _arg)
  {
    this->candidate_path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_api_msgs::msg::ObstacleAvoidanceStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_api_msgs::msg::ObstacleAvoidanceStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_api_msgs::msg::ObstacleAvoidanceStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_api_msgs::msg::ObstacleAvoidanceStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_api_msgs::msg::ObstacleAvoidanceStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_api_msgs::msg::ObstacleAvoidanceStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_api_msgs::msg::ObstacleAvoidanceStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_api_msgs::msg::ObstacleAvoidanceStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_api_msgs::msg::ObstacleAvoidanceStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_api_msgs::msg::ObstacleAvoidanceStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_api_msgs__msg__ObstacleAvoidanceStatus
    std::shared_ptr<tier4_api_msgs::msg::ObstacleAvoidanceStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_api_msgs__msg__ObstacleAvoidanceStatus
    std::shared_ptr<tier4_api_msgs::msg::ObstacleAvoidanceStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleAvoidanceStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->obstacle_avoidance_ready != other.obstacle_avoidance_ready) {
      return false;
    }
    if (this->candidate_path != other.candidate_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleAvoidanceStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleAvoidanceStatus_

// alias to use template instance with default allocator
using ObstacleAvoidanceStatus =
  tier4_api_msgs::msg::ObstacleAvoidanceStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_api_msgs

#endif  // TIER4_API_MSGS__MSG__DETAIL__OBSTACLE_AVOIDANCE_STATUS__STRUCT_HPP_
