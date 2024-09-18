cmake_minimum_required(VERSION 3.10)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 11)

# Create a target for the executable
add_executable(hello_world src/main.cpp src/my_header.cpp)

# Use target_include_directories to add the include directory
target_include_directories(hello_world PRIVATE ${CMAKE_SOURCE_DIR}/include)
