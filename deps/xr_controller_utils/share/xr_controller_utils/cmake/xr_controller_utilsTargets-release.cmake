#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "MeanFilter" for configuration "Release"
set_property(TARGET MeanFilter APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MeanFilter PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMeanFilter.so"
  IMPORTED_SONAME_RELEASE "libMeanFilter.so"
  )

list(APPEND _cmake_import_check_targets MeanFilter )
list(APPEND _cmake_import_check_files_for_MeanFilter "${_IMPORT_PREFIX}/lib/libMeanFilter.so" )

# Import target "JointLimitProtection" for configuration "Release"
set_property(TARGET JointLimitProtection APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(JointLimitProtection PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libJointLimitProtection.so"
  IMPORTED_SONAME_RELEASE "libJointLimitProtection.so"
  )

list(APPEND _cmake_import_check_targets JointLimitProtection )
list(APPEND _cmake_import_check_files_for_JointLimitProtection "${_IMPORT_PREFIX}/lib/libJointLimitProtection.so" )

# Import target "RobotTypeUtils" for configuration "Release"
set_property(TARGET RobotTypeUtils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(RobotTypeUtils PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libRobotTypeUtils.so"
  IMPORTED_SONAME_RELEASE "libRobotTypeUtils.so"
  )

list(APPEND _cmake_import_check_targets RobotTypeUtils )
list(APPEND _cmake_import_check_files_for_RobotTypeUtils "${_IMPORT_PREFIX}/lib/libRobotTypeUtils.so" )

# Import target "InputShaper" for configuration "Release"
set_property(TARGET InputShaper APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(InputShaper PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libInputShaper.so"
  IMPORTED_SONAME_RELEASE "libInputShaper.so"
  )

list(APPEND _cmake_import_check_targets InputShaper )
list(APPEND _cmake_import_check_files_for_InputShaper "${_IMPORT_PREFIX}/lib/libInputShaper.so" )

# Import target "SE3LowPassFilter" for configuration "Release"
set_property(TARGET SE3LowPassFilter APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(SE3LowPassFilter PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libSE3LowPassFilter.so"
  IMPORTED_SONAME_RELEASE "libSE3LowPassFilter.so"
  )

list(APPEND _cmake_import_check_targets SE3LowPassFilter )
list(APPEND _cmake_import_check_files_for_SE3LowPassFilter "${_IMPORT_PREFIX}/lib/libSE3LowPassFilter.so" )

# Import target "AdaptiveSE3Filter" for configuration "Release"
set_property(TARGET AdaptiveSE3Filter APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(AdaptiveSE3Filter PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libAdaptiveSE3Filter.so"
  IMPORTED_SONAME_RELEASE "libAdaptiveSE3Filter.so"
  )

list(APPEND _cmake_import_check_targets AdaptiveSE3Filter )
list(APPEND _cmake_import_check_files_for_AdaptiveSE3Filter "${_IMPORT_PREFIX}/lib/libAdaptiveSE3Filter.so" )

# Import target "GeneralizedMomentumObserver" for configuration "Release"
set_property(TARGET GeneralizedMomentumObserver APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(GeneralizedMomentumObserver PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libGeneralizedMomentumObserver.so"
  IMPORTED_SONAME_RELEASE "libGeneralizedMomentumObserver.so"
  )

list(APPEND _cmake_import_check_targets GeneralizedMomentumObserver )
list(APPEND _cmake_import_check_files_for_GeneralizedMomentumObserver "${_IMPORT_PREFIX}/lib/libGeneralizedMomentumObserver.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
