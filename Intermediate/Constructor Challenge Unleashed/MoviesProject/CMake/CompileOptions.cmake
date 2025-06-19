# Interface libraries for options
add_library(ProjectWarnings INTERFACE)
target_compile_options(ProjectWarnings INTERFACE -Wall -Wextra -Wpedantic)
add_library(ProjectOptions INTERFACE)
target_compile_features(ProjectOptions INTERFACE cxx_std_20)
