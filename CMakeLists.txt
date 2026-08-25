cmake_minimum_required(VERSION 3.16)
project(aed_course LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(algorithms src/algorithms.cpp)
target_include_directories(algorithms PUBLIC include)

add_executable(aed_app src/main.cpp)
target_link_libraries(aed_app PRIVATE algorithms)

enable_testing()
add_executable(algorithms_tests tests/test_algorithms.cpp)
target_link_libraries(algorithms_tests PRIVATE algorithms)
add_test(NAME algorithms_tests COMMAND algorithms_tests)
