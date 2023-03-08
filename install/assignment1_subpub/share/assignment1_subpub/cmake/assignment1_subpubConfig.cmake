# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_assignment1_subpub_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED assignment1_subpub_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(assignment1_subpub_FOUND FALSE)
  elseif(NOT assignment1_subpub_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(assignment1_subpub_FOUND FALSE)
  endif()
  return()
endif()
set(_assignment1_subpub_CONFIG_INCLUDED TRUE)

# output package information
if(NOT assignment1_subpub_FIND_QUIETLY)
  message(STATUS "Found assignment1_subpub: 0.0.0 (${assignment1_subpub_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'assignment1_subpub' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${assignment1_subpub_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(assignment1_subpub_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${assignment1_subpub_DIR}/${_extra}")
endforeach()
