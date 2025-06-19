# Create a static library and build file via main.cpp separately
add_library(Project_NameLib STATIC
# add every .cpp file in src/ except main.cpp
# with files in subfolder with their exact path
# ex:
    # Movie.cpp
    # Movies.cpp
    # utils/ioFunctions.cpp
)

# Add Public headers
target_include_directories(Project_NameLib PUBLIC
    ${CMAKE_SOURCE_DIR}/include
)

# Apply compile options
target_link_libraries(Project_NameLib PUBLIC ProjectOptions ProjectWarnings)

# Create the main application executable
add_executable(Project_NameApp main.cpp)

# Link to library
target_link_libraries(Project_NameApp PRIVATE Project_NameLib)
