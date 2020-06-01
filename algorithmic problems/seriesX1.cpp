#include <iostream>
#include <cmath>

using namespace std;

/* Given a series of numbers 2, 10, 30, 68, 130.., Identify the pattern in the series and 
help to identify the integers at other indices. Indices are starting from 1. */

int solve(int n){
  // Nth term of the sequence (n*n*n) + n
  return pow(n, 3) + n;
}

int main() {
  int n = 1;
  cout << solve(n) << "\n";
  return 0;
}
