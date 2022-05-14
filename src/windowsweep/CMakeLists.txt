#add_subdirectory(../sonarsweep)

add_library(windowsweep windowsweep.cpp)

target_link_libraries(windowsweep PUBLIC sonarinput)
