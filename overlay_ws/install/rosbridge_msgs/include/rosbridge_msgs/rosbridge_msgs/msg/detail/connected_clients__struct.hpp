// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosbridge_msgs:msg/ConnectedClients.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENTS__STRUCT_HPP_
#define ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'clients'
#include "rosbridge_msgs/msg/detail/connected_client__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rosbridge_msgs__msg__ConnectedClients __attribute__((deprecated))
#else
# define DEPRECATED__rosbridge_msgs__msg__ConnectedClients __declspec(deprecated)
#endif

namespace rosbridge_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConnectedClients_
{
  using Type = ConnectedClients_<ContainerAllocator>;

  explicit ConnectedClients_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ConnectedClients_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _clients_type =
    std::vector<rosbridge_msgs::msg::ConnectedClient_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rosbridge_msgs::msg::ConnectedClient_<ContainerAllocator>>>;
  _clients_type clients;

  // setters for named parameter idiom
  Type & set__clients(
    const std::vector<rosbridge_msgs::msg::ConnectedClient_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rosbridge_msgs::msg::ConnectedClient_<ContainerAllocator>>> & _arg)
  {
    this->clients = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosbridge_msgs::msg::ConnectedClients_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosbridge_msgs::msg::ConnectedClients_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosbridge_msgs::msg::ConnectedClients_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosbridge_msgs::msg::ConnectedClients_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosbridge_msgs::msg::ConnectedClients_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosbridge_msgs::msg::ConnectedClients_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosbridge_msgs::msg::ConnectedClients_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosbridge_msgs::msg::ConnectedClients_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosbridge_msgs::msg::ConnectedClients_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosbridge_msgs::msg::ConnectedClients_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosbridge_msgs__msg__ConnectedClients
    std::shared_ptr<rosbridge_msgs::msg::ConnectedClients_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosbridge_msgs__msg__ConnectedClients
    std::shared_ptr<rosbridge_msgs::msg::ConnectedClients_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConnectedClients_ & other) const
  {
    if (this->clients != other.clients) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConnectedClients_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConnectedClients_

// alias to use template instance with default allocator
using ConnectedClients =
  rosbridge_msgs::msg::ConnectedClients_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rosbridge_msgs

#endif  // ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENTS__STRUCT_HPP_
