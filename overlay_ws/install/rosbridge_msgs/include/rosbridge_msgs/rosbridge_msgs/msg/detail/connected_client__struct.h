// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosbridge_msgs:msg/ConnectedClient.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENT__STRUCT_H_
#define ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ip_address'
#include "rosidl_runtime_c/string.h"
// Member 'connection_time'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/ConnectedClient in the package rosbridge_msgs.
typedef struct rosbridge_msgs__msg__ConnectedClient
{
  rosidl_runtime_c__String ip_address;
  builtin_interfaces__msg__Time connection_time;
} rosbridge_msgs__msg__ConnectedClient;

// Struct for a sequence of rosbridge_msgs__msg__ConnectedClient.
typedef struct rosbridge_msgs__msg__ConnectedClient__Sequence
{
  rosbridge_msgs__msg__ConnectedClient * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_msgs__msg__ConnectedClient__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENT__STRUCT_H_
