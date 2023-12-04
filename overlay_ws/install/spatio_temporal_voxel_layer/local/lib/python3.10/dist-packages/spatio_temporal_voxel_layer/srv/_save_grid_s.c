// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from spatio_temporal_voxel_layer:srv/SaveGrid.idl
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
#include "spatio_temporal_voxel_layer/srv/detail/save_grid__struct.h"
#include "spatio_temporal_voxel_layer/srv/detail/save_grid__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool spatio_temporal_voxel_layer__srv__save_grid__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("spatio_temporal_voxel_layer.srv._save_grid.SaveGrid_Request", full_classname_dest, 59) == 0);
  }
  spatio_temporal_voxel_layer__srv__SaveGrid_Request * ros_message = _ros_message;
  {  // file_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "file_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->file_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * spatio_temporal_voxel_layer__srv__save_grid__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SaveGrid_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("spatio_temporal_voxel_layer.srv._save_grid");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SaveGrid_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  spatio_temporal_voxel_layer__srv__SaveGrid_Request * ros_message = (spatio_temporal_voxel_layer__srv__SaveGrid_Request *)raw_ros_message;
  {  // file_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->file_name.data,
      strlen(ros_message->file_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "file_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "spatio_temporal_voxel_layer/srv/detail/save_grid__struct.h"
// already included above
// #include "spatio_temporal_voxel_layer/srv/detail/save_grid__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool spatio_temporal_voxel_layer__srv__save_grid__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("spatio_temporal_voxel_layer.srv._save_grid.SaveGrid_Response", full_classname_dest, 60) == 0);
  }
  spatio_temporal_voxel_layer__srv__SaveGrid_Response * ros_message = _ros_message;
  {  // map_size_bytes
    PyObject * field = PyObject_GetAttrString(_pymsg, "map_size_bytes");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->map_size_bytes = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->status = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * spatio_temporal_voxel_layer__srv__save_grid__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SaveGrid_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("spatio_temporal_voxel_layer.srv._save_grid");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SaveGrid_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  spatio_temporal_voxel_layer__srv__SaveGrid_Response * ros_message = (spatio_temporal_voxel_layer__srv__SaveGrid_Response *)raw_ros_message;
  {  // map_size_bytes
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->map_size_bytes);
    {
      int rc = PyObject_SetAttrString(_pymessage, "map_size_bytes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
