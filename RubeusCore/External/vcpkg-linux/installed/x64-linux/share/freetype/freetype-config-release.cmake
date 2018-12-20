#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "freetype" for configuration "Release"
set_property(TARGET freetype APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(freetype PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "${_IMPORT_PREFIX}/lib/libz.a;${_IMPORT_PREFIX}/lib/libbz2.a;${_IMPORT_PREFIX}/share/png/../../lib/libpng16.a;${_IMPORT_PREFIX}/lib/libz.a"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libfreetype.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS freetype )
list(APPEND _IMPORT_CHECK_FILES_FOR_freetype "${_IMPORT_PREFIX}/lib/libfreetype.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
