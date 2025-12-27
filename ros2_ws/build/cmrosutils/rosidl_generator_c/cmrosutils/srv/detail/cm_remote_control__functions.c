// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cmrosutils:srv/CMRemoteControl.idl
// generated code does not contain a copyright notice
#include "cmrosutils/srv/detail/cm_remote_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `type`
// Member `msg`
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

bool
cmrosutils__srv__CMRemoteControl_Request__init(cmrosutils__srv__CMRemoteControl_Request * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    cmrosutils__srv__CMRemoteControl_Request__fini(msg);
    return false;
  }
  // msg
  if (!rosidl_runtime_c__String__init(&msg->msg)) {
    cmrosutils__srv__CMRemoteControl_Request__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__init(&msg->data)) {
    cmrosutils__srv__CMRemoteControl_Request__fini(msg);
    return false;
  }
  return true;
}

void
cmrosutils__srv__CMRemoteControl_Request__fini(cmrosutils__srv__CMRemoteControl_Request * msg)
{
  if (!msg) {
    return;
  }
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // msg
  rosidl_runtime_c__String__fini(&msg->msg);
  // data
  rosidl_runtime_c__String__fini(&msg->data);
}

bool
cmrosutils__srv__CMRemoteControl_Request__are_equal(const cmrosutils__srv__CMRemoteControl_Request * lhs, const cmrosutils__srv__CMRemoteControl_Request * rhs)
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
  // msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->msg), &(rhs->msg)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
