get_target_property(qmake_executable Qt6::qmake IMPORTED_LOCATION)
get_filename_component(qt_bin_dir "${qmake_executable}" DIRECTORY)

find_program(WINDEPLOYQT_EXECUTABLE windeployqt HINTS "${qt_bin_dir}")
if (NOT WINDEPLOYQT_EXECUTABLE)
    message(FATAL_ERROR "windeployqt not found")
endif()

function(windeployqt target)
    if (CMAKE_BUILD_TYPE STREQUAL "Debug")
        set(WINDEPLOYQT_MODE --debug)
    else()
        set(WINDEPLOYQT_MODE --release)
    endif()

    add_custom_command(TARGET ${target} POST_BUILD
        COMMAND "${CMAKE_COMMAND}" -E
            env PATH="${qt_bin_dir}" "${WINDEPLOYQT_EXECUTABLE}"
                ${WINDEPLOYQT_MODE}
                --verbose 0
                --no-compiler-runtime
                --no-opengl-sw
                --include-plugins qsqlite
                \"$<TARGET_FILE:${target}>\"
    )

    set(CMAKE_INSTALL_UCRT_LIBRARIES TRUE)
    include(InstallRequiredSystemLibraries)
    foreach(lib ${CMAKE_INSTALL_SYSTEM_RUNTIME_LIBS})
        get_filename_component(filename "${lib}" NAME)
        add_custom_command(TARGET ${target} POST_BUILD
            COMMAND "${CMAKE_COMMAND}" -E
                copy_if_different "${lib}" \"$<TARGET_FILE_DIR:${target}>\"
            COMMENT "Copying ${filename}"
        )
    endforeach()
endfunction()

mark_as_advanced(WINDEPLOYQT_EXECUTABLE)