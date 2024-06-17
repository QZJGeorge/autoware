// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_simulation_msgs:msg/SimulationEvents.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SIMULATION_MSGS__MSG__DETAIL__SIMULATION_EVENTS__STRUCT_HPP_
#define TIER4_SIMULATION_MSGS__MSG__DETAIL__SIMULATION_EVENTS__STRUCT_HPP_

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
// Member 'fault_injection_events'
#include "tier4_simulation_msgs/msg/detail/fault_injection_event__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_simulation_msgs__msg__SimulationEvents __attribute__((deprecated))
#else
# define DEPRECATED__tier4_simulation_msgs__msg__SimulationEvents __declspec(deprecated)
#endif

namespace tier4_simulation_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SimulationEvents_
{
  using Type = SimulationEvents_<ContainerAllocator>;

  explicit SimulationEvents_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    (void)_init;
  }

  explicit SimulationEvents_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _fault_injection_events_type =
    std::vector<tier4_simulation_msgs::msg::FaultInjectionEvent_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_simulation_msgs::msg::FaultInjectionEvent_<ContainerAllocator>>>;
  _fault_injection_events_type fault_injection_events;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__fault_injection_events(
    const std::vector<tier4_simulation_msgs::msg::FaultInjectionEvent_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_simulation_msgs::msg::FaultInjectionEvent_<ContainerAllocator>>> & _arg)
  {
    this->fault_injection_events = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_simulation_msgs::msg::SimulationEvents_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_simulation_msgs::msg::SimulationEvents_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_simulation_msgs::msg::SimulationEvents_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_simulation_msgs::msg::SimulationEvents_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_simulation_msgs::msg::SimulationEvents_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_simulation_msgs::msg::SimulationEvents_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_simulation_msgs::msg::SimulationEvents_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_simulation_msgs::msg::SimulationEvents_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_simulation_msgs::msg::SimulationEvents_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_simulation_msgs::msg::SimulationEvents_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_simulation_msgs__msg__SimulationEvents
    std::shared_ptr<tier4_simulation_msgs::msg::SimulationEvents_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_simulation_msgs__msg__SimulationEvents
    std::shared_ptr<tier4_simulation_msgs::msg::SimulationEvents_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimulationEvents_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->fault_injection_events != other.fault_injection_events) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimulationEvents_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimulationEvents_

// alias to use template instance with default allocator
using SimulationEvents =
  tier4_simulation_msgs::msg::SimulationEvents_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_simulation_msgs

#endif  // TIER4_SIMULATION_MSGS__MSG__DETAIL__SIMULATION_EVENTS__STRUCT_HPP_
