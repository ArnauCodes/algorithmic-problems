#include <iostream>
#include <cmath>

void solve(int nJumps){
  double l = log2(nJumps);
  floor(l) == ceil(l) ? std::cout << "True" << "\n" : std::cout << "False" << "\n";
}

int main() {
  int nJumps = 8;
  solve(nJumps);
  return 0;
}
