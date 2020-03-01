cmake_minimum_required(VERSION 3.10)
project(atcoder CXX)

set(CMAKE_CXX_FLAGS "-std=c++14 -Wall")
set(CMAKE_CXX_FLAGS_DEBUG "-g3 -O0 -pg")
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -s")

include_directories(src)

add_subdirectory(src)
add_subdirectory(lib)
add_subdirectory(tst)
