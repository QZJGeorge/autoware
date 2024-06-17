// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pandar_msgs:msg/PandarScan.idl
// generated code does not contain a copyright notice

#ifndef PANDAR_MSGS__MSG__DETAIL__PANDAR_SCAN__STRUCT_HPP_
#define PANDAR_MSGS__MSG__DETAIL__PANDAR_SCAN__STRUCT_HPP_

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
// Member 'packets'
#include "pandar_msgs/msg/detail/pandar_packet__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pandar_msgs__msg__PandarScan __attribute__((deprecated))
#else
# define DEPRECATED__pandar_msgs__msg__PandarScan __declspec(deprecated)
#endif

namespace pandar_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PandarScan_
{
  using Type = PandarScan_<ContainerAllocator>;

  explicit PandarScan_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit PandarScan_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _packets_type =
    std::vector<pandar_msgs::msg::PandarPacket_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pandar_msgs::msg::PandarPacket_<ContainerAllocator>>>;
  _packets_type packets;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__packets(
    const std::vector<pandar_msgs::msg::PandarPacket_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pandar_msgs::msg::PandarPacket_<ContainerAllocator>>> & _arg)
  {
    this->packets = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pandar_msgs::msg::PandarScan_<ContainerAllocator> *;
  using ConstRawPtr =
    const pandar_msgs::msg::PandarScan_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pandar_msgs::msg::PandarScan_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pandar_msgs::msg::PandarScan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pandar_msgs::msg::PandarScan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pandar_msgs::msg::PandarScan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pandar_msgs::msg::PandarScan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pandar_msgs::msg::PandarScan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pandar_msgs::msg::PandarScan_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pandar_msgs::msg::PandarScan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pandar_msgs__msg__PandarScan
    std::shared_ptr<pandar_msgs::msg::PandarScan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pandar_msgs__msg__PandarScan
    std::shared_ptr<pandar_msgs::msg::PandarScan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PandarScan_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->packets != other.packets) {
      return false;
    }
    return true;
  }
  bool operator!=(const PandarScan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PandarScan_

// alias to use template instance with default allocator
using PandarScan =
  pandar_msgs::msg::PandarScan_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pandar_msgs

#endif  // PANDAR_MSGS__MSG__DETAIL__PANDAR_SCAN__STRUCT_HPP_
