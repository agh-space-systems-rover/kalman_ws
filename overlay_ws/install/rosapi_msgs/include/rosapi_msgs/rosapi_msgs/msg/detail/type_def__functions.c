// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosapi_msgs:msg/TypeDef.idl
// generated code does not contain a copyright notice
#include "rosapi_msgs/msg/detail/type_def__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


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

bool
rosapi_msgs__msg__TypeDef__init(rosapi_msgs__msg__TypeDef * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    rosapi_msgs__msg__TypeDef__fini(msg);
    return false;
  }
  // fieldnames
  if (!rosidl_runtime_c__String__Sequence__init(&msg->fieldnames, 0)) {
    rosapi_msgs__msg__TypeDef__fini(msg);
    return false;
  }
  // fieldtypes
  if (!rosidl_runtime_c__String__Sequence__init(&msg->fieldtypes, 0)) {
    rosapi_msgs__msg__TypeDef__fini(msg);
    return false;
  }
  // fieldarraylen
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->fieldarraylen, 0)) {
    rosapi_msgs__msg__TypeDef__fini(msg);
    return false;
  }
  // examples
  if (!rosidl_runtime_c__String__Sequence__init(&msg->examples, 0)) {
    rosapi_msgs__msg__TypeDef__fini(msg);
    return false;
  }
  // constnames
  if (!rosidl_runtime_c__String__Sequence__init(&msg->constnames, 0)) {
    rosapi_msgs__msg__TypeDef__fini(msg);
    return false;
  }
  // constvalues
  if (!rosidl_runtime_c__String__Sequence__init(&msg->constvalues, 0)) {
    rosapi_msgs__msg__TypeDef__fini(msg);
    return false;
  }
  return true;
}

void
rosapi_msgs__msg__TypeDef__fini(rosapi_msgs__msg__TypeDef * msg)
{
  if (!msg) {
    return;
  }
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // fieldnames
  rosidl_runtime_c__String__Sequence__fini(&msg->fieldnames);
  // fieldtypes
  rosidl_runtime_c__String__Sequence__fini(&msg->fieldtypes);
  // fieldarraylen
  rosidl_runtime_c__int32__Sequence__fini(&msg->fieldarraylen);
  // examples
  rosidl_runtime_c__String__Sequence__fini(&msg->examples);
  // constnames
  rosidl_runtime_c__String__Sequence__fini(&msg->constnames);
  // constvalues
  rosidl_runtime_c__String__Sequence__fini(&msg->constvalues);
}

bool
rosapi_msgs__msg__TypeDef__are_equal(const rosapi_msgs__msg__TypeDef * lhs, const rosapi_msgs__msg__TypeDef * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // fieldnames
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->fieldnames), &(rhs->fieldnames)))
  {
    return false;
  }
  // fieldtypes
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->fieldtypes), &(rhs->fieldtypes)))
  {
    return false;
  }
  // fieldarraylen
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->fieldarraylen), &(rhs->fieldarraylen)))
  {
    return false;
  }
  // examples
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->examples), &(rhs->examples)))
  {
    return false;
  }
  // constnames
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->constnames), &(rhs->constnames)))
  {
    return false;
  }
  // constvalues
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->constvalues), &(rhs->constvalues)))
  {
    return false;
  }
  return true;
}

bool
rosapi_msgs__msg__TypeDef__copy(
  const rosapi_msgs__msg__TypeDef * input,
  rosapi_msgs__msg__TypeDef * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // fieldnames
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->fieldnames), &(output->fieldnames)))
  {
    return false;
  }
  // fieldtypes
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->fieldtypes), &(output->fieldtypes)))
  {
    return false;
  }
  // fieldarraylen
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->fieldarraylen), &(output->fieldarraylen)))
  {
    return false;
  }
  // examples
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->examples), &(output->examples)))
  {
    return false;
  }
  // constnames
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->constnames), &(output->constnames)))
  {
    return false;
  }
  // constvalues
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->constvalues), &(output->constvalues)))
  {
    return false;
  }
  return true;
}

rosapi_msgs__msg__TypeDef *
rosapi_msgs__msg__TypeDef__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosapi_msgs__msg__TypeDef * msg = (rosapi_msgs__msg__TypeDef *)allocator.allocate(sizeof(rosapi_msgs__msg__TypeDef), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosapi_msgs__msg__TypeDef));
  bool success = rosapi_msgs__msg__TypeDef__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rosapi_msgs__msg__TypeDef__destroy(rosapi_msgs__msg__TypeDef * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rosapi_msgs__msg__TypeDef__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rosapi_msgs__msg__TypeDef__Sequence__init(rosapi_msgs__msg__TypeDef__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosapi_msgs__msg__TypeDef * data = NULL;

  if (size) {
    data = (rosapi_msgs__msg__TypeDef *)allocator.zero_allocate(size, sizeof(rosapi_msgs__msg__TypeDef), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosapi_msgs__msg__TypeDef__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosapi_msgs__msg__TypeDef__fini(&data[i - 1]);
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
rosapi_msgs__msg__TypeDef__Sequence__fini(rosapi_msgs__msg__TypeDef__Sequence * array)
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
      rosapi_msgs__msg__TypeDef__fini(&array->data[i]);
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

rosapi_msgs__msg__TypeDef__Sequence *
rosapi_msgs__msg__TypeDef__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosapi_msgs__msg__TypeDef__Sequence * array = (rosapi_msgs__msg__TypeDef__Sequence *)allocator.allocate(sizeof(rosapi_msgs__msg__TypeDef__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rosapi_msgs__msg__TypeDef__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rosapi_msgs__msg__TypeDef__Sequence__destroy(rosapi_msgs__msg__TypeDef__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rosapi_msgs__msg__TypeDef__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rosapi_msgs__msg__TypeDef__Sequence__are_equal(const rosapi_msgs__msg__TypeDef__Sequence * lhs, const rosapi_msgs__msg__TypeDef__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rosapi_msgs__msg__TypeDef__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rosapi_msgs__msg__TypeDef__Sequence__copy(
  const rosapi_msgs__msg__TypeDef__Sequence * input,
  rosapi_msgs__msg__TypeDef__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rosapi_msgs__msg__TypeDef);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rosapi_msgs__msg__TypeDef * data =
      (rosapi_msgs__msg__TypeDef *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rosapi_msgs__msg__TypeDef__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rosapi_msgs__msg__TypeDef__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rosapi_msgs__msg__TypeDef__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
