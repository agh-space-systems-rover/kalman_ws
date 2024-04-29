// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosbridge_msgs:msg/ConnectedClient.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENT__STRUCT_HPP_
#define ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'connection_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rosbridge_msgs__msg__ConnectedClient __attribute__((deprecated))
#else
# define DEPRECATED__rosbridge_msgs__msg__ConnectedClient __declspec(deprecated)
#endif

namespace rosbridge_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConnectedClient_
{
  using Type = ConnectedClient_<ContainerAllocator>;

  explicit ConnectedClient_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : connection_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ip_address = "";
    }
  }

  explicit ConnectedClient_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ip_address(_alloc),
    connection_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ip_address = "";
    }
  }

  // field types and members
  using _ip_address_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ip_address_type ip_address;
  using _connection_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _connection_time_type connection_time;

  // setters for named parameter idiom
  Type & set__ip_address(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ip_address = _arg;
    return *this;
  }
  Type & set__connection_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->connection_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosbridge_msgs::msg::ConnectedClient_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosbridge_msgs::msg::ConnectedClient_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosbridge_msgs::msg::ConnectedClient_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosbridge_msgs::msg::ConnectedClient_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosbridge_msgs::msg::ConnectedClient_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosbridge_msgs::msg::ConnectedClient_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosbridge_msgs::msg::ConnectedClient_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosbridge_msgs::msg::ConnectedClient_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosbridge_msgs::msg::ConnectedClient_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosbridge_msgs::msg::ConnectedClient_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosbridge_msgs__msg__ConnectedClient
    std::shared_ptr<rosbridge_msgs::msg::ConnectedClient_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosbridge_msgs__msg__ConnectedClient
    std::shared_ptr<rosbridge_msgs::msg::ConnectedClient_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConnectedClient_ & other) const
  {
    if (this->ip_address != other.ip_address) {
      return false;
    }
    if (this->connection_time != other.connection_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConnectedClient_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConnectedClient_

// alias to use template instance with default allocator
using ConnectedClient =
  rosbridge_msgs::msg::ConnectedClient_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rosbridge_msgs

#endif  // ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENT__STRUCT_HPP_
