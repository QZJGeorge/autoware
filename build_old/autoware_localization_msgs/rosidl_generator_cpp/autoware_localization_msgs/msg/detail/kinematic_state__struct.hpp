// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_localization_msgs:msg/KinematicState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_LOCALIZATION_MSGS__MSG__DETAIL__KINEMATIC_STATE__STRUCT_HPP_
#define AUTOWARE_LOCALIZATION_MSGS__MSG__DETAIL__KINEMATIC_STATE__STRUCT_HPP_

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
// Member 'pose_with_covariance'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.hpp"
// Member 'twist_with_covariance'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.hpp"
// Member 'accel_with_covariance'
#include "geometry_msgs/msg/detail/accel_with_covariance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_localization_msgs__msg__KinematicState __attribute__((deprecated))
#else
# define DEPRECATED__autoware_localization_msgs__msg__KinematicState __declspec(deprecated)
#endif

namespace autoware_localization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KinematicState_
{
  using Type = KinematicState_<ContainerAllocator>;

  explicit KinematicState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose_with_covariance(_init),
    twist_with_covariance(_init),
    accel_with_covariance(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->child_frame_id = "";
    }
  }

  explicit KinematicState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    child_frame_id(_alloc),
    pose_with_covariance(_alloc, _init),
    twist_with_covariance(_alloc, _init),
    accel_with_covariance(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->child_frame_id = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _child_frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _child_frame_id_type child_frame_id;
  using _pose_with_covariance_type =
    geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>;
  _pose_with_covariance_type pose_with_covariance;
  using _twist_with_covariance_type =
    geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator>;
  _twist_with_covariance_type twist_with_covariance;
  using _accel_with_covariance_type =
    geometry_msgs::msg::AccelWithCovariance_<ContainerAllocator>;
  _accel_with_covariance_type accel_with_covariance;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__child_frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->child_frame_id = _arg;
    return *this;
  }
  Type & set__pose_with_covariance(
    const geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator> & _arg)
  {
    this->pose_with_covariance = _arg;
    return *this;
  }
  Type & set__twist_with_covariance(
    const geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator> & _arg)
  {
    this->twist_with_covariance = _arg;
    return *this;
  }
  Type & set__accel_with_covariance(
    const geometry_msgs::msg::AccelWithCovariance_<ContainerAllocator> & _arg)
  {
    this->accel_with_covariance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_localization_msgs::msg::KinematicState_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_localization_msgs::msg::KinematicState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_localization_msgs::msg::KinematicState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_localization_msgs::msg::KinematicState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_localization_msgs::msg::KinematicState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_localization_msgs::msg::KinematicState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_localization_msgs::msg::KinematicState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_localization_msgs::msg::KinematicState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_localization_msgs::msg::KinematicState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_localization_msgs::msg::KinematicState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_localization_msgs__msg__KinematicState
    std::shared_ptr<autoware_localization_msgs::msg::KinematicState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_localization_msgs__msg__KinematicState
    std::shared_ptr<autoware_localization_msgs::msg::KinematicState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KinematicState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->child_frame_id != other.child_frame_id) {
      return false;
    }
    if (this->pose_with_covariance != other.pose_with_covariance) {
      return false;
    }
    if (this->twist_with_covariance != other.twist_with_covariance) {
      return false;
    }
    if (this->accel_with_covariance != other.accel_with_covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const KinematicState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KinematicState_

// alias to use template instance with default allocator
using KinematicState =
  autoware_localization_msgs::msg::KinematicState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_localization_msgs

#endif  // AUTOWARE_LOCALIZATION_MSGS__MSG__DETAIL__KINEMATIC_STATE__STRUCT_HPP_
