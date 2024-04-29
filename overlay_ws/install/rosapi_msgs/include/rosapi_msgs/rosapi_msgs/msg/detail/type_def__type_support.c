// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rosapi_msgs:msg/TypeDef.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rosapi_msgs/msg/detail/type_def__rosidl_typesupport_introspection_c.h"
#include "rosapi_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rosapi_msgs/msg/detail/type_def__functions.h"
#include "rosapi_msgs/msg/detail/type_def__struct.h"


// Include directives for member types
// Member `type`
// Member `fieldnames`
// Member `fieldtypes`
// Member `examples`
// Member `constnames`
// Member `constvalues`
#include "rosidl_runtime_c/string_functions.h"
// Member `fieldarraylen`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__TypeDef_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosapi_msgs__msg__TypeDef__init(message_memory);
}

void rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__TypeDef_fini_function(void * message_memory)
{
  rosapi_msgs__msg__TypeDef__fini(message_memory);
}

size_t rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__size_function__TypeDef__fieldnames(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_const_function__TypeDef__fieldnames(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_function__TypeDef__fieldnames(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__fetch_function__TypeDef__fieldnames(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_const_function__TypeDef__fieldnames(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__assign_function__TypeDef__fieldnames(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_function__TypeDef__fieldnames(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__resize_function__TypeDef__fieldnames(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__size_function__TypeDef__fieldtypes(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_const_function__TypeDef__fieldtypes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_function__TypeDef__fieldtypes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__fetch_function__TypeDef__fieldtypes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_const_function__TypeDef__fieldtypes(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__assign_function__TypeDef__fieldtypes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_function__TypeDef__fieldtypes(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__resize_function__TypeDef__fieldtypes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__size_function__TypeDef__fieldarraylen(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_const_function__TypeDef__fieldarraylen(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_function__TypeDef__fieldarraylen(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__fetch_function__TypeDef__fieldarraylen(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_const_function__TypeDef__fieldarraylen(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__assign_function__TypeDef__fieldarraylen(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_function__TypeDef__fieldarraylen(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__resize_function__TypeDef__fieldarraylen(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__size_function__TypeDef__examples(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_const_function__TypeDef__examples(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_function__TypeDef__examples(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__fetch_function__TypeDef__examples(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_const_function__TypeDef__examples(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__assign_function__TypeDef__examples(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_function__TypeDef__examples(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__resize_function__TypeDef__examples(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__size_function__TypeDef__constnames(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_const_function__TypeDef__constnames(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_function__TypeDef__constnames(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__fetch_function__TypeDef__constnames(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_const_function__TypeDef__constnames(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__assign_function__TypeDef__constnames(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_function__TypeDef__constnames(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__resize_function__TypeDef__constnames(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__size_function__TypeDef__constvalues(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_const_function__TypeDef__constvalues(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_function__TypeDef__constvalues(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__fetch_function__TypeDef__constvalues(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_const_function__TypeDef__constvalues(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__assign_function__TypeDef__constvalues(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_function__TypeDef__constvalues(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__resize_function__TypeDef__constvalues(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__TypeDef_message_member_array[7] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi_msgs__msg__TypeDef, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fieldnames",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi_msgs__msg__TypeDef, fieldnames),  // bytes offset in struct
    NULL,  // default value
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__size_function__TypeDef__fieldnames,  // size() function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_const_function__TypeDef__fieldnames,  // get_const(index) function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_function__TypeDef__fieldnames,  // get(index) function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__fetch_function__TypeDef__fieldnames,  // fetch(index, &value) function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__assign_function__TypeDef__fieldnames,  // assign(index, value) function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__resize_function__TypeDef__fieldnames  // resize(index) function pointer
  },
  {
    "fieldtypes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi_msgs__msg__TypeDef, fieldtypes),  // bytes offset in struct
    NULL,  // default value
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__size_function__TypeDef__fieldtypes,  // size() function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_const_function__TypeDef__fieldtypes,  // get_const(index) function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_function__TypeDef__fieldtypes,  // get(index) function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__fetch_function__TypeDef__fieldtypes,  // fetch(index, &value) function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__assign_function__TypeDef__fieldtypes,  // assign(index, value) function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__resize_function__TypeDef__fieldtypes  // resize(index) function pointer
  },
  {
    "fieldarraylen",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi_msgs__msg__TypeDef, fieldarraylen),  // bytes offset in struct
    NULL,  // default value
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__size_function__TypeDef__fieldarraylen,  // size() function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_const_function__TypeDef__fieldarraylen,  // get_const(index) function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_function__TypeDef__fieldarraylen,  // get(index) function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__fetch_function__TypeDef__fieldarraylen,  // fetch(index, &value) function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__assign_function__TypeDef__fieldarraylen,  // assign(index, value) function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__resize_function__TypeDef__fieldarraylen  // resize(index) function pointer
  },
  {
    "examples",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi_msgs__msg__TypeDef, examples),  // bytes offset in struct
    NULL,  // default value
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__size_function__TypeDef__examples,  // size() function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_const_function__TypeDef__examples,  // get_const(index) function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_function__TypeDef__examples,  // get(index) function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__fetch_function__TypeDef__examples,  // fetch(index, &value) function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__assign_function__TypeDef__examples,  // assign(index, value) function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__resize_function__TypeDef__examples  // resize(index) function pointer
  },
  {
    "constnames",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi_msgs__msg__TypeDef, constnames),  // bytes offset in struct
    NULL,  // default value
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__size_function__TypeDef__constnames,  // size() function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_const_function__TypeDef__constnames,  // get_const(index) function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_function__TypeDef__constnames,  // get(index) function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__fetch_function__TypeDef__constnames,  // fetch(index, &value) function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__assign_function__TypeDef__constnames,  // assign(index, value) function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__resize_function__TypeDef__constnames  // resize(index) function pointer
  },
  {
    "constvalues",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi_msgs__msg__TypeDef, constvalues),  // bytes offset in struct
    NULL,  // default value
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__size_function__TypeDef__constvalues,  // size() function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_const_function__TypeDef__constvalues,  // get_const(index) function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__get_function__TypeDef__constvalues,  // get(index) function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__fetch_function__TypeDef__constvalues,  // fetch(index, &value) function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__assign_function__TypeDef__constvalues,  // assign(index, value) function pointer
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__resize_function__TypeDef__constvalues  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__TypeDef_message_members = {
  "rosapi_msgs__msg",  // message namespace
  "TypeDef",  // message name
  7,  // number of fields
  sizeof(rosapi_msgs__msg__TypeDef),
  rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__TypeDef_message_member_array,  // message members
  rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__TypeDef_init_function,  // function to initialize message memory (memory has to be allocated)
  rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__TypeDef_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__TypeDef_message_type_support_handle = {
  0,
  &rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__TypeDef_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosapi_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi_msgs, msg, TypeDef)() {
  if (!rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__TypeDef_message_type_support_handle.typesupport_identifier) {
    rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__TypeDef_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rosapi_msgs__msg__TypeDef__rosidl_typesupport_introspection_c__TypeDef_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
