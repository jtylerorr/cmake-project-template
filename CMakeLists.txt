cmake_minimum_required(VERSION 3.15)

project(simple_kernel LANGUAGES CXX ASM C)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake ${CMAKE_MODULE_PATH})

option(BUILD_TESTS "Build with tests" ON)

if(BUILD_TESTS)
    message("Building with tests")
    include(CTest)
    include(Catch2)
endif()

add_subdirectory(modules)