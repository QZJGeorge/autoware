// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_planning_msgs:msg/LaneletSegment.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_SEGMENT__STRUCT_HPP_
#define AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_SEGMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'preferred_primitive'
// Member 'primitives'
#include "autoware_planning_msgs/msg/detail/lanelet_primitive__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_planning_msgs__msg__LaneletSegment __attribute__((deprecated))
#else
# define DEPRECATED__autoware_planning_msgs__msg__LaneletSegment __declspec(deprecated)
#endif

namespace autoware_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneletSegment_
{
  using Type = LaneletSegment_<ContainerAllocator>;

  explicit LaneletSegment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : preferred_primitive(_init)
  {
    (void)_init;
  }

  explicit LaneletSegment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : preferred_primitive(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _preferred_primitive_type =
    autoware_planning_msgs::msg::LaneletPrimitive_<ContainerAllocator>;
  _preferred_primitive_type preferred_primitive;
  using _primitives_type =
    std::vector<autoware_planning_msgs::msg::LaneletPrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_planning_msgs::msg::LaneletPrimitive_<ContainerAllocator>>>;
  _primitives_type primitives;

  // setters for named parameter idiom
  Type & set__preferred_primitive(
    const autoware_planning_msgs::msg::LaneletPrimitive_<ContainerAllocator> & _arg)
  {
    this->preferred_primitive = _arg;
    return *this;
  }
  Type & set__primitives(
    const std::vector<autoware_planning_msgs::msg::LaneletPrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_planning_msgs::msg::LaneletPrimitive_<ContainerAllocator>>> & _arg)
  {
    this->primitives = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_planning_msgs::msg::LaneletSegment_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_planning_msgs::msg::LaneletSegment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_planning_msgs::msg::LaneletSegment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_planning_msgs::msg::LaneletSegment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_planning_msgs::msg::LaneletSegment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_planning_msgs::msg::LaneletSegment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_planning_msgs::msg::LaneletSegment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_planning_msgs::msg::LaneletSegment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_planning_msgs::msg::LaneletSegment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_planning_msgs::msg::LaneletSegment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_planning_msgs__msg__LaneletSegment
    std::shared_ptr<autoware_planning_msgs::msg::LaneletSegment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_planning_msgs__msg__LaneletSegment
    std::shared_ptr<autoware_planning_msgs::msg::LaneletSegment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneletSegment_ & other) const
  {
    if (this->preferred_primitive != other.preferred_primitive) {
      return false;
    }
    if (this->primitives != other.primitives) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneletSegment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneletSegment_

// alias to use template instance with default allocator
using LaneletSegment =
  autoware_planning_msgs::msg::LaneletSegment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_planning_msgs

#endif  // AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_SEGMENT__STRUCT_HPP_
