// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_external_api_msgs:msg/RosbagCopyStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_COPY_STATUS__STRUCT_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_COPY_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tier4_external_api_msgs__msg__RosbagCopyStatus __attribute__((deprecated))
#else
# define DEPRECATED__tier4_external_api_msgs__msg__RosbagCopyStatus __declspec(deprecated)
#endif

namespace tier4_external_api_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RosbagCopyStatus_
{
  using Type = RosbagCopyStatus_<ContainerAllocator>;

  explicit RosbagCopyStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->progress_percentage = 0;
      this->project_id = "";
      this->vehicle_id = "";
      this->date = "";
      this->message = "";
    }
  }

  explicit RosbagCopyStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : project_id(_alloc),
    vehicle_id(_alloc),
    date(_alloc),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->progress_percentage = 0;
      this->project_id = "";
      this->vehicle_id = "";
      this->date = "";
      this->message = "";
    }
  }

  // field types and members
  using _status_type =
    uint8_t;
  _status_type status;
  using _progress_percentage_type =
    uint8_t;
  _progress_percentage_type progress_percentage;
  using _project_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _project_id_type project_id;
  using _vehicle_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _vehicle_id_type vehicle_id;
  using _date_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _date_type date;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__progress_percentage(
    const uint8_t & _arg)
  {
    this->progress_percentage = _arg;
    return *this;
  }
  Type & set__project_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->project_id = _arg;
    return *this;
  }
  Type & set__vehicle_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->vehicle_id = _arg;
    return *this;
  }
  Type & set__date(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->date = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t NOT_COPIED =
    1u;
  static constexpr uint8_t IN_PROGRESS =
    2u;
  static constexpr uint8_t SUCCESS =
    3u;
  static constexpr uint8_t FAILED =
    4u;

  // pointer types
  using RawPtr =
    tier4_external_api_msgs::msg::RosbagCopyStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_external_api_msgs::msg::RosbagCopyStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_external_api_msgs::msg::RosbagCopyStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_external_api_msgs::msg::RosbagCopyStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::msg::RosbagCopyStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::msg::RosbagCopyStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::msg::RosbagCopyStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::msg::RosbagCopyStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_external_api_msgs::msg::RosbagCopyStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_external_api_msgs::msg::RosbagCopyStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_external_api_msgs__msg__RosbagCopyStatus
    std::shared_ptr<tier4_external_api_msgs::msg::RosbagCopyStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_external_api_msgs__msg__RosbagCopyStatus
    std::shared_ptr<tier4_external_api_msgs::msg::RosbagCopyStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosbagCopyStatus_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->progress_percentage != other.progress_percentage) {
      return false;
    }
    if (this->project_id != other.project_id) {
      return false;
    }
    if (this->vehicle_id != other.vehicle_id) {
      return false;
    }
    if (this->date != other.date) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosbagCopyStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosbagCopyStatus_

// alias to use template instance with default allocator
using RosbagCopyStatus =
  tier4_external_api_msgs::msg::RosbagCopyStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RosbagCopyStatus_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RosbagCopyStatus_<ContainerAllocator>::NOT_COPIED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RosbagCopyStatus_<ContainerAllocator>::IN_PROGRESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RosbagCopyStatus_<ContainerAllocator>::SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RosbagCopyStatus_<ContainerAllocator>::FAILED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_COPY_STATUS__STRUCT_HPP_
