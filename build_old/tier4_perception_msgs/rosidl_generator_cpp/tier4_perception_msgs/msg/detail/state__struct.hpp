// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_perception_msgs:msg/State.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__STATE__STRUCT_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose_covariance'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.hpp"
// Member 'twist_covariance'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.hpp"
// Member 'acceleration_covariance'
#include "geometry_msgs/msg/detail/accel_with_covariance__struct.hpp"
// Member 'predicted_paths'
#include "tier4_perception_msgs/msg/detail/predicted_path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_perception_msgs__msg__State __attribute__((deprecated))
#else
# define DEPRECATED__tier4_perception_msgs__msg__State __declspec(deprecated)
#endif

namespace tier4_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct State_
{
  using Type = State_<ContainerAllocator>;

  explicit State_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose_covariance(_init),
    twist_covariance(_init),
    acceleration_covariance(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->orientation_reliable = false;
      this->twist_reliable = false;
      this->acceleration_reliable = false;
    }
  }

  explicit State_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose_covariance(_alloc, _init),
    twist_covariance(_alloc, _init),
    acceleration_covariance(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->orientation_reliable = false;
      this->twist_reliable = false;
      this->acceleration_reliable = false;
    }
  }

  // field types and members
  using _pose_covariance_type =
    geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>;
  _pose_covariance_type pose_covariance;
  using _orientation_reliable_type =
    bool;
  _orientation_reliable_type orientation_reliable;
  using _twist_covariance_type =
    geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator>;
  _twist_covariance_type twist_covariance;
  using _twist_reliable_type =
    bool;
  _twist_reliable_type twist_reliable;
  using _acceleration_covariance_type =
    geometry_msgs::msg::AccelWithCovariance_<ContainerAllocator>;
  _acceleration_covariance_type acceleration_covariance;
  using _acceleration_reliable_type =
    bool;
  _acceleration_reliable_type acceleration_reliable;
  using _predicted_paths_type =
    std::vector<tier4_perception_msgs::msg::PredictedPath_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_perception_msgs::msg::PredictedPath_<ContainerAllocator>>>;
  _predicted_paths_type predicted_paths;

  // setters for named parameter idiom
  Type & set__pose_covariance(
    const geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator> & _arg)
  {
    this->pose_covariance = _arg;
    return *this;
  }
  Type & set__orientation_reliable(
    const bool & _arg)
  {
    this->orientation_reliable = _arg;
    return *this;
  }
  Type & set__twist_covariance(
    const geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator> & _arg)
  {
    this->twist_covariance = _arg;
    return *this;
  }
  Type & set__twist_reliable(
    const bool & _arg)
  {
    this->twist_reliable = _arg;
    return *this;
  }
  Type & set__acceleration_covariance(
    const geometry_msgs::msg::AccelWithCovariance_<ContainerAllocator> & _arg)
  {
    this->acceleration_covariance = _arg;
    return *this;
  }
  Type & set__acceleration_reliable(
    const bool & _arg)
  {
    this->acceleration_reliable = _arg;
    return *this;
  }
  Type & set__predicted_paths(
    const std::vector<tier4_perception_msgs::msg::PredictedPath_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_perception_msgs::msg::PredictedPath_<ContainerAllocator>>> & _arg)
  {
    this->predicted_paths = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_perception_msgs::msg::State_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_perception_msgs::msg::State_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_perception_msgs::msg::State_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_perception_msgs::msg::State_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_perception_msgs::msg::State_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_perception_msgs::msg::State_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_perception_msgs::msg::State_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_perception_msgs::msg::State_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_perception_msgs::msg::State_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_perception_msgs::msg::State_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_perception_msgs__msg__State
    std::shared_ptr<tier4_perception_msgs::msg::State_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_perception_msgs__msg__State
    std::shared_ptr<tier4_perception_msgs::msg::State_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const State_ & other) const
  {
    if (this->pose_covariance != other.pose_covariance) {
      return false;
    }
    if (this->orientation_reliable != other.orientation_reliable) {
      return false;
    }
    if (this->twist_covariance != other.twist_covariance) {
      return false;
    }
    if (this->twist_reliable != other.twist_reliable) {
      return false;
    }
    if (this->acceleration_covariance != other.acceleration_covariance) {
      return false;
    }
    if (this->acceleration_reliable != other.acceleration_reliable) {
      return false;
    }
    if (this->predicted_paths != other.predicted_paths) {
      return false;
    }
    return true;
  }
  bool operator!=(const State_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct State_

// alias to use template instance with default allocator
using State =
  tier4_perception_msgs::msg::State_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_perception_msgs

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__STATE__STRUCT_HPP_
