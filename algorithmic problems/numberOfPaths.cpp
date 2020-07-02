#include <iostream>

/* The problem is to count all the possible paths from top left to bottom right of a MxN matrix with the constraints 
that from each cell you can either move to right or down. */


int numPaths(int c, int r){
  if (c == 0 || r == 0){
    return 0;
  }
  if (c == 1 && r == 1){
    return 1;
  }
  else {
    return numPaths(c - 1, r) + numPaths(c, r - 1);
  }
}

int main() {
  int c, r;
  std::cin >> c >> r;
  std::cout << numPaths(c, r) << std::endl;
  return 0;
}
