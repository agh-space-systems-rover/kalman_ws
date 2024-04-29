// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rosbridge_test_msgs:msg/TestHeaderTwo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rosbridge_test_msgs/msg/detail/test_header_two__rosidl_typesupport_introspection_c.h"
#include "rosbridge_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rosbridge_test_msgs/msg/detail/test_header_two__functions.h"
#include "rosbridge_test_msgs/msg/detail/test_header_two__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rosbridge_test_msgs__msg__TestHeaderTwo__rosidl_typesupport_introspection_c__TestHeaderTwo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosbridge_test_msgs__msg__TestHeaderTwo__init(message_memory);
}

void rosbridge_test_msgs__msg__TestHeaderTwo__rosidl_typesupport_introspection_c__TestHeaderTwo_fini_function(void * message_memory)
{
  rosbridge_test_msgs__msg__TestHeaderTwo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rosbridge_test_msgs__msg__TestHeaderTwo__rosidl_typesupport_introspection_c__TestHeaderTwo_message_member_array[1] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs__msg__TestHeaderTwo, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rosbridge_test_msgs__msg__TestHeaderTwo__rosidl_typesupport_introspection_c__TestHeaderTwo_message_members = {
  "rosbridge_test_msgs__msg",  // message namespace
  "TestHeaderTwo",  // message name
  1,  // number of fields
  sizeof(rosbridge_test_msgs__msg__TestHeaderTwo),
  rosbridge_test_msgs__msg__TestHeaderTwo__rosidl_typesupport_introspection_c__TestHeaderTwo_message_member_array,  // message members
  rosbridge_test_msgs__msg__TestHeaderTwo__rosidl_typesupport_introspection_c__TestHeaderTwo_init_function,  // function to initialize message memory (memory has to be allocated)
  rosbridge_test_msgs__msg__TestHeaderTwo__rosidl_typesupport_introspection_c__TestHeaderTwo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rosbridge_test_msgs__msg__TestHeaderTwo__rosidl_typesupport_introspection_c__TestHeaderTwo_message_type_support_handle = {
  0,
  &rosbridge_test_msgs__msg__TestHeaderTwo__rosidl_typesupport_introspection_c__TestHeaderTwo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosbridge_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbridge_test_msgs, msg, TestHeaderTwo)() {
  rosbridge_test_msgs__msg__TestHeaderTwo__rosidl_typesupport_introspection_c__TestHeaderTwo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!rosbridge_test_msgs__msg__TestHeaderTwo__rosidl_typesupport_introspection_c__TestHeaderTwo_message_type_support_handle.typesupport_identifier) {
    rosbridge_test_msgs__msg__TestHeaderTwo__rosidl_typesupport_introspection_c__TestHeaderTwo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rosbridge_test_msgs__msg__TestHeaderTwo__rosidl_typesupport_introspection_c__TestHeaderTwo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
