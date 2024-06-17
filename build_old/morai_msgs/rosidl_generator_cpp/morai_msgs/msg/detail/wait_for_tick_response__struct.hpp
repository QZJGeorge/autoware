// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/WaitForTickResponse.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__WAIT_FOR_TICK_RESPONSE__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__WAIT_FOR_TICK_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'vehicle_status'
#include "morai_msgs/msg/detail/ego_vehicle_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__WaitForTickResponse __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__WaitForTickResponse __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WaitForTickResponse_
{
  using Type = WaitForTickResponse_<ContainerAllocator>;

  explicit WaitForTickResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vehicle_status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tick_status = false;
      this->pause_status = false;
      this->frame = 0ull;
      this->time = "";
    }
  }

  explicit WaitForTickResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vehicle_status(_alloc, _init),
    time(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tick_status = false;
      this->pause_status = false;
      this->frame = 0ull;
      this->time = "";
    }
  }

  // field types and members
  using _tick_status_type =
    bool;
  _tick_status_type tick_status;
  using _pause_status_type =
    bool;
  _pause_status_type pause_status;
  using _frame_type =
    uint64_t;
  _frame_type frame;
  using _vehicle_status_type =
    morai_msgs::msg::EgoVehicleStatus_<ContainerAllocator>;
  _vehicle_status_type vehicle_status;
  using _time_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _time_type time;

  // setters for named parameter idiom
  Type & set__tick_status(
    const bool & _arg)
  {
    this->tick_status = _arg;
    return *this;
  }
  Type & set__pause_status(
    const bool & _arg)
  {
    this->pause_status = _arg;
    return *this;
  }
  Type & set__frame(
    const uint64_t & _arg)
  {
    this->frame = _arg;
    return *this;
  }
  Type & set__vehicle_status(
    const morai_msgs::msg::EgoVehicleStatus_<ContainerAllocator> & _arg)
  {
    this->vehicle_status = _arg;
    return *this;
  }
  Type & set__time(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::WaitForTickResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::WaitForTickResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::WaitForTickResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::WaitForTickResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::WaitForTickResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::WaitForTickResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::WaitForTickResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::WaitForTickResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::WaitForTickResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::WaitForTickResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__WaitForTickResponse
    std::shared_ptr<morai_msgs::msg::WaitForTickResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__WaitForTickResponse
    std::shared_ptr<morai_msgs::msg::WaitForTickResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaitForTickResponse_ & other) const
  {
    if (this->tick_status != other.tick_status) {
      return false;
    }
    if (this->pause_status != other.pause_status) {
      return false;
    }
    if (this->frame != other.frame) {
      return false;
    }
    if (this->vehicle_status != other.vehicle_status) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaitForTickResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaitForTickResponse_

// alias to use template instance with default allocator
using WaitForTickResponse =
  morai_msgs::msg::WaitForTickResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__WAIT_FOR_TICK_RESPONSE__STRUCT_HPP_
