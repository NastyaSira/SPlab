cmake_minimum_required(VERSION 3.27)
project(SPlab4)

set(CMAKE_CXX_STANDARD 17)


add_library(calculator_lib STATIC calculator.cpp calculator.h)


add_executable(SPlab4 main.cpp)
target_link_libraries(SPlab4 PRIVATE calculator_lib)
