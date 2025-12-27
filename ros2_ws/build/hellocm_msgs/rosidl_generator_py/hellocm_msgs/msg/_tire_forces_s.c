// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from hellocm_msgs:msg/TireForces.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "hellocm_msgs/msg/detail/tire_forces__struct.h"
#include "hellocm_msgs/msg/detail/tire_forces__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool hellocm_msgs__msg__tire_forces__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("hellocm_msgs.msg._tire_forces.TireForces", full_classname_dest, 40) == 0);
  }
  hellocm_msgs__msg__TireForces * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // tire_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "tire_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tire_index = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fx
    PyObject * field = PyObject_GetAttrString(_pymsg, "fx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fy
    PyObject * field = PyObject_GetAttrString(_pymsg, "fy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fy = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fz
    PyObject * field = PyObject_GetAttrString(_pymsg, "fz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fz = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mx
    PyObject * field = PyObject_GetAttrString(_pymsg, "mx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // my
    PyObject * field = PyObject_GetAttrString(_pymsg, "my");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->my = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mz
    PyObject * field = PyObject_GetAttrString(_pymsg, "mz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mz = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // slip_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "slip_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->slip_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // long_slip
    PyObject * field = PyObject_GetAttrString(_pymsg, "long_slip");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->long_slip = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // turn_slip
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_slip");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->turn_slip = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // inclination_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "inclination_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->inclination_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // effective_radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "effective_radius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->effective_radius = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // belt_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "belt_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->belt_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // contact_point_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "contact_point_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->contact_point_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // contact_point_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "contact_point_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->contact_point_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // contact_point_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "contact_point_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->contact_point_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mu_road
    PyObject * field = PyObject_GetAttrString(_pymsg, "mu_road");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mu_road = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // on_road
    PyObject * field = PyObject_GetAttrString(_pymsg, "on_road");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->on_road = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rim_rotation_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "rim_rotation_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rim_rotation_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angular_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angular_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * hellocm_msgs__msg__tire_forces__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TireForces */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("hellocm_msgs.msg._tire_forces");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TireForces");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  hellocm_msgs__msg__TireForces * ros_message = (hellocm_msgs__msg__TireForces *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tire_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tire_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tire_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // my
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->my);
    {
      int rc = PyObject_SetAttrString(_pymessage, "my", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // slip_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->slip_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "slip_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // long_slip
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->long_slip);
    {
      int rc = PyObject_SetAttrString(_pymessage, "long_slip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_slip
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->turn_slip);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_slip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inclination_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->inclination_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inclination_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // effective_radius
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->effective_radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "effective_radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // belt_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->belt_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "belt_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // contact_point_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->contact_point_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "contact_point_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // contact_point_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->contact_point_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "contact_point_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // contact_point_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->contact_point_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "contact_point_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mu_road
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mu_road);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mu_road", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // on_road
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->on_road ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "on_road", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rim_rotation_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rim_rotation_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rim_rotation_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angular_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angular_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
