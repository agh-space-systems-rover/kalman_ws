// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rosbridge_test_msgs:srv/TestMultipleResponseFields.idl
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
#include "rosbridge_test_msgs/srv/detail/test_multiple_response_fields__struct.h"
#include "rosbridge_test_msgs/srv/detail/test_multiple_response_fields__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rosbridge_test_msgs__srv__test_multiple_response_fields__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[90];
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
    assert(strncmp("rosbridge_test_msgs.srv._test_multiple_response_fields.TestMultipleResponseFields_Request", full_classname_dest, 89) == 0);
  }
  rosbridge_test_msgs__srv__TestMultipleResponseFields_Request * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rosbridge_test_msgs__srv__test_multiple_response_fields__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TestMultipleResponseFields_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rosbridge_test_msgs.srv._test_multiple_response_fields");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TestMultipleResponseFields_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  (void)raw_ros_message;

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
// #include "rosbridge_test_msgs/srv/detail/test_multiple_response_fields__struct.h"
// already included above
// #include "rosbridge_test_msgs/srv/detail/test_multiple_response_fields__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rosbridge_test_msgs__srv__test_multiple_response_fields__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[91];
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
    assert(strncmp("rosbridge_test_msgs.srv._test_multiple_response_fields.TestMultipleResponseFields_Response", full_classname_dest, 90) == 0);
  }
  rosbridge_test_msgs__srv__TestMultipleResponseFields_Response * ros_message = _ros_message;
  {  // int_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "int_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->int_value = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // float_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "float_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->float_value = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // string
    PyObject * field = PyObject_GetAttrString(_pymsg, "string");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->string, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // bool_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "bool_value");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bool_value = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rosbridge_test_msgs__srv__test_multiple_response_fields__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TestMultipleResponseFields_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rosbridge_test_msgs.srv._test_multiple_response_fields");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TestMultipleResponseFields_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rosbridge_test_msgs__srv__TestMultipleResponseFields_Response * ros_message = (rosbridge_test_msgs__srv__TestMultipleResponseFields_Response *)raw_ros_message;
  {  // int_value
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->int_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // float_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->float_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "float_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // string
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->string.data,
      strlen(ros_message->string.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "string", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bool_value
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bool_value ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bool_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
