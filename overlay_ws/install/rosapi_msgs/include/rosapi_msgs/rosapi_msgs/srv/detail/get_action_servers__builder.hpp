// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi_msgs:srv/GetActionServers.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__GET_ACTION_SERVERS__BUILDER_HPP_
#define ROSAPI_MSGS__SRV__DETAIL__GET_ACTION_SERVERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosapi_msgs/srv/detail/get_action_servers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosapi_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::GetActionServers_Request>()
{
  return ::rosapi_msgs::srv::GetActionServers_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rosapi_msgs


namespace rosapi_msgs
{

namespace srv
{

namespace builder
{

class Init_GetActionServers_Response_action_servers
{
public:
  Init_GetActionServers_Response_action_servers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi_msgs::srv::GetActionServers_Response action_servers(::rosapi_msgs::srv::GetActionServers_Response::_action_servers_type arg)
  {
    msg_.action_servers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi_msgs::srv::GetActionServers_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::GetActionServers_Response>()
{
  return rosapi_msgs::srv::builder::Init_GetActionServers_Response_action_servers();
}

}  // namespace rosapi_msgs

#endif  // ROSAPI_MSGS__SRV__DETAIL__GET_ACTION_SERVERS__BUILDER_HPP_
