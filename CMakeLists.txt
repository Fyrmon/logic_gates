cmake_minimum_required(VERSION 3.20)
project(logic_gates LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(lib)
add_subdirectory(tests)

add_executable(lg_app app/main.cpp)
target_link_libraries(lg_app PRIVATE lg_lib)