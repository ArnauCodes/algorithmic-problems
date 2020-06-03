#include <iostream>

/* Given an unsigned integer, find it's parity. 
Parity of a number refers to whether it contains an odd or even number of 1-bits. The number has “odd parity”, 
if it contains odd number of 1-bits and is “even parity” if it contains even number of 1-bits */

void solve(unsigned int n){
  unsigned int count = 0;
  while(n != 0){
    if (n % 2 == 1){
      count++;
    }
    n = n / 2;
  } 
  if (count % 2 != 0){
    std::cout << "Odd" << std::endl;
  } else {
    std::cout << "Even" << std::endl;
  }
}

int main() {
  unsigned int n = 13;
  solve(n);
  return 0;
}
