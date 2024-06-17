// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/NpcGhostInfo.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__NPC_GHOST_INFO__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__NPC_GHOST_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
// Member 'rpy'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__NpcGhostInfo __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__NpcGhostInfo __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NpcGhostInfo_
{
  using Type = NpcGhostInfo_<ContainerAllocator>;

  explicit NpcGhostInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    rpy(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unique_id = 0l;
      this->name = "";
    }
  }

  explicit NpcGhostInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    position(_alloc, _init),
    rpy(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unique_id = 0l;
      this->name = "";
    }
  }

  // field types and members
  using _unique_id_type =
    int32_t;
  _unique_id_type unique_id;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _position_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _position_type position;
  using _rpy_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _rpy_type rpy;

  // setters for named parameter idiom
  Type & set__unique_id(
    const int32_t & _arg)
  {
    this->unique_id = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__rpy(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->rpy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::NpcGhostInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::NpcGhostInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::NpcGhostInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::NpcGhostInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::NpcGhostInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::NpcGhostInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::NpcGhostInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::NpcGhostInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::NpcGhostInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::NpcGhostInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__NpcGhostInfo
    std::shared_ptr<morai_msgs::msg::NpcGhostInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__NpcGhostInfo
    std::shared_ptr<morai_msgs::msg::NpcGhostInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NpcGhostInfo_ & other) const
  {
    if (this->unique_id != other.unique_id) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->rpy != other.rpy) {
      return false;
    }
    return true;
  }
  bool operator!=(const NpcGhostInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NpcGhostInfo_

// alias to use template instance with default allocator
using NpcGhostInfo =
  morai_msgs::msg::NpcGhostInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__NPC_GHOST_INFO__STRUCT_HPP_
