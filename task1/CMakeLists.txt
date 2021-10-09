# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(Ts LANGUAGES CXX)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

set(BINARY_DIR "${CMAKE_BINARY_DIR}")

# Source files list
set(SOURCE_FILES
    # Headers
    color.h
	point.h
	circle.h
    triangle.h
    rectangle.h
    figure.h
    vector.h
	
    # Sources
	color.cpp
	point.cpp
	circle.cpp
    triangle.cpp
    rectangle.cpp
    figure.cpp
	vector.cpp
	main.cpp
)
add_executable(Ts ${SOURCE_FILES})