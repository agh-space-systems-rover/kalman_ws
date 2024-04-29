# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_rosbridge_library_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED rosbridge_library_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(rosbridge_library_FOUND FALSE)
  elseif(NOT rosbridge_library_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(rosbridge_library_FOUND FALSE)
  endif()
  return()
endif()
set(_rosbridge_library_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rosbridge_library_FIND_QUIETLY)
  message(STATUS "Found rosbridge_library: 1.3.2 (${rosbridge_library_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rosbridge_library' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${rosbridge_library_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rosbridge_library_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${rosbridge_library_DIR}/${_extra}")
endforeach()
