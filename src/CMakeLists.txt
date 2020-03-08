file(GLOB_RECURSE files "${pattern}")

foreach(file ${files})
    get_filename_component(filename "${file}" NAME_WE)

    set(SOURCES ${file})

    set(BINARY ${filename}_run)
    message("${BINARY}")
    add_executable(${BINARY} ${SOURCES})

    set(BINARY ${filename}_lib)
    message("${BINARY}")
    add_library(${BINARY} STATIC ${SOURCES})
endforeach(file ${files})
