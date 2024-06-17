// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dummy_perception_publisher:msg/InitialState.idl
// generated code does not contain a copyright notice

#ifndef DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__INITIAL_STATE__STRUCT_HPP_
#define DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__INITIAL_STATE__STRUCT_HPP_

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
// Member 'accel_covariance'
#include "geometry_msgs/msg/detail/accel_with_covariance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dummy_perception_publisher__msg__InitialState __attribute__((deprecated))
#else
# define DEPRECATED__dummy_perception_publisher__msg__InitialState __declspec(deprecated)
#endif

namespace dummy_perception_publisher
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InitialState_
{
  using Type = InitialState_<ContainerAllocator>;

  explicit InitialState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose_covariance(_init),
    twist_covariance(_init),
    accel_covariance(_init)
  {
    (void)_init;
  }

  explicit InitialState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose_covariance(_alloc, _init),
    twist_covariance(_alloc, _init),
    accel_covariance(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_covariance_type =
    geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>;
  _pose_covariance_type pose_covariance;
  using _twist_covariance_type =
    geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator>;
  _twist_covariance_type twist_covariance;
  using _accel_covariance_type =
    geometry_msgs::msg::AccelWithCovariance_<ContainerAllocator>;
  _accel_covariance_type accel_covariance;

  // setters for named parameter idiom
  Type & set__pose_covariance(
    const geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator> & _arg)
  {
    this->pose_covariance = _arg;
    return *this;
  }
  Type & set__twist_covariance(
    const geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator> & _arg)
  {
    this->twist_covariance = _arg;
    return *this;
  }
  Type & set__accel_covariance(
    const geometry_msgs::msg::AccelWithCovariance_<ContainerAllocator> & _arg)
  {
    this->accel_covariance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dummy_perception_publisher::msg::InitialState_<ContainerAllocator> *;
  using ConstRawPtr =
    const dummy_perception_publisher::msg::InitialState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dummy_perception_publisher::msg::InitialState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dummy_perception_publisher::msg::InitialState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dummy_perception_publisher::msg::InitialState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dummy_perception_publisher::msg::InitialState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dummy_perception_publisher::msg::InitialState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dummy_perception_publisher::msg::InitialState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dummy_perception_publisher::msg::InitialState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dummy_perception_publisher::msg::InitialState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dummy_perception_publisher__msg__InitialState
    std::shared_ptr<dummy_perception_publisher::msg::InitialState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dummy_perception_publisher__msg__InitialState
    std::shared_ptr<dummy_perception_publisher::msg::InitialState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InitialState_ & other) const
  {
    if (this->pose_covariance != other.pose_covariance) {
      return false;
    }
    if (this->twist_covariance != other.twist_covariance) {
      return false;
    }
    if (this->accel_covariance != other.accel_covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const InitialState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InitialState_

// alias to use template instance with default allocator
using InitialState =
  dummy_perception_publisher::msg::InitialState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dummy_perception_publisher

#endif  // DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__INITIAL_STATE__STRUCT_HPP_
