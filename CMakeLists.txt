cmake_minimum_required(VERSION 3.10)
project(atcoder CXX)

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

add_subdirectory(src)
add_subdirectory(lib)
add_subdirectory(tst)
