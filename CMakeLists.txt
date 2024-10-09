cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Add Google Test
add_subdirectory(path/to/googletest)

# Add your source files
add_executable(MyProject main.cpp)

# Link Google Test libraries
target_link_libraries(MyProject gtest gtest_main)