// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosbridge_msgs:msg/ConnectedClient.idl
// generated code does not contain a copyright notice
#include "rosbridge_msgs/msg/detail/connected_client__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ip_address`
#include "rosidl_runtime_c/string_functions.h"
// Member `connection_time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
rosbridge_msgs__msg__ConnectedClient__init(rosbridge_msgs__msg__ConnectedClient * msg)
{
  if (!msg) {
    return false;
  }
  // ip_address
  if (!rosidl_runtime_c__String__init(&msg->ip_address)) {
    rosbridge_msgs__msg__ConnectedClient__fini(msg);
    return false;
  }
  // connection_time
  if (!builtin_interfaces__msg__Time__init(&msg->connection_time)) {
    rosbridge_msgs__msg__ConnectedClient__fini(msg);
    return false;
  }
  return true;
}

void
rosbridge_msgs__msg__ConnectedClient__fini(rosbridge_msgs__msg__ConnectedClient * msg)
{
  if (!msg) {
    return;
  }
  // ip_address
  rosidl_runtime_c__String__fini(&msg->ip_address);
  // connection_time
  builtin_interfaces__msg__Time__fini(&msg->connection_time);
}

bool
rosbridge_msgs__msg__ConnectedClient__are_equal(const rosbridge_msgs__msg__ConnectedClient * lhs, const rosbridge_msgs__msg__ConnectedClient * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ip_address
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ip_address), &(rhs->ip_address)))
  {
    return false;
  }
  // connection_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->connection_time), &(rhs->connection_time)))
  {
    return false;
  }
  return true;
}

bool
rosbridge_msgs__msg__ConnectedClient__copy(
  const rosbridge_msgs__msg__ConnectedClient * input,
  rosbridge_msgs__msg__ConnectedClient * output)
{
  if (!input || !output) {
    return false;
  }
  // ip_address
  if (!rosidl_runtime_c__String__copy(
      &(input->ip_address), &(output->ip_address)))
  {
    return false;
  }
  // connection_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->connection_time), &(output->connection_time)))
  {
    return false;
  }
  return true;
}

rosbridge_msgs__msg__ConnectedClient *
rosbridge_msgs__msg__ConnectedClient__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_msgs__msg__ConnectedClient * msg = (rosbridge_msgs__msg__ConnectedClient *)allocator.allocate(sizeof(rosbridge_msgs__msg__ConnectedClient), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosbridge_msgs__msg__ConnectedClient));
  bool success = rosbridge_msgs__msg__ConnectedClient__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rosbridge_msgs__msg__ConnectedClient__destroy(rosbridge_msgs__msg__ConnectedClient * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rosbridge_msgs__msg__ConnectedClient__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rosbridge_msgs__msg__ConnectedClient__Sequence__init(rosbridge_msgs__msg__ConnectedClient__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_msgs__msg__ConnectedClient * data = NULL;

  if (size) {
    data = (rosbridge_msgs__msg__ConnectedClient *)allocator.zero_allocate(size, sizeof(rosbridge_msgs__msg__ConnectedClient), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosbridge_msgs__msg__ConnectedClient__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosbridge_msgs__msg__ConnectedClient__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rosbridge_msgs__msg__ConnectedClient__Sequence__fini(rosbridge_msgs__msg__ConnectedClient__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosbridge_msgs__msg__ConnectedClient__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rosbridge_msgs__msg__ConnectedClient__Sequence *
rosbridge_msgs__msg__ConnectedClient__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_msgs__msg__ConnectedClient__Sequence * array = (rosbridge_msgs__msg__ConnectedClient__Sequence *)allocator.allocate(sizeof(rosbridge_msgs__msg__ConnectedClient__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rosbridge_msgs__msg__ConnectedClient__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rosbridge_msgs__msg__ConnectedClient__Sequence__destroy(rosbridge_msgs__msg__ConnectedClient__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rosbridge_msgs__msg__ConnectedClient__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rosbridge_msgs__msg__ConnectedClient__Sequence__are_equal(const rosbridge_msgs__msg__ConnectedClient__Sequence * lhs, const rosbridge_msgs__msg__ConnectedClient__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rosbridge_msgs__msg__ConnectedClient__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rosbridge_msgs__msg__ConnectedClient__Sequence__copy(
  const rosbridge_msgs__msg__ConnectedClient__Sequence * input,
  rosbridge_msgs__msg__ConnectedClient__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rosbridge_msgs__msg__ConnectedClient);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rosbridge_msgs__msg__ConnectedClient * data =
      (rosbridge_msgs__msg__ConnectedClient *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rosbridge_msgs__msg__ConnectedClient__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rosbridge_msgs__msg__ConnectedClient__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rosbridge_msgs__msg__ConnectedClient__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
