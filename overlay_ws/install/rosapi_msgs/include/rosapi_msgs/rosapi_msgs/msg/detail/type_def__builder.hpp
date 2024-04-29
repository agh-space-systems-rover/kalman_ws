// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi_msgs:msg/TypeDef.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__MSG__DETAIL__TYPE_DEF__BUILDER_HPP_
#define ROSAPI_MSGS__MSG__DETAIL__TYPE_DEF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosapi_msgs/msg/detail/type_def__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosapi_msgs
{

namespace msg
{

namespace builder
{

class Init_TypeDef_constvalues
{
public:
  explicit Init_TypeDef_constvalues(::rosapi_msgs::msg::TypeDef & msg)
  : msg_(msg)
  {}
  ::rosapi_msgs::msg::TypeDef constvalues(::rosapi_msgs::msg::TypeDef::_constvalues_type arg)
  {
    msg_.constvalues = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi_msgs::msg::TypeDef msg_;
};

class Init_TypeDef_constnames
{
public:
  explicit Init_TypeDef_constnames(::rosapi_msgs::msg::TypeDef & msg)
  : msg_(msg)
  {}
  Init_TypeDef_constvalues constnames(::rosapi_msgs::msg::TypeDef::_constnames_type arg)
  {
    msg_.constnames = std::move(arg);
    return Init_TypeDef_constvalues(msg_);
  }

private:
  ::rosapi_msgs::msg::TypeDef msg_;
};

class Init_TypeDef_examples
{
public:
  explicit Init_TypeDef_examples(::rosapi_msgs::msg::TypeDef & msg)
  : msg_(msg)
  {}
  Init_TypeDef_constnames examples(::rosapi_msgs::msg::TypeDef::_examples_type arg)
  {
    msg_.examples = std::move(arg);
    return Init_TypeDef_constnames(msg_);
  }

private:
  ::rosapi_msgs::msg::TypeDef msg_;
};

class Init_TypeDef_fieldarraylen
{
public:
  explicit Init_TypeDef_fieldarraylen(::rosapi_msgs::msg::TypeDef & msg)
  : msg_(msg)
  {}
  Init_TypeDef_examples fieldarraylen(::rosapi_msgs::msg::TypeDef::_fieldarraylen_type arg)
  {
    msg_.fieldarraylen = std::move(arg);
    return Init_TypeDef_examples(msg_);
  }

private:
  ::rosapi_msgs::msg::TypeDef msg_;
};

class Init_TypeDef_fieldtypes
{
public:
  explicit Init_TypeDef_fieldtypes(::rosapi_msgs::msg::TypeDef & msg)
  : msg_(msg)
  {}
  Init_TypeDef_fieldarraylen fieldtypes(::rosapi_msgs::msg::TypeDef::_fieldtypes_type arg)
  {
    msg_.fieldtypes = std::move(arg);
    return Init_TypeDef_fieldarraylen(msg_);
  }

private:
  ::rosapi_msgs::msg::TypeDef msg_;
};

class Init_TypeDef_fieldnames
{
public:
  explicit Init_TypeDef_fieldnames(::rosapi_msgs::msg::TypeDef & msg)
  : msg_(msg)
  {}
  Init_TypeDef_fieldtypes fieldnames(::rosapi_msgs::msg::TypeDef::_fieldnames_type arg)
  {
    msg_.fieldnames = std::move(arg);
    return Init_TypeDef_fieldtypes(msg_);
  }

private:
  ::rosapi_msgs::msg::TypeDef msg_;
};

class Init_TypeDef_type
{
public:
  Init_TypeDef_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TypeDef_fieldnames type(::rosapi_msgs::msg::TypeDef::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_TypeDef_fieldnames(msg_);
  }

private:
  ::rosapi_msgs::msg::TypeDef msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::msg::TypeDef>()
{
  return rosapi_msgs::msg::builder::Init_TypeDef_type();
}

}  // namespace rosapi_msgs

#endif  // ROSAPI_MSGS__MSG__DETAIL__TYPE_DEF__BUILDER_HPP_
