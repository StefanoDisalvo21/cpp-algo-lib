cmake_minimum_required(VERSION 3.14)
project(algorithms-library)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add your include directory (for headers)
include_directories(include)

# Enable testing
enable_testing()

# Fetch GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

# Collect all test source files (even if they're the only real source files for now)
file(GLOB TEST_SOURCES "tests/*.cpp")

# Build test executable (no algolib library needed yet)
add_executable(algolib_tests ${TEST_SOURCES})

# Link only GoogleTest now (no src/*.cpp exists yet)
target_link_libraries(algolib_tests gtest_main)

# Enable automatic test discovery
include(GoogleTest)
gtest_discover_tests(algolib_tests)
