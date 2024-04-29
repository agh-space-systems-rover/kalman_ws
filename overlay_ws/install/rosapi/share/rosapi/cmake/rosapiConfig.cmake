# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_rosapi_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED rosapi_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(rosapi_FOUND FALSE)
  elseif(NOT rosapi_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(rosapi_FOUND FALSE)
  endif()
  return()
endif()
set(_rosapi_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rosapi_FIND_QUIETLY)
  message(STATUS "Found rosapi: 1.3.2 (${rosapi_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rosapi' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${rosapi_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rosapi_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${rosapi_DIR}/${_extra}")
endforeach()
