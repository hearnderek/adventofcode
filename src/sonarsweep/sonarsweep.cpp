
#include <iostream>
#include <vector>
#include "sonarsweep.h"
#include "sonarinput.h"


void sonarSweep() {

  const std::vector<int> input = getInput();

  // Making the assumption that input has a valid range of 0 - positive int max
  int last = -1;
  int numIncreased = 0;
  int numDecreased = 0;

  for (int x : input) {
    
    if(last == -1)
      std::cout << x << " (N/A - no previous measurement)\n";
    else if (x == last)
      std::cout << x << " (no change)\n";
    else if (x > last) {
      ++numIncreased;
      std::cout << x << " (increased)\n";
    }
    else { // x < last 
      std::cout << x << " (decreased)\n";
      ++numDecreased;
    }

    last = x;
  }

  std::cout << "times increased: " << numIncreased << "\n";
  std::cout << "times decreased: " << numDecreased << "\n";

  // How quickly the depth increases

}

