# Create a static library and build file via main.cpp separately
add_library(MoviesProjectLib STATIC
    Movie.cpp
    Movies.cpp
    utils/ioFunctions.cpp
)

# Add Public headers
target_include_directories(MoviesProjectLib PUBLIC
    ${CMAKE_SOURCE_DIR}/include
)

# Apply compile options
target_link_libraries(MoviesProjectLib PUBLIC ProjectOptions ProjectWarnings)

# Create the main application executable
add_executable(MoviesProjectApp main.cpp)

# Link to library
target_link_libraries(MoviesProjectApp PRIVATE MoviesProjectLib)