cmrosutils__srv__CMRemoteControl_Request__copy(
  const cmrosutils__srv__CMRemoteControl_Request * input,
  cmrosutils__srv__CMRemoteControl_Request * output)
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
  // msg
  if (!rosidl_runtime_c__String__copy(
      &(input->msg), &(output->msg)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

cmrosutils__srv__CMRemoteControl_Request *
cmrosutils__srv__CMRemoteControl_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cmrosutils__srv__CMRemoteControl_Request * msg = (cmrosutils__srv__CMRemoteControl_Request *)allocator.allocate(sizeof(cmrosutils__srv__CMRemoteControl_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cmrosutils__srv__CMRemoteControl_Request));
  bool success = cmrosutils__srv__CMRemoteControl_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cmrosutils__srv__CMRemoteControl_Request__destroy(cmrosutils__srv__CMRemoteControl_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cmrosutils__srv__CMRemoteControl_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cmrosutils__srv__CMRemoteControl_Request__Sequence__init(cmrosutils__srv__CMRemoteControl_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cmrosutils__srv__CMRemoteControl_Request * data = NULL;

  if (size) {
    data = (cmrosutils__srv__CMRemoteControl_Request *)allocator.zero_allocate(size, sizeof(cmrosutils__srv__CMRemoteControl_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cmrosutils__srv__CMRemoteControl_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cmrosutils__srv__CMRemoteControl_Request__fini(&data[i - 1]);
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
cmrosutils__srv__CMRemoteControl_Request__Sequence__fini(cmrosutils__srv__CMRemoteControl_Request__Sequence * array)
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
      cmrosutils__srv__CMRemoteControl_Request__fini(&array->data[i]);
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

cmrosutils__srv__CMRemoteControl_Request__Sequence *
cmrosutils__srv__CMRemoteControl_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cmrosutils__srv__CMRemoteControl_Request__Sequence * array = (cmrosutils__srv__CMRemoteControl_Request__Sequence *)allocator.allocate(sizeof(cmrosutils__srv__CMRemoteControl_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cmrosutils__srv__CMRemoteControl_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cmrosutils__srv__CMRemoteControl_Request__Sequence__destroy(cmrosutils__srv__CMRemoteControl_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cmrosutils__srv__CMRemoteControl_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cmrosutils__srv__CMRemoteControl_Request__Sequence__are_equal(const cmrosutils__srv__CMRemoteControl_Request__Sequence * lhs, const cmrosutils__srv__CMRemoteControl_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cmrosutils__srv__CMRemoteControl_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cmrosutils__srv__CMRemoteControl_Request__Sequence__copy(
  const cmrosutils__srv__CMRemoteControl_Request__Sequence * input,
  cmrosutils__srv__CMRemoteControl_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cmrosutils__srv__CMRemoteControl_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cmrosutils__srv__CMRemoteControl_Request * data =
      (cmrosutils__srv__CMRemoteControl_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cmrosutils__srv__CMRemoteControl_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cmrosutils__srv__CMRemoteControl_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cmrosutils__srv__CMRemoteControl_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `msg`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
cmrosutils__srv__CMRemoteControl_Response__init(cmrosutils__srv__CMRemoteControl_Response * msg)
{
  if (!msg) {
    return false;
  }
  // res
  // msg
  if (!rosidl_runtime_c__String__init(&msg->msg)) {
    cmrosutils__srv__CMRemoteControl_Response__fini(msg);
    return false;
  }
  return true;
}

void
cmrosutils__srv__CMRemoteControl_Response__fini(cmrosutils__srv__CMRemoteControl_Response * msg)
{
  if (!msg) {
    return;
  }
  // res
  // msg
  rosidl_runtime_c__String__fini(&msg->msg);
}

bool
cmrosutils__srv__CMRemoteControl_Response__are_equal(const cmrosutils__srv__CMRemoteControl_Response * lhs, const cmrosutils__srv__CMRemoteControl_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // res
  if (lhs->res != rhs->res) {
    return false;
  }
  // msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->msg), &(rhs->msg)))
  {
    return false;
  }
  return true;
}

bool
cmrosutils__srv__CMRemoteControl_Response__copy(
  const cmrosutils__srv__CMRemoteControl_Response * input,
  cmrosutils__srv__CMRemoteControl_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // res
  output->res = input->res;
  // msg
  if (!rosidl_runtime_c__String__copy(
      &(input->msg), &(output->msg)))
  {
    return false;
  }
  return true;
}

cmrosutils__srv__CMRemoteControl_Response *
cmrosutils__srv__CMRemoteControl_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cmrosutils__srv__CMRemoteControl_Response * msg = (cmrosutils__srv__CMRemoteControl_Response *)allocator.allocate(sizeof(cmrosutils__srv__CMRemoteControl_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cmrosutils__srv__CMRemoteControl_Response));
  bool success = cmrosutils__srv__CMRemoteControl_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cmrosutils__srv__CMRemoteControl_Response__destroy(cmrosutils__srv__CMRemoteControl_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cmrosutils__srv__CMRemoteControl_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cmrosutils__srv__CMRemoteControl_Response__Sequence__init(cmrosutils__srv__CMRemoteControl_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cmrosutils__srv__CMRemoteControl_Response * data = NULL;

  if (size) {
    data = (cmrosutils__srv__CMRemoteControl_Response *)allocator.zero_allocate(size, sizeof(cmrosutils__srv__CMRemoteControl_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cmrosutils__srv__CMRemoteControl_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cmrosutils__srv__CMRemoteControl_Response__fini(&data[i - 1]);
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
cmrosutils__srv__CMRemoteControl_Response__Sequence__fini(cmrosutils__srv__CMRemoteControl_Response__Sequence * array)
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
      cmrosutils__srv__CMRemoteControl_Response__fini(&array->data[i]);
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

cmrosutils__srv__CMRemoteControl_Response__Sequence *
cmrosutils__srv__CMRemoteControl_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cmrosutils__srv__CMRemoteControl_Response__Sequence * array = (cmrosutils__srv__CMRemoteControl_Response__Sequence *)allocator.allocate(sizeof(cmrosutils__srv__CMRemoteControl_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cmrosutils__srv__CMRemoteControl_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cmrosutils__srv__CMRemoteControl_Response__Sequence__destroy(cmrosutils__srv__CMRemoteControl_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cmrosutils__srv__CMRemoteControl_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cmrosutils__srv__CMRemoteControl_Response__Sequence__are_equal(const cmrosutils__srv__CMRemoteControl_Response__Sequence * lhs, const cmrosutils__srv__CMRemoteControl_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cmrosutils__srv__CMRemoteControl_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cmrosutils__srv__CMRemoteControl_Response__Sequence__copy(
  const cmrosutils__srv__CMRemoteControl_Response__Sequence * input,
  cmrosutils__srv__CMRemoteControl_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cmrosutils__srv__CMRemoteControl_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cmrosutils__srv__CMRemoteControl_Response * data =
      (cmrosutils__srv__CMRemoteControl_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cmrosutils__srv__CMRemoteControl_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cmrosutils__srv__CMRemoteControl_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cmrosutils__srv__CMRemoteControl_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "cmrosutils/srv/detail/cm_remote_control__functions.h"

bool
cmrosutils__srv__CMRemoteControl_Event__init(cmrosutils__srv__CMRemoteControl_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    cmrosutils__srv__CMRemoteControl_Event__fini(msg);
    return false;
  }
  // request
  if (!cmrosutils__srv__CMRemoteControl_Request__Sequence__init(&msg->request, 0)) {
    cmrosutils__srv__CMRemoteControl_Event__fini(msg);
    return false;
  }
  // response
  if (!cmrosutils__srv__CMRemoteControl_Response__Sequence__init(&msg->response, 0)) {
    cmrosutils__srv__CMRemoteControl_Event__fini(msg);
    return false;
  }
  return true;
}

void
cmrosutils__srv__CMRemoteControl_Event__fini(cmrosutils__srv__CMRemoteControl_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  cmrosutils__srv__CMRemoteControl_Request__Sequence__fini(&msg->request);
  // response
  cmrosutils__srv__CMRemoteControl_Response__Sequence__fini(&msg->response);
}

bool
cmrosutils__srv__CMRemoteControl_Event__are_equal(const cmrosutils__srv__CMRemoteControl_Event * lhs, const cmrosutils__srv__CMRemoteControl_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!cmrosutils__srv__CMRemoteControl_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!cmrosutils__srv__CMRemoteControl_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
cmrosutils__srv__CMRemoteControl_Event__copy(
  const cmrosutils__srv__CMRemoteControl_Event * input,
  cmrosutils__srv__CMRemoteControl_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!cmrosutils__srv__CMRemoteControl_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!cmrosutils__srv__CMRemoteControl_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

cmrosutils__srv__CMRemoteControl_Event *
cmrosutils__srv__CMRemoteControl_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cmrosutils__srv__CMRemoteControl_Event * msg = (cmrosutils__srv__CMRemoteControl_Event *)allocator.allocate(sizeof(cmrosutils__srv__CMRemoteControl_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cmrosutils__srv__CMRemoteControl_Event));
  bool success = cmrosutils__srv__CMRemoteControl_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cmrosutils__srv__CMRemoteControl_Event__destroy(cmrosutils__srv__CMRemoteControl_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cmrosutils__srv__CMRemoteControl_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cmrosutils__srv__CMRemoteControl_Event__Sequence__init(cmrosutils__srv__CMRemoteControl_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cmrosutils__srv__CMRemoteControl_Event * data = NULL;

  if (size) {
    data = (cmrosutils__srv__CMRemoteControl_Event *)allocator.zero_allocate(size, sizeof(cmrosutils__srv__CMRemoteControl_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cmrosutils__srv__CMRemoteControl_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cmrosutils__srv__CMRemoteControl_Event__fini(&data[i - 1]);
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
cmrosutils__srv__CMRemoteControl_Event__Sequence__fini(cmrosutils__srv__CMRemoteControl_Event__Sequence * array)
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
      cmrosutils__srv__CMRemoteControl_Event__fini(&array->data[i]);
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

cmrosutils__srv__CMRemoteControl_Event__Sequence *
cmrosutils__srv__CMRemoteControl_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cmrosutils__srv__CMRemoteControl_Event__Sequence * array = (cmrosutils__srv__CMRemoteControl_Event__Sequence *)allocator.allocate(sizeof(cmrosutils__srv__CMRemoteControl_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cmrosutils__srv__CMRemoteControl_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cmrosutils__srv__CMRemoteControl_Event__Sequence__destroy(cmrosutils__srv__CMRemoteControl_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cmrosutils__srv__CMRemoteControl_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cmrosutils__srv__CMRemoteControl_Event__Sequence__are_equal(const cmrosutils__srv__CMRemoteControl_Event__Sequence * lhs, const cmrosutils__srv__CMRemoteControl_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cmrosutils__srv__CMRemoteControl_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cmrosutils__srv__CMRemoteControl_Event__Sequence__copy(
  const cmrosutils__srv__CMRemoteControl_Event__Sequence * input,
  cmrosutils__srv__CMRemoteControl_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cmrosutils__srv__CMRemoteControl_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cmrosutils__srv__CMRemoteControl_Event * data =
      (cmrosutils__srv__CMRemoteControl_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cmrosutils__srv__CMRemoteControl_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cmrosutils__srv__CMRemoteControl_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cmrosutils__srv__CMRemoteControl_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
