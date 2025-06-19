# Minimum CMake version required
cmake_minimum_required(VERSION 3.16)

# Define the project name (no spaces - that's invalid) and language
project(Project_Name VERSION 1.0 LANGUAGES CXX)

# Set C++ standard and compile options
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# for LSP and clang tools
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Output binary in bin/ ,inside build directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Include custom cmake modules
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMake")
# Optional, for warning and settings
include(CompileOptions)

# Add subdirectories (all modules)
add_subdirectory(src)
