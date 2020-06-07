#include <iostream>

void solve(int n){
  int count = 0;
  while (n > 0){
    int r = n % 2;
    if (r == 1){
      count++;
    }
    n /= 2;
  }
  std::cout << count << std::endl;
}


int main() {
  int n = 6;
  solve(n);
  return 0;
}
