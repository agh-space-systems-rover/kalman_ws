// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rosbridge_test_msgs:srv/TestRequestAndResponse.idl
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
#include "rosbridge_test_msgs/srv/detail/test_request_and_response__struct.h"
#include "rosbridge_test_msgs/srv/detail/test_request_and_response__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rosbridge_test_msgs__srv__test_request_and_response__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[82];
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
    assert(strncmp("rosbridge_test_msgs.srv._test_request_and_response.TestRequestAndResponse_Request", full_classname_dest, 81) == 0);
  }
  rosbridge_test_msgs__srv__TestRequestAndResponse_Request * ros_message = _ros_message;
  {  // data
    PyObject * field = PyObject_GetAttrString(_pymsg, "data");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->data = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rosbridge_test_msgs__srv__test_request_and_response__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TestRequestAndResponse_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rosbridge_test_msgs.srv._test_request_and_response");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TestRequestAndResponse_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rosbridge_test_msgs__srv__TestRequestAndResponse_Request * ros_message = (rosbridge_test_msgs__srv__TestRequestAndResponse_Request *)raw_ros_message;
  {  // data
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->data);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data", field);
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
// #include "rosbridge_test_msgs/srv/detail/test_request_and_response__struct.h"
// already included above
// #include "rosbridge_test_msgs/srv/detail/test_request_and_response__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rosbridge_test_msgs__srv__test_request_and_response__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[83];
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
    assert(strncmp("rosbridge_test_msgs.srv._test_request_and_response.TestRequestAndResponse_Response", full_classname_dest, 82) == 0);
  }
  rosbridge_test_msgs__srv__TestRequestAndResponse_Response * ros_message = _ros_message;
  {  // data
    PyObject * field = PyObject_GetAttrString(_pymsg, "data");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->data = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rosbridge_test_msgs__srv__test_request_and_response__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TestRequestAndResponse_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rosbridge_test_msgs.srv._test_request_and_response");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TestRequestAndResponse_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rosbridge_test_msgs__srv__TestRequestAndResponse_Response * ros_message = (rosbridge_test_msgs__srv__TestRequestAndResponse_Response *)raw_ros_message;
  {  // data
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->data);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
