cmake_minimum_required(VERSION 3.10)
project(CalculatorProject)

add_library(calculator STATIC src/calculator.cpp)

target_include_directories(calculator PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_executable(calculator_app src/main.cpp)

target_link_libraries(calculator_app calculator)
