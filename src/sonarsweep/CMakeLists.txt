add_library(sonarinput sonarinput.cpp)

add_library(sonarsweep sonarsweep.cpp)

target_link_libraries(sonarsweep PUBLIC sonarinput)
