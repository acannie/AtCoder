cmake_minimum_required(VERSION 3.10)
project(atcoder CXX)
enable_testing()

set(CMAKE_CXX_FLAGS "-std=c++14 -Wall")
set(CMAKE_CXX_FLAGS_DEBUG "-g3 -O0 -pg")
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -s")

if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/contest")
    file(READ contest dir)	
    message("visits only in ${dir}")	
else()	
    set(dir ".")	
endif()	
set(pattern "${dir}/*.cpp")
message("${pattern}")

include_directories(src)

### Library
add_subdirectory(lib)

file(GLOB_RECURSE files "src/${pattern}")
foreach(file ${files})
    get_filename_component(filename "${file}" NAME_WE)

    set(SOURCES ${file})

    set(BINARY ${filename}_lib)
    message("${BINARY}")
    add_library(${BINARY} STATIC ${SOURCES})

    set(BINARY ${filename})
    message("${BINARY}")
    add_executable(${BINARY} ${SOURCES})
    target_compile_definitions(${BINARY} PUBLIC WIMAIN)
endforeach(file ${files})

file(GLOB_RECURSE files "tst/${pattern}")
foreach(file ${files})
    get_filename_component(filename "${file}" NAME_WE)
    string(REPLACE "_tst" "" filename ${filename})

    set(SOURCES ${file})

    set(BINARY ${filename}_tst)
    message("${BINARY}")
    add_executable(${BINARY} ${SOURCES})
    add_test(NAME ${BINARY} COMMAND ${BINARY})

    set(LIBRARY ${filename}_lib)
    target_link_libraries(${BINARY} PUBLIC ${LIBRARY} gtest)
endforeach(file ${files})