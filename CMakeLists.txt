cmake_minimum_required(VERSION 3.5)

project(wau_integer 
        VERSION 0.0.1
        DESCRIPTION "User friendly and fast unbound integer for c++"
        HOMEPAGE_URL https://github.com/loject/wau_integer
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(WAUI_BUILD_EXAMPLES "Build examples" ON)
option(WAUI_BUILD_TESTS "Build tests" ON)

add_library(wau_integer INTERFACE)
target_include_directories(wau_integer INTERFACE include)

if (WAUI_BUILD_EXAMPLES)
    add_subdirectory(examples)
endif()

if (WAUI_BUILD_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif()
