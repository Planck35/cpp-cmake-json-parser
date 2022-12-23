cmake_minimum_required(VERSION 3.5)

project(cmake-cpp-json VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(config.h.in config.h)

add_executable(example example.cpp)

find_package(jsoncpp CONFIG REQUIRED)
target_include_directories(example PUBLIC "${PROJECT_BINARY_DIR}")
target_link_libraries(example PRIVATE jsoncpp_lib jsoncpp_object JsonCpp::JsonCpp)
