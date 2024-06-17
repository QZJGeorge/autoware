// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/NpcGhostCmd.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__NPC_GHOST_CMD__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__NPC_GHOST_CMD__STRUCT_HPP_

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
// Member 'npc_list'
#include "morai_msgs/msg/detail/npc_ghost_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__NpcGhostCmd __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__NpcGhostCmd __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NpcGhostCmd_
{
  using Type = NpcGhostCmd_<ContainerAllocator>;

  explicit NpcGhostCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit NpcGhostCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _npc_list_type =
    std::vector<morai_msgs::msg::NpcGhostInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<morai_msgs::msg::NpcGhostInfo_<ContainerAllocator>>>;
  _npc_list_type npc_list;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__npc_list(
    const std::vector<morai_msgs::msg::NpcGhostInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<morai_msgs::msg::NpcGhostInfo_<ContainerAllocator>>> & _arg)
  {
    this->npc_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::NpcGhostCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::NpcGhostCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::NpcGhostCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::NpcGhostCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::NpcGhostCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::NpcGhostCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::NpcGhostCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::NpcGhostCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::NpcGhostCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::NpcGhostCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__NpcGhostCmd
    std::shared_ptr<morai_msgs::msg::NpcGhostCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__NpcGhostCmd
    std::shared_ptr<morai_msgs::msg::NpcGhostCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NpcGhostCmd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->npc_list != other.npc_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const NpcGhostCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NpcGhostCmd_

// alias to use template instance with default allocator
using NpcGhostCmd =
  morai_msgs::msg::NpcGhostCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__NPC_GHOST_CMD__STRUCT_HPP_
