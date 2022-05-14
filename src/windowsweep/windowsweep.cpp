
#include <iostream>
#include <vector>

#include "windowsweep.h"
#include "../sonarsweep/sonarinput.h"



// This is a big function and I don't want it at the top of the file
const int WINDOW_SIZE = 3;
const int WINDOW_ARRAY_SIZE = WINDOW_SIZE + 1;

void windowSweep() {

  const std::vector<int> input = getInput();

  // Making the assumption that input has a valid range of 0 - positive int max
  int windowptr = 0;
  int toDelPtr = 1;
  int prevWindowSum = -1;
  int windowSum = 0;
  int window[WINDOW_ARRAY_SIZE];
  // I could do memset or similiar method to make this faster
  for(int i = 0; i < WINDOW_ARRAY_SIZE; ++i)
    window[i] = 0;

  int numIncreased = 0;
  int numDecreased = 0;
  int count = 0;

  for (int x : input) {
    ++count;
    windowSum += x - window[toDelPtr];

    if(count >= WINDOW_SIZE) {
      if(prevWindowSum == -1) {
        std::cout << windowSum << " (N/A - no previous measurement)\n";
      }
      else if (windowSum == prevWindowSum)
        std::cout << windowSum << " (no change)\n";
      else if (windowSum > prevWindowSum) {
        ++numIncreased;
        std::cout << windowSum << " (increased)\n";
      }
      else { // windowSum < prevWindowSum 
        std::cout << windowSum << " (decreased)\n";
        ++numDecreased;
      }

      prevWindowSum = windowSum;
    }

    window[windowptr] = x;
    windowptr = toDelPtr;
    toDelPtr = (toDelPtr + 1) % WINDOW_ARRAY_SIZE;
  }

  std::cout << "times increased: " << numIncreased << "\n";
  std::cout << "times decreased: " << numDecreased << "\n";

  // How quickly the depth increases

}
