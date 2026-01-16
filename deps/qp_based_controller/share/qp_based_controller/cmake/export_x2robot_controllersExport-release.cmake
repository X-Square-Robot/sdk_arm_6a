#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "qp_based_controller::qp_ik_controller" for configuration "Release"
set_property(TARGET qp_based_controller::qp_ik_controller APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(qp_based_controller::qp_ik_controller PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libqp_ik_controller.so"
  IMPORTED_SONAME_RELEASE "libqp_ik_controller.so"
  )

list(APPEND _cmake_import_check_targets qp_based_controller::qp_ik_controller )
list(APPEND _cmake_import_check_files_for_qp_based_controller::qp_ik_controller "${_IMPORT_PREFIX}/lib/libqp_ik_controller.so" )

# Import target "qp_based_controller::robot_whole_body_control_controller" for configuration "Release"
set_property(TARGET qp_based_controller::robot_whole_body_control_controller APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(qp_based_controller::robot_whole_body_control_controller PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librobot_whole_body_control_controller.so"
  IMPORTED_SONAME_RELEASE "librobot_whole_body_control_controller.so"
  )

list(APPEND _cmake_import_check_targets qp_based_controller::robot_whole_body_control_controller )
list(APPEND _cmake_import_check_files_for_qp_based_controller::robot_whole_body_control_controller "${_IMPORT_PREFIX}/lib/librobot_whole_body_control_controller.so" )

# Import target "qp_based_controller::robot_whole_body_joint_controller" for configuration "Release"
set_property(TARGET qp_based_controller::robot_whole_body_joint_controller APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(qp_based_controller::robot_whole_body_joint_controller PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librobot_whole_body_joint_controller.so"
  IMPORTED_SONAME_RELEASE "librobot_whole_body_joint_controller.so"
  )

list(APPEND _cmake_import_check_targets qp_based_controller::robot_whole_body_joint_controller )
list(APPEND _cmake_import_check_files_for_qp_based_controller::robot_whole_body_joint_controller "${_IMPORT_PREFIX}/lib/librobot_whole_body_joint_controller.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
