// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosapi_msgs:msg/TypeDef.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__MSG__DETAIL__TYPE_DEF__STRUCT_HPP_
#define ROSAPI_MSGS__MSG__DETAIL__TYPE_DEF__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rosapi_msgs__msg__TypeDef __attribute__((deprecated))
#else
# define DEPRECATED__rosapi_msgs__msg__TypeDef __declspec(deprecated)
#endif

namespace rosapi_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TypeDef_
{
  using Type = TypeDef_<ContainerAllocator>;

  explicit TypeDef_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
    }
  }

  explicit TypeDef_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
    }
  }

  // field types and members
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _fieldnames_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _fieldnames_type fieldnames;
  using _fieldtypes_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _fieldtypes_type fieldtypes;
  using _fieldarraylen_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _fieldarraylen_type fieldarraylen;
  using _examples_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _examples_type examples;
  using _constnames_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _constnames_type constnames;
  using _constvalues_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _constvalues_type constvalues;

  // setters for named parameter idiom
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__fieldnames(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->fieldnames = _arg;
    return *this;
  }
  Type & set__fieldtypes(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->fieldtypes = _arg;
    return *this;
  }
  Type & set__fieldarraylen(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->fieldarraylen = _arg;
    return *this;
  }
  Type & set__examples(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->examples = _arg;
    return *this;
  }
  Type & set__constnames(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->constnames = _arg;
    return *this;
  }
  Type & set__constvalues(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->constvalues = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosapi_msgs::msg::TypeDef_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosapi_msgs::msg::TypeDef_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosapi_msgs::msg::TypeDef_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosapi_msgs::msg::TypeDef_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosapi_msgs::msg::TypeDef_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosapi_msgs::msg::TypeDef_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosapi_msgs::msg::TypeDef_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosapi_msgs::msg::TypeDef_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosapi_msgs::msg::TypeDef_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosapi_msgs::msg::TypeDef_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosapi_msgs__msg__TypeDef
    std::shared_ptr<rosapi_msgs::msg::TypeDef_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosapi_msgs__msg__TypeDef
    std::shared_ptr<rosapi_msgs::msg::TypeDef_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TypeDef_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->fieldnames != other.fieldnames) {
      return false;
    }
    if (this->fieldtypes != other.fieldtypes) {
      return false;
    }
    if (this->fieldarraylen != other.fieldarraylen) {
      return false;
    }
    if (this->examples != other.examples) {
      return false;
    }
    if (this->constnames != other.constnames) {
      return false;
    }
    if (this->constvalues != other.constvalues) {
      return false;
    }
    return true;
  }
  bool operator!=(const TypeDef_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TypeDef_

// alias to use template instance with default allocator
using TypeDef =
  rosapi_msgs::msg::TypeDef_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rosapi_msgs

#endif  // ROSAPI_MSGS__MSG__DETAIL__TYPE_DEF__STRUCT_HPP_
