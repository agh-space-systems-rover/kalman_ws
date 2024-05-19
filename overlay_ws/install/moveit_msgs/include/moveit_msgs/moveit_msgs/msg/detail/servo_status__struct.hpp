// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/ServoStatus.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__SERVO_STATUS__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__SERVO_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__ServoStatus __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__ServoStatus __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServoStatus_
{
  using Type = ServoStatus_<ContainerAllocator>;

  explicit ServoStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0;
      this->message = "";
    }
  }

  explicit ServoStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0;
      this->message = "";
    }
  }

  // field types and members
  using _code_type =
    int8_t;
  _code_type code;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__code(
    const int8_t & _arg)
  {
    this->code = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t INVALID =
    -1;
  static constexpr int8_t NO_WARNING =
    0;
  static constexpr int8_t DECELERATE_FOR_APPROACHING_SINGULARITY =
    1;
  static constexpr int8_t HALT_FOR_SINGULARITY =
    2;
  static constexpr int8_t DECELERATE_FOR_LEAVING_SINGULARITY =
    3;
  static constexpr int8_t DECELERATE_FOR_COLLISION =
    4;
  static constexpr int8_t HALT_FOR_COLLISION =
    5;
  static constexpr int8_t JOINT_BOUND =
    6;

  // pointer types
  using RawPtr =
    moveit_msgs::msg::ServoStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::ServoStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::ServoStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::ServoStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::ServoStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::ServoStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::ServoStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::ServoStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::ServoStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::ServoStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__ServoStatus
    std::shared_ptr<moveit_msgs::msg::ServoStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__ServoStatus
    std::shared_ptr<moveit_msgs::msg::ServoStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoStatus_ & other) const
  {
    if (this->code != other.code) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoStatus_

// alias to use template instance with default allocator
using ServoStatus =
  moveit_msgs::msg::ServoStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ServoStatus_<ContainerAllocator>::INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ServoStatus_<ContainerAllocator>::NO_WARNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ServoStatus_<ContainerAllocator>::DECELERATE_FOR_APPROACHING_SINGULARITY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ServoStatus_<ContainerAllocator>::HALT_FOR_SINGULARITY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ServoStatus_<ContainerAllocator>::DECELERATE_FOR_LEAVING_SINGULARITY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ServoStatus_<ContainerAllocator>::DECELERATE_FOR_COLLISION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ServoStatus_<ContainerAllocator>::HALT_FOR_COLLISION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ServoStatus_<ContainerAllocator>::JOINT_BOUND;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__SERVO_STATUS__STRUCT_HPP_
