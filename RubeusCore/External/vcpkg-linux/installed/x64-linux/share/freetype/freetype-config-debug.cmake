#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "freetype" for configuration "Debug"
set_property(TARGET freetype APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(freetype PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "${_IMPORT_PREFIX}/debug/lib/libz.a;${_IMPORT_PREFIX}/debug/lib/libbz2d.a;${_IMPORT_PREFIX}/debug/lib/libpng16d.a;${_IMPORT_PREFIX}/debug/lib/libz.a"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/debug/lib/libfreetyped.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS freetype )
list(APPEND _IMPORT_CHECK_FILES_FOR_freetype "${_IMPORT_PREFIX}/debug/lib/libfreetyped.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
