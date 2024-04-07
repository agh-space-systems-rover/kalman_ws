// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aruco_opencv_msgs:msg/ArucoDetection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aruco_opencv_msgs/msg/detail/aruco_detection__rosidl_typesupport_introspection_c.h"
#include "aruco_opencv_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aruco_opencv_msgs/msg/detail/aruco_detection__functions.h"
#include "aruco_opencv_msgs/msg/detail/aruco_detection__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `markers`
#include "aruco_opencv_msgs/msg/marker_pose.h"
// Member `markers`
#include "aruco_opencv_msgs/msg/detail/marker_pose__rosidl_typesupport_introspection_c.h"
// Member `boards`
#include "aruco_opencv_msgs/msg/board_pose.h"
// Member `boards`
#include "aruco_opencv_msgs/msg/detail/board_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__ArucoDetection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aruco_opencv_msgs__msg__ArucoDetection__init(message_memory);
}

void aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__ArucoDetection_fini_function(void * message_memory)
{
  aruco_opencv_msgs__msg__ArucoDetection__fini(message_memory);
}

size_t aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__size_function__ArucoDetection__markers(
  const void * untyped_member)
{
  const aruco_opencv_msgs__msg__MarkerPose__Sequence * member =
    (const aruco_opencv_msgs__msg__MarkerPose__Sequence *)(untyped_member);
  return member->size;
}

const void * aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__get_const_function__ArucoDetection__markers(
  const void * untyped_member, size_t index)
{
  const aruco_opencv_msgs__msg__MarkerPose__Sequence * member =
    (const aruco_opencv_msgs__msg__MarkerPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__get_function__ArucoDetection__markers(
  void * untyped_member, size_t index)
{
  aruco_opencv_msgs__msg__MarkerPose__Sequence * member =
    (aruco_opencv_msgs__msg__MarkerPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__fetch_function__ArucoDetection__markers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const aruco_opencv_msgs__msg__MarkerPose * item =
    ((const aruco_opencv_msgs__msg__MarkerPose *)
    aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__get_const_function__ArucoDetection__markers(untyped_member, index));
  aruco_opencv_msgs__msg__MarkerPose * value =
    (aruco_opencv_msgs__msg__MarkerPose *)(untyped_value);
  *value = *item;
}

void aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__assign_function__ArucoDetection__markers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  aruco_opencv_msgs__msg__MarkerPose * item =
    ((aruco_opencv_msgs__msg__MarkerPose *)
    aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__get_function__ArucoDetection__markers(untyped_member, index));
  const aruco_opencv_msgs__msg__MarkerPose * value =
    (const aruco_opencv_msgs__msg__MarkerPose *)(untyped_value);
  *item = *value;
}

bool aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__resize_function__ArucoDetection__markers(
  void * untyped_member, size_t size)
{
  aruco_opencv_msgs__msg__MarkerPose__Sequence * member =
    (aruco_opencv_msgs__msg__MarkerPose__Sequence *)(untyped_member);
  aruco_opencv_msgs__msg__MarkerPose__Sequence__fini(member);
  return aruco_opencv_msgs__msg__MarkerPose__Sequence__init(member, size);
}

size_t aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__size_function__ArucoDetection__boards(
  const void * untyped_member)
{
  const aruco_opencv_msgs__msg__BoardPose__Sequence * member =
    (const aruco_opencv_msgs__msg__BoardPose__Sequence *)(untyped_member);
  return member->size;
}

const void * aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__get_const_function__ArucoDetection__boards(
  const void * untyped_member, size_t index)
{
  const aruco_opencv_msgs__msg__BoardPose__Sequence * member =
    (const aruco_opencv_msgs__msg__BoardPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__get_function__ArucoDetection__boards(
  void * untyped_member, size_t index)
{
  aruco_opencv_msgs__msg__BoardPose__Sequence * member =
    (aruco_opencv_msgs__msg__BoardPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__fetch_function__ArucoDetection__boards(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const aruco_opencv_msgs__msg__BoardPose * item =
    ((const aruco_opencv_msgs__msg__BoardPose *)
    aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__get_const_function__ArucoDetection__boards(untyped_member, index));
  aruco_opencv_msgs__msg__BoardPose * value =
    (aruco_opencv_msgs__msg__BoardPose *)(untyped_value);
  *value = *item;
}

void aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__assign_function__ArucoDetection__boards(
  void * untyped_member, size_t index, const void * untyped_value)
{
  aruco_opencv_msgs__msg__BoardPose * item =
    ((aruco_opencv_msgs__msg__BoardPose *)
    aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__get_function__ArucoDetection__boards(untyped_member, index));
  const aruco_opencv_msgs__msg__BoardPose * value =
    (const aruco_opencv_msgs__msg__BoardPose *)(untyped_value);
  *item = *value;
}

bool aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__resize_function__ArucoDetection__boards(
  void * untyped_member, size_t size)
{
  aruco_opencv_msgs__msg__BoardPose__Sequence * member =
    (aruco_opencv_msgs__msg__BoardPose__Sequence *)(untyped_member);
  aruco_opencv_msgs__msg__BoardPose__Sequence__fini(member);
  return aruco_opencv_msgs__msg__BoardPose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__ArucoDetection_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_opencv_msgs__msg__ArucoDetection, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "markers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_opencv_msgs__msg__ArucoDetection, markers),  // bytes offset in struct
    NULL,  // default value
    aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__size_function__ArucoDetection__markers,  // size() function pointer
    aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__get_const_function__ArucoDetection__markers,  // get_const(index) function pointer
    aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__get_function__ArucoDetection__markers,  // get(index) function pointer
    aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__fetch_function__ArucoDetection__markers,  // fetch(index, &value) function pointer
    aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__assign_function__ArucoDetection__markers,  // assign(index, value) function pointer
    aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__resize_function__ArucoDetection__markers  // resize(index) function pointer
  },
  {
    "boards",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_opencv_msgs__msg__ArucoDetection, boards),  // bytes offset in struct
    NULL,  // default value
    aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__size_function__ArucoDetection__boards,  // size() function pointer
    aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__get_const_function__ArucoDetection__boards,  // get_const(index) function pointer
    aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__get_function__ArucoDetection__boards,  // get(index) function pointer
    aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__fetch_function__ArucoDetection__boards,  // fetch(index, &value) function pointer
    aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__assign_function__ArucoDetection__boards,  // assign(index, value) function pointer
    aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__resize_function__ArucoDetection__boards  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__ArucoDetection_message_members = {
  "aruco_opencv_msgs__msg",  // message namespace
  "ArucoDetection",  // message name
  3,  // number of fields
  sizeof(aruco_opencv_msgs__msg__ArucoDetection),
  aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__ArucoDetection_message_member_array,  // message members
  aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__ArucoDetection_init_function,  // function to initialize message memory (memory has to be allocated)
  aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__ArucoDetection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__ArucoDetection_message_type_support_handle = {
  0,
  &aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__ArucoDetection_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aruco_opencv_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_opencv_msgs, msg, ArucoDetection)() {
  aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__ArucoDetection_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__ArucoDetection_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_opencv_msgs, msg, MarkerPose)();
  aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__ArucoDetection_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_opencv_msgs, msg, BoardPose)();
  if (!aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__ArucoDetection_message_type_support_handle.typesupport_identifier) {
    aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__ArucoDetection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aruco_opencv_msgs__msg__ArucoDetection__rosidl_typesupport_introspection_c__ArucoDetection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
