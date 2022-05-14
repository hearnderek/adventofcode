project(adventofcode)
cmake_minimum_required(VERSION 3.0)


add_subdirectory(sonarsweep)

add_executable(adventofcode main.cpp)

target_link_libraries(adventofcode PUBLIC sonarsweep)

target_include_directories(adventofcode PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_SOURCE_DIR}/sonarsweep"
                           )

