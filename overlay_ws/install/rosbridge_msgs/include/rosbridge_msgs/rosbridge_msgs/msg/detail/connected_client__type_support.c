// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rosbridge_msgs:msg/ConnectedClient.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rosbridge_msgs/msg/detail/connected_client__rosidl_typesupport_introspection_c.h"
#include "rosbridge_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rosbridge_msgs/msg/detail/connected_client__functions.h"
#include "rosbridge_msgs/msg/detail/connected_client__struct.h"


// Include directives for member types
// Member `ip_address`
#include "rosidl_runtime_c/string_functions.h"
// Member `connection_time`
#include "builtin_interfaces/msg/time.h"
// Member `connection_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rosbridge_msgs__msg__ConnectedClient__rosidl_typesupport_introspection_c__ConnectedClient_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosbridge_msgs__msg__ConnectedClient__init(message_memory);
}

void rosbridge_msgs__msg__ConnectedClient__rosidl_typesupport_introspection_c__ConnectedClient_fini_function(void * message_memory)
{
  rosbridge_msgs__msg__ConnectedClient__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rosbridge_msgs__msg__ConnectedClient__rosidl_typesupport_introspection_c__ConnectedClient_message_member_array[2] = {
  {
    "ip_address",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_msgs__msg__ConnectedClient, ip_address),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "connection_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_msgs__msg__ConnectedClient, connection_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rosbridge_msgs__msg__ConnectedClient__rosidl_typesupport_introspection_c__ConnectedClient_message_members = {
  "rosbridge_msgs__msg",  // message namespace
  "ConnectedClient",  // message name
  2,  // number of fields
  sizeof(rosbridge_msgs__msg__ConnectedClient),
  rosbridge_msgs__msg__ConnectedClient__rosidl_typesupport_introspection_c__ConnectedClient_message_member_array,  // message members
  rosbridge_msgs__msg__ConnectedClient__rosidl_typesupport_introspection_c__ConnectedClient_init_function,  // function to initialize message memory (memory has to be allocated)
  rosbridge_msgs__msg__ConnectedClient__rosidl_typesupport_introspection_c__ConnectedClient_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rosbridge_msgs__msg__ConnectedClient__rosidl_typesupport_introspection_c__ConnectedClient_message_type_support_handle = {
  0,
  &rosbridge_msgs__msg__ConnectedClient__rosidl_typesupport_introspection_c__ConnectedClient_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosbridge_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_msgs, msg, ConnectedClient)() {
  rosbridge_msgs__msg__ConnectedClient__rosidl_typesupport_introspection_c__ConnectedClient_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!rosbridge_msgs__msg__ConnectedClient__rosidl_typesupport_introspection_c__ConnectedClient_message_type_support_handle.typesupport_identifier) {
    rosbridge_msgs__msg__ConnectedClient__rosidl_typesupport_introspection_c__ConnectedClient_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rosbridge_msgs__msg__ConnectedClient__rosidl_typesupport_introspection_c__ConnectedClient_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
