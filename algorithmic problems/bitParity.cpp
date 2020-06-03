#include <iostream>

void solve(unsigned int n){
  unsigned int count = 0;
  while(n){
    count += n & 1;
    n >>=1;
  }
  if (count % 2 != 0){
    std::cout << "Odd" << "\n";
  } else {
    std::cout << "Even" << "\n";
  }
}

int main() {
  unsigned int n = 13;
  solve(n);
  return 0;
}
