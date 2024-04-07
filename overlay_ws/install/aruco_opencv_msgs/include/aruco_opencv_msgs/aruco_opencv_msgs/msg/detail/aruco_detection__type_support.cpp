// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from aruco_opencv_msgs:msg/ArucoDetection.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "aruco_opencv_msgs/msg/detail/aruco_detection__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace aruco_opencv_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ArucoDetection_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aruco_opencv_msgs::msg::ArucoDetection(_init);
}

void ArucoDetection_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aruco_opencv_msgs::msg::ArucoDetection *>(message_memory);
  typed_message->~ArucoDetection();
}

size_t size_function__ArucoDetection__markers(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<aruco_opencv_msgs::msg::MarkerPose> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ArucoDetection__markers(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<aruco_opencv_msgs::msg::MarkerPose> *>(untyped_member);
  return &member[index];
}

void * get_function__ArucoDetection__markers(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<aruco_opencv_msgs::msg::MarkerPose> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArucoDetection__markers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const aruco_opencv_msgs::msg::MarkerPose *>(
    get_const_function__ArucoDetection__markers(untyped_member, index));
  auto & value = *reinterpret_cast<aruco_opencv_msgs::msg::MarkerPose *>(untyped_value);
  value = item;
}

void assign_function__ArucoDetection__markers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<aruco_opencv_msgs::msg::MarkerPose *>(
    get_function__ArucoDetection__markers(untyped_member, index));
  const auto & value = *reinterpret_cast<const aruco_opencv_msgs::msg::MarkerPose *>(untyped_value);
  item = value;
}

void resize_function__ArucoDetection__markers(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<aruco_opencv_msgs::msg::MarkerPose> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ArucoDetection__boards(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<aruco_opencv_msgs::msg::BoardPose> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ArucoDetection__boards(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<aruco_opencv_msgs::msg::BoardPose> *>(untyped_member);
  return &member[index];
}

void * get_function__ArucoDetection__boards(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<aruco_opencv_msgs::msg::BoardPose> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArucoDetection__boards(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const aruco_opencv_msgs::msg::BoardPose *>(
    get_const_function__ArucoDetection__boards(untyped_member, index));
  auto & value = *reinterpret_cast<aruco_opencv_msgs::msg::BoardPose *>(untyped_value);
  value = item;
}

void assign_function__ArucoDetection__boards(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<aruco_opencv_msgs::msg::BoardPose *>(
    get_function__ArucoDetection__boards(untyped_member, index));
  const auto & value = *reinterpret_cast<const aruco_opencv_msgs::msg::BoardPose *>(untyped_value);
  item = value;
}

void resize_function__ArucoDetection__boards(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<aruco_opencv_msgs::msg::BoardPose> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArucoDetection_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_opencv_msgs::msg::ArucoDetection, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "markers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<aruco_opencv_msgs::msg::MarkerPose>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_opencv_msgs::msg::ArucoDetection, markers),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArucoDetection__markers,  // size() function pointer
    get_const_function__ArucoDetection__markers,  // get_const(index) function pointer
    get_function__ArucoDetection__markers,  // get(index) function pointer
    fetch_function__ArucoDetection__markers,  // fetch(index, &value) function pointer
    assign_function__ArucoDetection__markers,  // assign(index, value) function pointer
    resize_function__ArucoDetection__markers  // resize(index) function pointer
  },
  {
    "boards",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<aruco_opencv_msgs::msg::BoardPose>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_opencv_msgs::msg::ArucoDetection, boards),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArucoDetection__boards,  // size() function pointer
    get_const_function__ArucoDetection__boards,  // get_const(index) function pointer
    get_function__ArucoDetection__boards,  // get(index) function pointer
    fetch_function__ArucoDetection__boards,  // fetch(index, &value) function pointer
    assign_function__ArucoDetection__boards,  // assign(index, value) function pointer
    resize_function__ArucoDetection__boards  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArucoDetection_message_members = {
  "aruco_opencv_msgs::msg",  // message namespace
  "ArucoDetection",  // message name
  3,  // number of fields
  sizeof(aruco_opencv_msgs::msg::ArucoDetection),
  ArucoDetection_message_member_array,  // message members
  ArucoDetection_init_function,  // function to initialize message memory (memory has to be allocated)
  ArucoDetection_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArucoDetection_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArucoDetection_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace aruco_opencv_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aruco_opencv_msgs::msg::ArucoDetection>()
{
  return &::aruco_opencv_msgs::msg::rosidl_typesupport_introspection_cpp::ArucoDetection_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aruco_opencv_msgs, msg, ArucoDetection)() {
  return &::aruco_opencv_msgs::msg::rosidl_typesupport_introspection_cpp::ArucoDetection_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
