// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:srv/ServoCommandType.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__SERVO_COMMAND_TYPE__BUILDER_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__SERVO_COMMAND_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/srv/detail/servo_command_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_ServoCommandType_Request_command_type
{
public:
  Init_ServoCommandType_Request_command_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::srv::ServoCommandType_Request command_type(::moveit_msgs::srv::ServoCommandType_Request::_command_type_type arg)
  {
    msg_.command_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::ServoCommandType_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::ServoCommandType_Request>()
{
  return moveit_msgs::srv::builder::Init_ServoCommandType_Request_command_type();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_ServoCommandType_Response_success
{
public:
  Init_ServoCommandType_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::srv::ServoCommandType_Response success(::moveit_msgs::srv::ServoCommandType_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::ServoCommandType_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::ServoCommandType_Response>()
{
  return moveit_msgs::srv::builder::Init_ServoCommandType_Response_success();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__SERVO_COMMAND_TYPE__BUILDER_HPP_
