// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/MoveItErrorCodes.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOVE_IT_ERROR_CODES__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__MOVE_IT_ERROR_CODES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/move_it_error_codes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_MoveItErrorCodes_source
{
public:
  explicit Init_MoveItErrorCodes_source(::moveit_msgs::msg::MoveItErrorCodes & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::MoveItErrorCodes source(::moveit_msgs::msg::MoveItErrorCodes::_source_type arg)
  {
    msg_.source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::MoveItErrorCodes msg_;
};

class Init_MoveItErrorCodes_message
{
public:
  explicit Init_MoveItErrorCodes_message(::moveit_msgs::msg::MoveItErrorCodes & msg)
  : msg_(msg)
  {}
  Init_MoveItErrorCodes_source message(::moveit_msgs::msg::MoveItErrorCodes::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_MoveItErrorCodes_source(msg_);
  }

private:
  ::moveit_msgs::msg::MoveItErrorCodes msg_;
};

class Init_MoveItErrorCodes_val
{
public:
  Init_MoveItErrorCodes_val()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveItErrorCodes_message val(::moveit_msgs::msg::MoveItErrorCodes::_val_type arg)
  {
    msg_.val = std::move(arg);
    return Init_MoveItErrorCodes_message(msg_);
  }

private:
  ::moveit_msgs::msg::MoveItErrorCodes msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::MoveItErrorCodes>()
{
  return moveit_msgs::msg::builder::Init_MoveItErrorCodes_val();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOVE_IT_ERROR_CODES__BUILDER_HPP_
