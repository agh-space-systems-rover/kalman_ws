#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rosbridge_test_msgs::rosbridge_test_msgs__rosidl_typesupport_introspection_cpp" for configuration "Release"
set_property(TARGET rosbridge_test_msgs::rosbridge_test_msgs__rosidl_typesupport_introspection_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rosbridge_test_msgs::rosbridge_test_msgs__rosidl_typesupport_introspection_cpp PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librosbridge_test_msgs__rosidl_typesupport_introspection_cpp.so"
  IMPORTED_SONAME_RELEASE "librosbridge_test_msgs__rosidl_typesupport_introspection_cpp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rosbridge_test_msgs::rosbridge_test_msgs__rosidl_typesupport_introspection_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_rosbridge_test_msgs::rosbridge_test_msgs__rosidl_typesupport_introspection_cpp "${_IMPORT_PREFIX}/lib/librosbridge_test_msgs__rosidl_typesupport_introspection_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
