// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_planning_msgs:msg/LaneletPrimitive.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_PRIMITIVE__STRUCT_HPP_
#define AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_PRIMITIVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autoware_planning_msgs__msg__LaneletPrimitive __attribute__((deprecated))
#else
# define DEPRECATED__autoware_planning_msgs__msg__LaneletPrimitive __declspec(deprecated)
#endif

namespace autoware_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneletPrimitive_
{
  using Type = LaneletPrimitive_<ContainerAllocator>;

  explicit LaneletPrimitive_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
      this->primitive_type = "";
    }
  }

  explicit LaneletPrimitive_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : primitive_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
      this->primitive_type = "";
    }
  }

  // field types and members
  using _id_type =
    int64_t;
  _id_type id;
  using _primitive_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _primitive_type_type primitive_type;

  // setters for named parameter idiom
  Type & set__id(
    const int64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__primitive_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->primitive_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_planning_msgs::msg::LaneletPrimitive_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_planning_msgs::msg::LaneletPrimitive_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_planning_msgs::msg::LaneletPrimitive_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_planning_msgs::msg::LaneletPrimitive_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_planning_msgs::msg::LaneletPrimitive_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_planning_msgs::msg::LaneletPrimitive_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_planning_msgs::msg::LaneletPrimitive_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_planning_msgs::msg::LaneletPrimitive_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_planning_msgs::msg::LaneletPrimitive_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_planning_msgs::msg::LaneletPrimitive_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_planning_msgs__msg__LaneletPrimitive
    std::shared_ptr<autoware_planning_msgs::msg::LaneletPrimitive_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_planning_msgs__msg__LaneletPrimitive
    std::shared_ptr<autoware_planning_msgs::msg::LaneletPrimitive_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneletPrimitive_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->primitive_type != other.primitive_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneletPrimitive_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneletPrimitive_

// alias to use template instance with default allocator
using LaneletPrimitive =
  autoware_planning_msgs::msg::LaneletPrimitive_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_planning_msgs

#endif  // AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_PRIMITIVE__STRUCT_HPP_
