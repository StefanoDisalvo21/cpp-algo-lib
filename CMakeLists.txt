cmake_minimum_required(VERSION 3.14)
project(algorithms-library)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add your include directory to search path
include_directories(include)

# Collect all .cpp files in src/
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Build your algorithm library
add_library(algolib ${SOURCES})

# Enable testing
enable_testing()

# Fetch GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

# Collect all test files
file(GLOB TEST_SOURCES "tests/*.cpp")

# Build the test executable
add_executable(algolib_tests ${TEST_SOURCES})

# Link the test executable with GoogleTest and your library
target_link_libraries(algolib_tests algolib gtest_main)

# Enable automatic test discovery
include(GoogleTest)
gtest_discover_tests(algolib_tests)
