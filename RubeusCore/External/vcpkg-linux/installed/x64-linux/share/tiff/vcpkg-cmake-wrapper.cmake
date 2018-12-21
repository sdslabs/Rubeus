_find_package(${ARGS})

if("static" STREQUAL "static")
    set(TIFF_EXTRA_LIBRARIES)
    if(CMAKE_SYSTEM_NAME STREQUAL "Windows")
        find_package(LibLZMA)
        list(APPEND TIFF_EXTRA_LIBRARIES ${LIBLZMA_LIBRARIES})
    endif()

    find_package(JPEG)
    list(APPEND TIFF_EXTRA_LIBRARIES ${JPEG_LIBRARIES})

    find_package(ZLIB)

    if(TARGET TIFF::TIFF)
        set_property(TARGET TIFF::TIFF APPEND PROPERTY INTERFACE_LINK_LIBRARIES ${TIFF_EXTRA_LIBRARIES} ZLIB::ZLIB)
    endif()
    if(TIFF_LIBRARIES)
        list(APPEND TIFF_LIBRARIES ${TIFF_EXTRA_LIBRARIES} ${ZLIB_LIBRARIES})
        if(UNIX)
            list(APPEND TIFF_LIBRARIES m)
        endif()
    endif()
endif()
