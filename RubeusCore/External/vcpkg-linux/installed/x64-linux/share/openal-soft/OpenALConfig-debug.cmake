#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "OpenAL::OpenAL" for configuration "Debug"
set_property(TARGET OpenAL::OpenAL APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(OpenAL::OpenAL PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/debug/lib/libopenal.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS OpenAL::OpenAL )
list(APPEND _IMPORT_CHECK_FILES_FOR_OpenAL::OpenAL "${_IMPORT_PREFIX}/debug/lib/libopenal.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
