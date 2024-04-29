#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rosbridge_test_msgs::rosbridge_test_msgs__rosidl_typesupport_c" for configuration "Release"
set_property(TARGET rosbridge_test_msgs::rosbridge_test_msgs__rosidl_typesupport_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rosbridge_test_msgs::rosbridge_test_msgs__rosidl_typesupport_c PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "rosidl_runtime_c::rosidl_runtime_c;rosidl_typesupport_c::rosidl_typesupport_c"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librosbridge_test_msgs__rosidl_typesupport_c.so"
  IMPORTED_SONAME_RELEASE "librosbridge_test_msgs__rosidl_typesupport_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rosbridge_test_msgs::rosbridge_test_msgs__rosidl_typesupport_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_rosbridge_test_msgs::rosbridge_test_msgs__rosidl_typesupport_c "${_IMPORT_PREFIX}/lib/librosbridge_test_msgs__rosidl_typesupport_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
