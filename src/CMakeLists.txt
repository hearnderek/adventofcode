project(adventofcode)
cmake_minimum_required(VERSION 3.0)
set (CMAKE_CXX_STANDARD 17)


add_subdirectory(sonarsweep)
add_subdirectory(windowsweep)

add_executable(adventofcode main.cpp)
# set_property(TARGET adventofcode PROPERTY CXX_STANDARD 17)

target_link_libraries(adventofcode PUBLIC 
                      sonarsweep
                      windowsweep
                      )

target_include_directories(adventofcode PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_SOURCE_DIR}/sonarsweep"
                           "${PROJECT_SOURCE_DIR}/windowsweep"
                           )

