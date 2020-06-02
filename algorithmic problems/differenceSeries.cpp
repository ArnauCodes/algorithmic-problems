#include <iostream>

/* Given a series of numbers  3,10,21,36 …., and series starting from n=1 , 
find the pattern and output the nth value of above series. */

void solve(int n){
  // Nth term of the series
  std::cout << (n * n * 2) + n << "\n";
}

int main() {
  int n = 1;
  solve(n);
  return 0;
}
