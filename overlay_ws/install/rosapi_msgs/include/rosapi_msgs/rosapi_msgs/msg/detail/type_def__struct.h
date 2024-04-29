// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosapi_msgs:msg/TypeDef.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__MSG__DETAIL__TYPE_DEF__STRUCT_H_
#define ROSAPI_MSGS__MSG__DETAIL__TYPE_DEF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
// Member 'fieldnames'
// Member 'fieldtypes'
// Member 'examples'
// Member 'constnames'
// Member 'constvalues'
#include "rosidl_runtime_c/string.h"
// Member 'fieldarraylen'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/TypeDef in the package rosapi_msgs.
typedef struct rosapi_msgs__msg__TypeDef
{
  rosidl_runtime_c__String type;
  rosidl_runtime_c__String__Sequence fieldnames;
  rosidl_runtime_c__String__Sequence fieldtypes;
  rosidl_runtime_c__int32__Sequence fieldarraylen;
  rosidl_runtime_c__String__Sequence examples;
  rosidl_runtime_c__String__Sequence constnames;
  rosidl_runtime_c__String__Sequence constvalues;
} rosapi_msgs__msg__TypeDef;

// Struct for a sequence of rosapi_msgs__msg__TypeDef.
typedef struct rosapi_msgs__msg__TypeDef__Sequence
{
  rosapi_msgs__msg__TypeDef * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosapi_msgs__msg__TypeDef__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSAPI_MSGS__MSG__DETAIL__TYPE_DEF__STRUCT_H_
