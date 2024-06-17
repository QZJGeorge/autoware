// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/SyncModeInfo.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SYNC_MODE_INFO__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__SYNC_MODE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__SyncModeInfo __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__SyncModeInfo __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SyncModeInfo_
{
  using Type = SyncModeInfo_<ContainerAllocator>;

  explicit SyncModeInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->master_id = "";
      this->status = false;
      this->frame = 0ull;
      this->can_send_tick = false;
    }
  }

  explicit SyncModeInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : master_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->master_id = "";
      this->status = false;
      this->frame = 0ull;
      this->can_send_tick = false;
    }
  }

  // field types and members
  using _master_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _master_id_type master_id;
  using _status_type =
    bool;
  _status_type status;
  using _frame_type =
    uint64_t;
  _frame_type frame;
  using _can_send_tick_type =
    bool;
  _can_send_tick_type can_send_tick;

  // setters for named parameter idiom
  Type & set__master_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->master_id = _arg;
    return *this;
  }
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__frame(
    const uint64_t & _arg)
  {
    this->frame = _arg;
    return *this;
  }
  Type & set__can_send_tick(
    const bool & _arg)
  {
    this->can_send_tick = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::SyncModeInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::SyncModeInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::SyncModeInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::SyncModeInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::SyncModeInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::SyncModeInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::SyncModeInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::SyncModeInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::SyncModeInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::SyncModeInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__SyncModeInfo
    std::shared_ptr<morai_msgs::msg::SyncModeInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__SyncModeInfo
    std::shared_ptr<morai_msgs::msg::SyncModeInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SyncModeInfo_ & other) const
  {
    if (this->master_id != other.master_id) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->frame != other.frame) {
      return false;
    }
    if (this->can_send_tick != other.can_send_tick) {
      return false;
    }
    return true;
  }
  bool operator!=(const SyncModeInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SyncModeInfo_

// alias to use template instance with default allocator
using SyncModeInfo =
  morai_msgs::msg::SyncModeInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__SYNC_MODE_INFO__STRUCT_HPP_
