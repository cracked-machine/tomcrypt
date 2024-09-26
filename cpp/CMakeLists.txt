cmake_minimum_required(VERSION 3.15)
project(ecdsa)

add_compile_options("-g")

add_executable(ecdsa 
    ${CMAKE_SOURCE_DIR}/test.cpp
    ${CMAKE_SOURCE_DIR}/utils.cpp
)

target_include_directories(ecdsa PUBLIC
    ${CMAKE_SOURCE_DIR}/include
)

find_package(PkgConfig REQUIRED)
pkg_search_module(TOMCRYPT REQUIRED IMPORTED_TARGET  tomcrypt)
target_link_libraries(ecdsa PUBLIC PkgConfig::TOMCRYPT)
