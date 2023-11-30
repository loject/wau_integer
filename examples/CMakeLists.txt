add_executable(calculator calculator.cpp)
message(${CMAKE_SOURCE_DIR}/include)
# target_include_directories(calculator ${CMAKE_SOURCE_DIR}/include)
include_directories(${CMAKE_SOURCE_DIR}/include)