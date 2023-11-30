# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.15)

# Set the project name and the languages used
project(EmployeesPolymorphism CXX)

# Set the C++ standard to use
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the Header Files directory to the compiler's search path
include_directories(Header Files)

# Collect all the source files and header files into variables
file(GLOB_RECURSE SOURCES "Source Files/*.cpp")
file(GLOB_RECURSE HEADERS "Header Files/*.hpp")

# Create an executable target from the source files and header files
add_executable(${PROJECT_NAME} main.cpp ${SOURCES} ${HEADERS})

# Add the Header Files directory to the target's include directories property
target_include_directories(${PROJECT_NAME} PRIVATE Header Files)