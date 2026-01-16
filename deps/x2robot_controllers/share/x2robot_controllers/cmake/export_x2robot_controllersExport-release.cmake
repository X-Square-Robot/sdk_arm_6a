#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "x2robot_controllers::MeanFilter" for configuration "Release"
set_property(TARGET x2robot_controllers::MeanFilter APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(x2robot_controllers::MeanFilter PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMeanFilter.so"
  IMPORTED_SONAME_RELEASE "libMeanFilter.so"
  )

list(APPEND _cmake_import_check_targets x2robot_controllers::MeanFilter )
list(APPEND _cmake_import_check_files_for_x2robot_controllers::MeanFilter "${_IMPORT_PREFIX}/lib/libMeanFilter.so" )

# Import target "x2robot_controllers::RobotTypeUtils" for configuration "Release"
set_property(TARGET x2robot_controllers::RobotTypeUtils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(x2robot_controllers::RobotTypeUtils PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libRobotTypeUtils.so"
  IMPORTED_SONAME_RELEASE "libRobotTypeUtils.so"
  )

list(APPEND _cmake_import_check_targets x2robot_controllers::RobotTypeUtils )
list(APPEND _cmake_import_check_files_for_x2robot_controllers::RobotTypeUtils "${_IMPORT_PREFIX}/lib/libRobotTypeUtils.so" )

# Import target "x2robot_controllers::InputShaper" for configuration "Release"
set_property(TARGET x2robot_controllers::InputShaper APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(x2robot_controllers::InputShaper PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libInputShaper.so"
  IMPORTED_SONAME_RELEASE "libInputShaper.so"
  )

list(APPEND _cmake_import_check_targets x2robot_controllers::InputShaper )
list(APPEND _cmake_import_check_files_for_x2robot_controllers::InputShaper "${_IMPORT_PREFIX}/lib/libInputShaper.so" )

# Import target "x2robot_controllers::JointLimitProtection" for configuration "Release"
set_property(TARGET x2robot_controllers::JointLimitProtection APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(x2robot_controllers::JointLimitProtection PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libJointLimitProtection.so"
  IMPORTED_SONAME_RELEASE "libJointLimitProtection.so"
  )

list(APPEND _cmake_import_check_targets x2robot_controllers::JointLimitProtection )
list(APPEND _cmake_import_check_files_for_x2robot_controllers::JointLimitProtection "${_IMPORT_PREFIX}/lib/libJointLimitProtection.so" )

# Import target "x2robot_controllers::gravity_compensate_controller" for configuration "Release"
set_property(TARGET x2robot_controllers::gravity_compensate_controller APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(x2robot_controllers::gravity_compensate_controller PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libgravity_compensate_controller.so"
  IMPORTED_SONAME_RELEASE "libgravity_compensate_controller.so"
  )

list(APPEND _cmake_import_check_targets x2robot_controllers::gravity_compensate_controller )
list(APPEND _cmake_import_check_files_for_x2robot_controllers::gravity_compensate_controller "${_IMPORT_PREFIX}/lib/libgravity_compensate_controller.so" )

# Import target "x2robot_controllers::endpose_broadcaster" for configuration "Release"
set_property(TARGET x2robot_controllers::endpose_broadcaster APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(x2robot_controllers::endpose_broadcaster PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libendpose_broadcaster.so"
  IMPORTED_SONAME_RELEASE "libendpose_broadcaster.so"
  )

list(APPEND _cmake_import_check_targets x2robot_controllers::endpose_broadcaster )
list(APPEND _cmake_import_check_files_for_x2robot_controllers::endpose_broadcaster "${_IMPORT_PREFIX}/lib/libendpose_broadcaster.so" )

# Import target "x2robot_controllers::joint_impedance_controller" for configuration "Release"
set_property(TARGET x2robot_controllers::joint_impedance_controller APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(x2robot_controllers::joint_impedance_controller PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libjoint_impedance_controller.so"
  IMPORTED_SONAME_RELEASE "libjoint_impedance_controller.so"
  )

list(APPEND _cmake_import_check_targets x2robot_controllers::joint_impedance_controller )
list(APPEND _cmake_import_check_files_for_x2robot_controllers::joint_impedance_controller "${_IMPORT_PREFIX}/lib/libjoint_impedance_controller.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
