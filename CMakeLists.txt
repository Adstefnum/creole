cmake_minimum_required(VERSION 3.25)

project(Creole
  VERSION
    1.0
  LANGUAGES
    CXX
)

# Get all source files in the src/ directory
file(GLOB SOURCES "creole/*.cpp")

# Create the executable from the source files
add_executable(my_executable ${SOURCES})

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)

file(GLOB TEST_SOURCES "tests/*.cpp")

# Create the executable from the source files
add_executable(tests ${TEST_SOURCES})