#include <iostream>

/* You are given two numbers A and B. Write a program to count number 
of bits needed to be flipped to convert A to B. */

int solve(int a, int b){
  int ans = a ^ b, count = 0;
  return __builtin_popcount(ans);
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << solve(a, b) << std::endl;
  return 0;
}
