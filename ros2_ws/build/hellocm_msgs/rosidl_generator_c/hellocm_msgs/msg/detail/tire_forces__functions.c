// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hellocm_msgs:msg/TireForces.idl
// generated code does not contain a copyright notice
#include "hellocm_msgs/msg/detail/tire_forces__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
hellocm_msgs__msg__TireForces__init(hellocm_msgs__msg__TireForces * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    hellocm_msgs__msg__TireForces__fini(msg);
    return false;
  }
  // tire_index
  // fx
  // fy
  // fz
  // mx
  // my
  // mz
  // slip_angle
  // long_slip
  // turn_slip
  // inclination_angle
  // effective_radius
  // belt_velocity
  // contact_point_x
  // contact_point_y
  // contact_point_z
  // mu_road
  // on_road
  // rim_rotation_speed
  // angular_velocity
  return true;
}

void
hellocm_msgs__msg__TireForces__fini(hellocm_msgs__msg__TireForces * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tire_index
  // fx
  // fy
  // fz
  // mx
  // my
  // mz
  // slip_angle
  // long_slip
  // turn_slip
  // inclination_angle
  // effective_radius
  // belt_velocity
  // contact_point_x
  // contact_point_y
  // contact_point_z
  // mu_road
  // on_road
  // rim_rotation_speed
  // angular_velocity
}

bool
hellocm_msgs__msg__TireForces__are_equal(const hellocm_msgs__msg__TireForces * lhs, const hellocm_msgs__msg__TireForces * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // tire_index
  if (lhs->tire_index != rhs->tire_index) {
    return false;
  }
  // fx
  if (lhs->fx != rhs->fx) {
    return false;
  }
  // fy
  if (lhs->fy != rhs->fy) {
    return false;
  }
  // fz
  if (lhs->fz != rhs->fz) {
    return false;
  }
  // mx
  if (lhs->mx != rhs->mx) {
    return false;
  }
  // my
  if (lhs->my != rhs->my) {
    return false;
  }
  // mz
  if (lhs->mz != rhs->mz) {
    return false;
  }
  // slip_angle
  if (lhs->slip_angle != rhs->slip_angle) {
    return false;
  }
  // long_slip
  if (lhs->long_slip != rhs->long_slip) {
    return false;
  }
  // turn_slip
  if (lhs->turn_slip != rhs->turn_slip) {
    return false;
  }
  // inclination_angle
  if (lhs->inclination_angle != rhs->inclination_angle) {
    return false;
  }
  // effective_radius
  if (lhs->effective_radius != rhs->effective_radius) {
    return false;
  }
  // belt_velocity
  if (lhs->belt_velocity != rhs->belt_velocity) {
    return false;
  }
  // contact_point_x
  if (lhs->contact_point_x != rhs->contact_point_x) {
    return false;
  }
  // contact_point_y
  if (lhs->contact_point_y != rhs->contact_point_y) {
    return false;
  }
  // contact_point_z
  if (lhs->contact_point_z != rhs->contact_point_z) {
    return false;
  }
  // mu_road
  if (lhs->mu_road != rhs->mu_road) {
    return false;
  }
  // on_road
  if (lhs->on_road != rhs->on_road) {
    return false;
  }
  // rim_rotation_speed
  if (lhs->rim_rotation_speed != rhs->rim_rotation_speed) {
    return false;
  }
  // angular_velocity
  if (lhs->angular_velocity != rhs->angular_velocity) {
    return false;
  }
  return true;
}

bool
hellocm_msgs__msg__TireForces__copy(
  const hellocm_msgs__msg__TireForces * input,
  hellocm_msgs__msg__TireForces * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // tire_index
  output->tire_index = input->tire_index;
  // fx
  output->fx = input->fx;
  // fy
  output->fy = input->fy;
  // fz
  output->fz = input->fz;
  // mx
  output->mx = input->mx;
  // my
  output->my = input->my;
  // mz
  output->mz = input->mz;
  // slip_angle
  output->slip_angle = input->slip_angle;
  // long_slip
  output->long_slip = input->long_slip;
  // turn_slip
  output->turn_slip = input->turn_slip;
  // inclination_angle
  output->inclination_angle = input->inclination_angle;
  // effective_radius
  output->effective_radius = input->effective_radius;
  // belt_velocity
  output->belt_velocity = input->belt_velocity;
  // contact_point_x
  output->contact_point_x = input->contact_point_x;
  // contact_point_y
  output->contact_point_y = input->contact_point_y;
  // contact_point_z
  output->contact_point_z = input->contact_point_z;
  // mu_road
  output->mu_road = input->mu_road;
  // on_road
  output->on_road = input->on_road;
  // rim_rotation_speed
  output->rim_rotation_speed = input->rim_rotation_speed;
  // angular_velocity
  output->angular_velocity = input->angular_velocity;
  return true;
}

hellocm_msgs__msg__TireForces *
hellocm_msgs__msg__TireForces__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hellocm_msgs__msg__TireForces * msg = (hellocm_msgs__msg__TireForces *)allocator.allocate(sizeof(hellocm_msgs__msg__TireForces), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hellocm_msgs__msg__TireForces));
  bool success = hellocm_msgs__msg__TireForces__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hellocm_msgs__msg__TireForces__destroy(hellocm_msgs__msg__TireForces * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hellocm_msgs__msg__TireForces__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hellocm_msgs__msg__TireForces__Sequence__init(hellocm_msgs__msg__TireForces__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hellocm_msgs__msg__TireForces * data = NULL;

  if (size) {
    data = (hellocm_msgs__msg__TireForces *)allocator.zero_allocate(size, sizeof(hellocm_msgs__msg__TireForces), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hellocm_msgs__msg__TireForces__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hellocm_msgs__msg__TireForces__fini(&data[i - 1]);
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
hellocm_msgs__msg__TireForces__Sequence__fini(hellocm_msgs__msg__TireForces__Sequence * array)
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
      hellocm_msgs__msg__TireForces__fini(&array->data[i]);
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

hellocm_msgs__msg__TireForces__Sequence *
hellocm_msgs__msg__TireForces__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hellocm_msgs__msg__TireForces__Sequence * array = (hellocm_msgs__msg__TireForces__Sequence *)allocator.allocate(sizeof(hellocm_msgs__msg__TireForces__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hellocm_msgs__msg__TireForces__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hellocm_msgs__msg__TireForces__Sequence__destroy(hellocm_msgs__msg__TireForces__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hellocm_msgs__msg__TireForces__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hellocm_msgs__msg__TireForces__Sequence__are_equal(const hellocm_msgs__msg__TireForces__Sequence * lhs, const hellocm_msgs__msg__TireForces__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hellocm_msgs__msg__TireForces__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hellocm_msgs__msg__TireForces__Sequence__copy(
  const hellocm_msgs__msg__TireForces__Sequence * input,
  hellocm_msgs__msg__TireForces__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hellocm_msgs__msg__TireForces);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hellocm_msgs__msg__TireForces * data =
      (hellocm_msgs__msg__TireForces *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hellocm_msgs__msg__TireForces__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hellocm_msgs__msg__TireForces__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hellocm_msgs__msg__TireForces__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
