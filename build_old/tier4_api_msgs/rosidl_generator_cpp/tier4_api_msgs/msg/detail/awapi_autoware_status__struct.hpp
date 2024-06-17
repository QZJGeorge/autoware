// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_api_msgs:msg/AwapiAutowareStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__AWAPI_AUTOWARE_STATUS__STRUCT_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__AWAPI_AUTOWARE_STATUS__STRUCT_HPP_

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
// Member 'hazard_status'
#include "tier4_system_msgs/msg/detail/hazard_status_stamped__struct.hpp"
// Member 'stop_reason'
#include "tier4_planning_msgs/msg/detail/stop_reason_array__struct.hpp"
// Member 'diagnostics'
// Member 'error_diagnostics'
#include "diagnostic_msgs/msg/detail/diagnostic_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_api_msgs__msg__AwapiAutowareStatus __attribute__((deprecated))
#else
# define DEPRECATED__tier4_api_msgs__msg__AwapiAutowareStatus __declspec(deprecated)
#endif

namespace tier4_api_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AwapiAutowareStatus_
{
  using Type = AwapiAutowareStatus_<ContainerAllocator>;

  explicit AwapiAutowareStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    hazard_status(_init),
    stop_reason(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->autoware_state = "";
      this->control_mode = 0l;
      this->gate_mode = 0l;
      this->emergency_stopped = false;
      this->current_max_velocity = 0.0f;
      this->autonomous_overridden = false;
      this->arrived_goal = false;
    }
  }

  explicit AwapiAutowareStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    autoware_state(_alloc),
    hazard_status(_alloc, _init),
    stop_reason(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->autoware_state = "";
      this->control_mode = 0l;
      this->gate_mode = 0l;
      this->emergency_stopped = false;
      this->current_max_velocity = 0.0f;
      this->autonomous_overridden = false;
      this->arrived_goal = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _autoware_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _autoware_state_type autoware_state;
  using _control_mode_type =
    int32_t;
  _control_mode_type control_mode;
  using _gate_mode_type =
    int32_t;
  _gate_mode_type gate_mode;
  using _emergency_stopped_type =
    bool;
  _emergency_stopped_type emergency_stopped;
  using _current_max_velocity_type =
    float;
  _current_max_velocity_type current_max_velocity;
  using _hazard_status_type =
    tier4_system_msgs::msg::HazardStatusStamped_<ContainerAllocator>;
  _hazard_status_type hazard_status;
  using _stop_reason_type =
    tier4_planning_msgs::msg::StopReasonArray_<ContainerAllocator>;
  _stop_reason_type stop_reason;
  using _diagnostics_type =
    std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>>;
  _diagnostics_type diagnostics;
  using _error_diagnostics_type =
    std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>>;
  _error_diagnostics_type error_diagnostics;
  using _autonomous_overridden_type =
    bool;
  _autonomous_overridden_type autonomous_overridden;
  using _arrived_goal_type =
    bool;
  _arrived_goal_type arrived_goal;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__autoware_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->autoware_state = _arg;
    return *this;
  }
  Type & set__control_mode(
    const int32_t & _arg)
  {
    this->control_mode = _arg;
    return *this;
  }
  Type & set__gate_mode(
    const int32_t & _arg)
  {
    this->gate_mode = _arg;
    return *this;
  }
  Type & set__emergency_stopped(
    const bool & _arg)
  {
    this->emergency_stopped = _arg;
    return *this;
  }
  Type & set__current_max_velocity(
    const float & _arg)
  {
    this->current_max_velocity = _arg;
    return *this;
  }
  Type & set__hazard_status(
    const tier4_system_msgs::msg::HazardStatusStamped_<ContainerAllocator> & _arg)
  {
    this->hazard_status = _arg;
    return *this;
  }
  Type & set__stop_reason(
    const tier4_planning_msgs::msg::StopReasonArray_<ContainerAllocator> & _arg)
  {
    this->stop_reason = _arg;
    return *this;
  }
  Type & set__diagnostics(
    const std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>> & _arg)
  {
    this->diagnostics = _arg;
    return *this;
  }
  Type & set__error_diagnostics(
    const std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>> & _arg)
  {
    this->error_diagnostics = _arg;
    return *this;
  }
  Type & set__autonomous_overridden(
    const bool & _arg)
  {
    this->autonomous_overridden = _arg;
    return *this;
  }
  Type & set__arrived_goal(
    const bool & _arg)
  {
    this->arrived_goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_api_msgs::msg::AwapiAutowareStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_api_msgs::msg::AwapiAutowareStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_api_msgs::msg::AwapiAutowareStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_api_msgs::msg::AwapiAutowareStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_api_msgs::msg::AwapiAutowareStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_api_msgs::msg::AwapiAutowareStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_api_msgs::msg::AwapiAutowareStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_api_msgs::msg::AwapiAutowareStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_api_msgs::msg::AwapiAutowareStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_api_msgs::msg::AwapiAutowareStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_api_msgs__msg__AwapiAutowareStatus
    std::shared_ptr<tier4_api_msgs::msg::AwapiAutowareStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_api_msgs__msg__AwapiAutowareStatus
    std::shared_ptr<tier4_api_msgs::msg::AwapiAutowareStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AwapiAutowareStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->autoware_state != other.autoware_state) {
      return false;
    }
    if (this->control_mode != other.control_mode) {
      return false;
    }
    if (this->gate_mode != other.gate_mode) {
      return false;
    }
    if (this->emergency_stopped != other.emergency_stopped) {
      return false;
    }
    if (this->current_max_velocity != other.current_max_velocity) {
      return false;
    }
    if (this->hazard_status != other.hazard_status) {
      return false;
    }
    if (this->stop_reason != other.stop_reason) {
      return false;
    }
    if (this->diagnostics != other.diagnostics) {
      return false;
    }
    if (this->error_diagnostics != other.error_diagnostics) {
      return false;
    }
    if (this->autonomous_overridden != other.autonomous_overridden) {
      return false;
    }
    if (this->arrived_goal != other.arrived_goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const AwapiAutowareStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AwapiAutowareStatus_

// alias to use template instance with default allocator
using AwapiAutowareStatus =
  tier4_api_msgs::msg::AwapiAutowareStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_api_msgs

#endif  // TIER4_API_MSGS__MSG__DETAIL__AWAPI_AUTOWARE_STATUS__STRUCT_HPP_
