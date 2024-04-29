// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosbridge_test_msgs:msg/TestHeaderArray.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_HEADER_ARRAY__STRUCT_HPP_
#define ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_HEADER_ARRAY__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__rosbridge_test_msgs__msg__TestHeaderArray __attribute__((deprecated))
#else
# define DEPRECATED__rosbridge_test_msgs__msg__TestHeaderArray __declspec(deprecated)
#endif

namespace rosbridge_test_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TestHeaderArray_
{
  using Type = TestHeaderArray_<ContainerAllocator>;

  explicit TestHeaderArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TestHeaderArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _header_type =
    std::vector<std_msgs::msg::Header_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std_msgs::msg::Header_<ContainerAllocator>>>;
  _header_type header;

  // setters for named parameter idiom
  Type & set__header(
    const std::vector<std_msgs::msg::Header_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std_msgs::msg::Header_<ContainerAllocator>>> & _arg)
  {
    this->header = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosbridge_test_msgs::msg::TestHeaderArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosbridge_test_msgs::msg::TestHeaderArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosbridge_test_msgs::msg::TestHeaderArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosbridge_test_msgs::msg::TestHeaderArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::msg::TestHeaderArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::msg::TestHeaderArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::msg::TestHeaderArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::msg::TestHeaderArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosbridge_test_msgs::msg::TestHeaderArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosbridge_test_msgs::msg::TestHeaderArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosbridge_test_msgs__msg__TestHeaderArray
    std::shared_ptr<rosbridge_test_msgs::msg::TestHeaderArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosbridge_test_msgs__msg__TestHeaderArray
    std::shared_ptr<rosbridge_test_msgs::msg::TestHeaderArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestHeaderArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestHeaderArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestHeaderArray_

// alias to use template instance with default allocator
using TestHeaderArray =
  rosbridge_test_msgs::msg::TestHeaderArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rosbridge_test_msgs

#endif  // ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_HEADER_ARRAY__STRUCT_HPP_
