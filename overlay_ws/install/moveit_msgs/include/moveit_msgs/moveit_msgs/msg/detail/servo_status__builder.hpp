// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/ServoStatus.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__SERVO_STATUS__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__SERVO_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/servo_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_ServoStatus_message
{
public:
  explicit Init_ServoStatus_message(::moveit_msgs::msg::ServoStatus & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::ServoStatus message(::moveit_msgs::msg::ServoStatus::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::ServoStatus msg_;
};

class Init_ServoStatus_code
{
public:
  Init_ServoStatus_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoStatus_message code(::moveit_msgs::msg::ServoStatus::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_ServoStatus_message(msg_);
  }

private:
  ::moveit_msgs::msg::ServoStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::ServoStatus>()
{
  return moveit_msgs::msg::builder::Init_ServoStatus_code();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__SERVO_STATUS__BUILDER_HPP_
