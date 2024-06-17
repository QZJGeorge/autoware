// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pandar_msgs:msg/PandarPacket.idl
// generated code does not contain a copyright notice

#ifndef PANDAR_MSGS__MSG__DETAIL__PANDAR_PACKET__STRUCT_HPP_
#define PANDAR_MSGS__MSG__DETAIL__PANDAR_PACKET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pandar_msgs__msg__PandarPacket __attribute__((deprecated))
#else
# define DEPRECATED__pandar_msgs__msg__PandarPacket __declspec(deprecated)
#endif

namespace pandar_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PandarPacket_
{
  using Type = PandarPacket_<ContainerAllocator>;

  explicit PandarPacket_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 1500>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
      this->size = 0ul;
    }
  }

  explicit PandarPacket_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 1500>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
      this->size = 0ul;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _data_type =
    std::array<uint8_t, 1500>;
  _data_type data;
  using _size_type =
    uint32_t;
  _size_type size;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__data(
    const std::array<uint8_t, 1500> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__size(
    const uint32_t & _arg)
  {
    this->size = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pandar_msgs::msg::PandarPacket_<ContainerAllocator> *;
  using ConstRawPtr =
    const pandar_msgs::msg::PandarPacket_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pandar_msgs::msg::PandarPacket_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pandar_msgs::msg::PandarPacket_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pandar_msgs::msg::PandarPacket_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pandar_msgs::msg::PandarPacket_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pandar_msgs::msg::PandarPacket_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pandar_msgs::msg::PandarPacket_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pandar_msgs::msg::PandarPacket_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pandar_msgs::msg::PandarPacket_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pandar_msgs__msg__PandarPacket
    std::shared_ptr<pandar_msgs::msg::PandarPacket_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pandar_msgs__msg__PandarPacket
    std::shared_ptr<pandar_msgs::msg::PandarPacket_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PandarPacket_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    return true;
  }
  bool operator!=(const PandarPacket_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PandarPacket_

// alias to use template instance with default allocator
using PandarPacket =
  pandar_msgs::msg::PandarPacket_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pandar_msgs

#endif  // PANDAR_MSGS__MSG__DETAIL__PANDAR_PACKET__STRUCT_HPP_
