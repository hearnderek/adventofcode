
#include <iostream>
#include <string>

#include "sonarsweep/sonarsweep.h"
#include "windowsweep/windowsweep.h"

int
main(int argc, char * argv[]) {
  if(argc == 1){
    std::cout << "Hello Advent of Code 2021!\n";
    return 0;
  }
  const std::string command = argv[1];
  std::cout << argc << " -- switching on " << command << "\n";
  if(command == "SonarSweep") {
    std::cout << "Sonar Sweep\n";

    sonarSweep();
    
    return 0;
  } else if(command == "WindowSweep") {
    std::cout << "Window Sweep\n";

    windowSweep();
    
    return 0;
  } else {
    std::cout << "Try running one of the solutions:\n";
    std::cout << "    1: SonarSweep\n";
    std::cout << "    2: WindowSweep\n";
  }

  return 0;
}
