cmake_minimum_required(VERSION 3.16)
project(actividad_08 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(promedio src/promedio.cpp)
target_include_directories(promedio PUBLIC include)

add_executable(actividad_08 src/main.cpp)
target_link_libraries(actividad_08 PRIVATE promedio)

enable_testing()
add_executable(promedio_tests tests/test_promedio.cpp)
target_link_libraries(promedio_tests PRIVATE promedio)
add_test(NAME promedio_tests COMMAND promedio_tests)

