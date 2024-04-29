// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosbridge_msgs:msg/ConnectedClients.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENTS__STRUCT_H_
#define ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'clients'
#include "rosbridge_msgs/msg/detail/connected_client__struct.h"

/// Struct defined in msg/ConnectedClients in the package rosbridge_msgs.
typedef struct rosbridge_msgs__msg__ConnectedClients
{
  rosbridge_msgs__msg__ConnectedClient__Sequence clients;
} rosbridge_msgs__msg__ConnectedClients;

// Struct for a sequence of rosbridge_msgs__msg__ConnectedClients.
typedef struct rosbridge_msgs__msg__ConnectedClients__Sequence
{
  rosbridge_msgs__msg__ConnectedClients * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_msgs__msg__ConnectedClients__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENTS__STRUCT_H_
