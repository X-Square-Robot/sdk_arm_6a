#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "x2robot_socketcan_bridge::socketcan_bridge" for configuration "Release"
set_property(TARGET x2robot_socketcan_bridge::socketcan_bridge APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(x2robot_socketcan_bridge::socketcan_bridge PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libsocketcan_bridge.so"
  IMPORTED_SONAME_RELEASE "libsocketcan_bridge.so"
  )

list(APPEND _cmake_import_check_targets x2robot_socketcan_bridge::socketcan_bridge )
list(APPEND _cmake_import_check_files_for_x2robot_socketcan_bridge::socketcan_bridge "${_IMPORT_PREFIX}/lib/libsocketcan_bridge.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
