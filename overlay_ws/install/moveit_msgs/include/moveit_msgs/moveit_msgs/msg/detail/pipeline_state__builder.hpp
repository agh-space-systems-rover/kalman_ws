// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/PipelineState.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PIPELINE_STATE__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__PIPELINE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/pipeline_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_PipelineState_pipeline_stage
{
public:
  explicit Init_PipelineState_pipeline_stage(::moveit_msgs::msg::PipelineState & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::PipelineState pipeline_stage(::moveit_msgs::msg::PipelineState::_pipeline_stage_type arg)
  {
    msg_.pipeline_stage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::PipelineState msg_;
};

class Init_PipelineState_response
{
public:
  explicit Init_PipelineState_response(::moveit_msgs::msg::PipelineState & msg)
  : msg_(msg)
  {}
  Init_PipelineState_pipeline_stage response(::moveit_msgs::msg::PipelineState::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_PipelineState_pipeline_stage(msg_);
  }

private:
  ::moveit_msgs::msg::PipelineState msg_;
};

class Init_PipelineState_request
{
public:
  Init_PipelineState_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PipelineState_response request(::moveit_msgs::msg::PipelineState::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PipelineState_response(msg_);
  }

private:
  ::moveit_msgs::msg::PipelineState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::PipelineState>()
{
  return moveit_msgs::msg::builder::Init_PipelineState_request();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__PIPELINE_STATE__BUILDER_HPP_
