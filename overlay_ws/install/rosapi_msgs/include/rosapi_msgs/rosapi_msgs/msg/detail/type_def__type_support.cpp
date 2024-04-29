// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rosapi_msgs:msg/TypeDef.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rosapi_msgs/msg/detail/type_def__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rosapi_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TypeDef_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rosapi_msgs::msg::TypeDef(_init);
}

void TypeDef_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rosapi_msgs::msg::TypeDef *>(message_memory);
  typed_message->~TypeDef();
}

size_t size_function__TypeDef__fieldnames(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TypeDef__fieldnames(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__TypeDef__fieldnames(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__TypeDef__fieldnames(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__TypeDef__fieldnames(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__TypeDef__fieldnames(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__TypeDef__fieldnames(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__TypeDef__fieldnames(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TypeDef__fieldtypes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TypeDef__fieldtypes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__TypeDef__fieldtypes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__TypeDef__fieldtypes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__TypeDef__fieldtypes(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__TypeDef__fieldtypes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__TypeDef__fieldtypes(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__TypeDef__fieldtypes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TypeDef__fieldarraylen(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TypeDef__fieldarraylen(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__TypeDef__fieldarraylen(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__TypeDef__fieldarraylen(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__TypeDef__fieldarraylen(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__TypeDef__fieldarraylen(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__TypeDef__fieldarraylen(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__TypeDef__fieldarraylen(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TypeDef__examples(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TypeDef__examples(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__TypeDef__examples(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__TypeDef__examples(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__TypeDef__examples(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__TypeDef__examples(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__TypeDef__examples(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__TypeDef__examples(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TypeDef__constnames(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TypeDef__constnames(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__TypeDef__constnames(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__TypeDef__constnames(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__TypeDef__constnames(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__TypeDef__constnames(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__TypeDef__constnames(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__TypeDef__constnames(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TypeDef__constvalues(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TypeDef__constvalues(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__TypeDef__constvalues(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__TypeDef__constvalues(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__TypeDef__constvalues(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__TypeDef__constvalues(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__TypeDef__constvalues(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__TypeDef__constvalues(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TypeDef_message_member_array[7] = {
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi_msgs::msg::TypeDef, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "fieldnames",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi_msgs::msg::TypeDef, fieldnames),  // bytes offset in struct
    nullptr,  // default value
    size_function__TypeDef__fieldnames,  // size() function pointer
    get_const_function__TypeDef__fieldnames,  // get_const(index) function pointer
    get_function__TypeDef__fieldnames,  // get(index) function pointer
    fetch_function__TypeDef__fieldnames,  // fetch(index, &value) function pointer
    assign_function__TypeDef__fieldnames,  // assign(index, value) function pointer
    resize_function__TypeDef__fieldnames  // resize(index) function pointer
  },
  {
    "fieldtypes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi_msgs::msg::TypeDef, fieldtypes),  // bytes offset in struct
    nullptr,  // default value
    size_function__TypeDef__fieldtypes,  // size() function pointer
    get_const_function__TypeDef__fieldtypes,  // get_const(index) function pointer
    get_function__TypeDef__fieldtypes,  // get(index) function pointer
    fetch_function__TypeDef__fieldtypes,  // fetch(index, &value) function pointer
    assign_function__TypeDef__fieldtypes,  // assign(index, value) function pointer
    resize_function__TypeDef__fieldtypes  // resize(index) function pointer
  },
  {
    "fieldarraylen",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi_msgs::msg::TypeDef, fieldarraylen),  // bytes offset in struct
    nullptr,  // default value
    size_function__TypeDef__fieldarraylen,  // size() function pointer
    get_const_function__TypeDef__fieldarraylen,  // get_const(index) function pointer
    get_function__TypeDef__fieldarraylen,  // get(index) function pointer
    fetch_function__TypeDef__fieldarraylen,  // fetch(index, &value) function pointer
    assign_function__TypeDef__fieldarraylen,  // assign(index, value) function pointer
    resize_function__TypeDef__fieldarraylen  // resize(index) function pointer
  },
  {
    "examples",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi_msgs::msg::TypeDef, examples),  // bytes offset in struct
    nullptr,  // default value
    size_function__TypeDef__examples,  // size() function pointer
    get_const_function__TypeDef__examples,  // get_const(index) function pointer
    get_function__TypeDef__examples,  // get(index) function pointer
    fetch_function__TypeDef__examples,  // fetch(index, &value) function pointer
    assign_function__TypeDef__examples,  // assign(index, value) function pointer
    resize_function__TypeDef__examples  // resize(index) function pointer
  },
  {
    "constnames",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi_msgs::msg::TypeDef, constnames),  // bytes offset in struct
    nullptr,  // default value
    size_function__TypeDef__constnames,  // size() function pointer
    get_const_function__TypeDef__constnames,  // get_const(index) function pointer
    get_function__TypeDef__constnames,  // get(index) function pointer
    fetch_function__TypeDef__constnames,  // fetch(index, &value) function pointer
    assign_function__TypeDef__constnames,  // assign(index, value) function pointer
    resize_function__TypeDef__constnames  // resize(index) function pointer
  },
  {
    "constvalues",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi_msgs::msg::TypeDef, constvalues),  // bytes offset in struct
    nullptr,  // default value
    size_function__TypeDef__constvalues,  // size() function pointer
    get_const_function__TypeDef__constvalues,  // get_const(index) function pointer
    get_function__TypeDef__constvalues,  // get(index) function pointer
    fetch_function__TypeDef__constvalues,  // fetch(index, &value) function pointer
    assign_function__TypeDef__constvalues,  // assign(index, value) function pointer
    resize_function__TypeDef__constvalues  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TypeDef_message_members = {
  "rosapi_msgs::msg",  // message namespace
  "TypeDef",  // message name
  7,  // number of fields
  sizeof(rosapi_msgs::msg::TypeDef),
  TypeDef_message_member_array,  // message members
  TypeDef_init_function,  // function to initialize message memory (memory has to be allocated)
  TypeDef_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TypeDef_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TypeDef_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rosapi_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosapi_msgs::msg::TypeDef>()
{
  return &::rosapi_msgs::msg::rosidl_typesupport_introspection_cpp::TypeDef_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosapi_msgs, msg, TypeDef)() {
  return &::rosapi_msgs::msg::rosidl_typesupport_introspection_cpp::TypeDef_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
