// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_system_msgs:msg/HazardStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS__STRUCT_HPP_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'diagnostics_nf'
// Member 'diagnostics_sf'
// Member 'diagnostics_lf'
// Member 'diagnostics_spf'
#include "diagnostic_msgs/msg/detail/diagnostic_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_system_msgs__msg__HazardStatus __attribute__((deprecated))
#else
# define DEPRECATED__tier4_system_msgs__msg__HazardStatus __declspec(deprecated)
#endif

namespace tier4_system_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HazardStatus_
{
  using Type = HazardStatus_<ContainerAllocator>;

  explicit HazardStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->level = 0l;
      this->emergency = false;
      this->emergency_holding = false;
    }
  }

  explicit HazardStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->level = 0l;
      this->emergency = false;
      this->emergency_holding = false;
    }
  }

  // field types and members
  using _level_type =
    int32_t;
  _level_type level;
  using _emergency_type =
    bool;
  _emergency_type emergency;
  using _emergency_holding_type =
    bool;
  _emergency_holding_type emergency_holding;
  using _diagnostics_nf_type =
    std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>>;
  _diagnostics_nf_type diagnostics_nf;
  using _diagnostics_sf_type =
    std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>>;
  _diagnostics_sf_type diagnostics_sf;
  using _diagnostics_lf_type =
    std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>>;
  _diagnostics_lf_type diagnostics_lf;
  using _diagnostics_spf_type =
    std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>>;
  _diagnostics_spf_type diagnostics_spf;

  // setters for named parameter idiom
  Type & set__level(
    const int32_t & _arg)
  {
    this->level = _arg;
    return *this;
  }
  Type & set__emergency(
    const bool & _arg)
  {
    this->emergency = _arg;
    return *this;
  }
  Type & set__emergency_holding(
    const bool & _arg)
  {
    this->emergency_holding = _arg;
    return *this;
  }
  Type & set__diagnostics_nf(
    const std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>> & _arg)
  {
    this->diagnostics_nf = _arg;
    return *this;
  }
  Type & set__diagnostics_sf(
    const std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>> & _arg)
  {
    this->diagnostics_sf = _arg;
    return *this;
  }
  Type & set__diagnostics_lf(
    const std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>> & _arg)
  {
    this->diagnostics_lf = _arg;
    return *this;
  }
  Type & set__diagnostics_spf(
    const std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>> & _arg)
  {
    this->diagnostics_spf = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t NO_FAULT =
    0;
  static constexpr int32_t SAFE_FAULT =
    1;
  static constexpr int32_t LATENT_FAULT =
    2;
  static constexpr int32_t SINGLE_POINT_FAULT =
    3;

  // pointer types
  using RawPtr =
    tier4_system_msgs::msg::HazardStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_system_msgs::msg::HazardStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_system_msgs::msg::HazardStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_system_msgs::msg::HazardStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_system_msgs::msg::HazardStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_system_msgs::msg::HazardStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_system_msgs::msg::HazardStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_system_msgs::msg::HazardStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_system_msgs::msg::HazardStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_system_msgs::msg::HazardStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_system_msgs__msg__HazardStatus
    std::shared_ptr<tier4_system_msgs::msg::HazardStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_system_msgs__msg__HazardStatus
    std::shared_ptr<tier4_system_msgs::msg::HazardStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HazardStatus_ & other) const
  {
    if (this->level != other.level) {
      return false;
    }
    if (this->emergency != other.emergency) {
      return false;
    }
    if (this->emergency_holding != other.emergency_holding) {
      return false;
    }
    if (this->diagnostics_nf != other.diagnostics_nf) {
      return false;
    }
    if (this->diagnostics_sf != other.diagnostics_sf) {
      return false;
    }
    if (this->diagnostics_lf != other.diagnostics_lf) {
      return false;
    }
    if (this->diagnostics_spf != other.diagnostics_spf) {
      return false;
    }
    return true;
  }
  bool operator!=(const HazardStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HazardStatus_

// alias to use template instance with default allocator
using HazardStatus =
  tier4_system_msgs::msg::HazardStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t HazardStatus_<ContainerAllocator>::NO_FAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t HazardStatus_<ContainerAllocator>::SAFE_FAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t HazardStatus_<ContainerAllocator>::LATENT_FAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t HazardStatus_<ContainerAllocator>::SINGLE_POINT_FAULT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace tier4_system_msgs

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS__STRUCT_HPP_
