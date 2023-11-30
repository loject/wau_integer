include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
    waui_tests
    add_tests.cpp
    sub_tests.cpp
    mul_tests.cpp
    div_tests.cpp
    other_tests.cpp
)
add_test(waui_gtests waui_tests)
target_link_libraries(
    waui_tests
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(waui_tests)
