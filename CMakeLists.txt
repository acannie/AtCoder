cmake_minimum_required(VERSION 2.8)
project(abs CXX)

set(CMAKE_CXX_FLAGS "-std=c++14 -Wall")
set(CMAKE_CXX_FLAGS_DEBUG "-g3 -O0 -pg")
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -s")

file(GLOB_RECURSE files "src/*.cpp")

foreach(file ${files})
    get_filename_component(filename "${file}" NAME_WE)
    message("${filename}")
    add_executable(${filename} ${file})
endforeach(file ${files})