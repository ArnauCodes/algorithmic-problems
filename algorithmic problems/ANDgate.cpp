#include <iostream>

int solve(int n){
  while (n != 0){
    if(n % 2 == 1){
      return 1;
    } else {
      return 0;
    }
    n = n / 2;
  }
}


int main() {
  int n = 10;
  std::cout << solve(n) << std::endl;
}
