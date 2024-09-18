cmake_minimum_required(VERSION 3.10)
project(hello_world)

set(CMAKE_CXX_STANDARD 11)

SET(SOURCE
    ${PROJECT_SOURCE_DIR}/src/main.cpp
    ${PROJECT_SOURCE_DIR}/src/my_header.cpp
)

# Create a target for the executable
add_executable(${PROJECT_NAME} ${SOURCE})

# Use target_include_directories to add the include directory
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/include)
