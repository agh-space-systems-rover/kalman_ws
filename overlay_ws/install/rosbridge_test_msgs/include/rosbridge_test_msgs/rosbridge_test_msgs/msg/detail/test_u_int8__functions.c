// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosbridge_test_msgs:msg/TestUInt8.idl
// generated code does not contain a copyright notice
#include "rosbridge_test_msgs/msg/detail/test_u_int8__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rosbridge_test_msgs__msg__TestUInt8__init(rosbridge_test_msgs__msg__TestUInt8 * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    rosbridge_test_msgs__msg__TestUInt8__fini(msg);
    return false;
  }
  return true;
}

void
rosbridge_test_msgs__msg__TestUInt8__fini(rosbridge_test_msgs__msg__TestUInt8 * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

bool
rosbridge_test_msgs__msg__TestUInt8__are_equal(const rosbridge_test_msgs__msg__TestUInt8 * lhs, const rosbridge_test_msgs__msg__TestUInt8 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
rosbridge_test_msgs__msg__TestUInt8__copy(
  const rosbridge_test_msgs__msg__TestUInt8 * input,
  rosbridge_test_msgs__msg__TestUInt8 * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

rosbridge_test_msgs__msg__TestUInt8 *
rosbridge_test_msgs__msg__TestUInt8__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__msg__TestUInt8 * msg = (rosbridge_test_msgs__msg__TestUInt8 *)allocator.allocate(sizeof(rosbridge_test_msgs__msg__TestUInt8), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosbridge_test_msgs__msg__TestUInt8));
  bool success = rosbridge_test_msgs__msg__TestUInt8__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rosbridge_test_msgs__msg__TestUInt8__destroy(rosbridge_test_msgs__msg__TestUInt8 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rosbridge_test_msgs__msg__TestUInt8__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rosbridge_test_msgs__msg__TestUInt8__Sequence__init(rosbridge_test_msgs__msg__TestUInt8__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__msg__TestUInt8 * data = NULL;

  if (size) {
    data = (rosbridge_test_msgs__msg__TestUInt8 *)allocator.zero_allocate(size, sizeof(rosbridge_test_msgs__msg__TestUInt8), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosbridge_test_msgs__msg__TestUInt8__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosbridge_test_msgs__msg__TestUInt8__fini(&data[i - 1]);
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
rosbridge_test_msgs__msg__TestUInt8__Sequence__fini(rosbridge_test_msgs__msg__TestUInt8__Sequence * array)
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
      rosbridge_test_msgs__msg__TestUInt8__fini(&array->data[i]);
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

rosbridge_test_msgs__msg__TestUInt8__Sequence *
rosbridge_test_msgs__msg__TestUInt8__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__msg__TestUInt8__Sequence * array = (rosbridge_test_msgs__msg__TestUInt8__Sequence *)allocator.allocate(sizeof(rosbridge_test_msgs__msg__TestUInt8__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rosbridge_test_msgs__msg__TestUInt8__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rosbridge_test_msgs__msg__TestUInt8__Sequence__destroy(rosbridge_test_msgs__msg__TestUInt8__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rosbridge_test_msgs__msg__TestUInt8__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rosbridge_test_msgs__msg__TestUInt8__Sequence__are_equal(const rosbridge_test_msgs__msg__TestUInt8__Sequence * lhs, const rosbridge_test_msgs__msg__TestUInt8__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rosbridge_test_msgs__msg__TestUInt8__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rosbridge_test_msgs__msg__TestUInt8__Sequence__copy(
  const rosbridge_test_msgs__msg__TestUInt8__Sequence * input,
  rosbridge_test_msgs__msg__TestUInt8__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rosbridge_test_msgs__msg__TestUInt8);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rosbridge_test_msgs__msg__TestUInt8 * data =
      (rosbridge_test_msgs__msg__TestUInt8 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rosbridge_test_msgs__msg__TestUInt8__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rosbridge_test_msgs__msg__TestUInt8__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rosbridge_test_msgs__msg__TestUInt8__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
