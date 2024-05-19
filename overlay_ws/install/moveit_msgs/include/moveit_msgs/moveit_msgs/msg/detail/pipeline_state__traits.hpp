// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/PipelineState.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PIPELINE_STATE__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__PIPELINE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/msg/detail/pipeline_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'request'
#include "moveit_msgs/msg/detail/motion_plan_request__traits.hpp"
// Member 'response'
#include "moveit_msgs/msg/detail/motion_plan_response__traits.hpp"

namespace moveit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PipelineState & msg,
  std::ostream & out)
{
  out << "{";
  // member: request
  {
    out << "request: ";
    to_flow_style_yaml(msg.request, out);
    out << ", ";
  }

  // member: response
  {
    out << "response: ";
    to_flow_style_yaml(msg.response, out);
    out << ", ";
  }

  // member: pipeline_stage
  {
    out << "pipeline_stage: ";
    rosidl_generator_traits::value_to_yaml(msg.pipeline_stage, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PipelineState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request:\n";
    to_block_style_yaml(msg.request, out, indentation + 2);
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response:\n";
    to_block_style_yaml(msg.response, out, indentation + 2);
  }

  // member: pipeline_stage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pipeline_stage: ";
    rosidl_generator_traits::value_to_yaml(msg.pipeline_stage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PipelineState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_msgs::msg::PipelineState & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::msg::PipelineState & msg)
{
  return moveit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::msg::PipelineState>()
{
  return "moveit_msgs::msg::PipelineState";
}

template<>
inline const char * name<moveit_msgs::msg::PipelineState>()
{
  return "moveit_msgs/msg/PipelineState";
}

template<>
struct has_fixed_size<moveit_msgs::msg::PipelineState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::PipelineState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::msg::PipelineState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__DETAIL__PIPELINE_STATE__TRAITS_HPP_
