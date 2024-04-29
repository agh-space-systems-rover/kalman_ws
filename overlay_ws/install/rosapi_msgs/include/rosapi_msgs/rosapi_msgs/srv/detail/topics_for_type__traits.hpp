// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosapi_msgs:srv/TopicsForType.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__TOPICS_FOR_TYPE__TRAITS_HPP_
#define ROSAPI_MSGS__SRV__DETAIL__TOPICS_FOR_TYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosapi_msgs/srv/detail/topics_for_type__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rosapi_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const TopicsForType_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TopicsForType_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TopicsForType_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rosapi_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rosapi_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rosapi_msgs::srv::TopicsForType_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosapi_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosapi_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rosapi_msgs::srv::TopicsForType_Request & msg)
{
  return rosapi_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rosapi_msgs::srv::TopicsForType_Request>()
{
  return "rosapi_msgs::srv::TopicsForType_Request";
}

template<>
inline const char * name<rosapi_msgs::srv::TopicsForType_Request>()
{
  return "rosapi_msgs/srv/TopicsForType_Request";
}

template<>
struct has_fixed_size<rosapi_msgs::srv::TopicsForType_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi_msgs::srv::TopicsForType_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi_msgs::srv::TopicsForType_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosapi_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const TopicsForType_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: topics
  {
    if (msg.topics.size() == 0) {
      out << "topics: []";
    } else {
      out << "topics: [";
      size_t pending_items = msg.topics.size();
      for (auto item : msg.topics) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TopicsForType_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: topics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.topics.size() == 0) {
      out << "topics: []\n";
    } else {
      out << "topics:\n";
      for (auto item : msg.topics) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TopicsForType_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rosapi_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rosapi_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rosapi_msgs::srv::TopicsForType_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosapi_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosapi_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rosapi_msgs::srv::TopicsForType_Response & msg)
{
  return rosapi_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rosapi_msgs::srv::TopicsForType_Response>()
{
  return "rosapi_msgs::srv::TopicsForType_Response";
}

template<>
inline const char * name<rosapi_msgs::srv::TopicsForType_Response>()
{
  return "rosapi_msgs/srv/TopicsForType_Response";
}

template<>
struct has_fixed_size<rosapi_msgs::srv::TopicsForType_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi_msgs::srv::TopicsForType_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi_msgs::srv::TopicsForType_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi_msgs::srv::TopicsForType>()
{
  return "rosapi_msgs::srv::TopicsForType";
}

template<>
inline const char * name<rosapi_msgs::srv::TopicsForType>()
{
  return "rosapi_msgs/srv/TopicsForType";
}

template<>
struct has_fixed_size<rosapi_msgs::srv::TopicsForType>
  : std::integral_constant<
    bool,
    has_fixed_size<rosapi_msgs::srv::TopicsForType_Request>::value &&
    has_fixed_size<rosapi_msgs::srv::TopicsForType_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosapi_msgs::srv::TopicsForType>
  : std::integral_constant<
    bool,
    has_bounded_size<rosapi_msgs::srv::TopicsForType_Request>::value &&
    has_bounded_size<rosapi_msgs::srv::TopicsForType_Response>::value
  >
{
};

template<>
struct is_service<rosapi_msgs::srv::TopicsForType>
  : std::true_type
{
};

template<>
struct is_service_request<rosapi_msgs::srv::TopicsForType_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosapi_msgs::srv::TopicsForType_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSAPI_MSGS__SRV__DETAIL__TOPICS_FOR_TYPE__TRAITS_HPP_
