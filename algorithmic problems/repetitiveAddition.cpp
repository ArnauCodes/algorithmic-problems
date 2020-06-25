#include <iostream>

/* Given a non-negative integer num, repeatedly add all its digits until the result has only one digit. */

int findDig(int n){
  if (n < 10){
    return n;
  } else {
    return findDig(n % 9);
  }
}

int main() {
  int n;
  std::cin >> n;
  std::cout << findDig(n) << std::endl;
  return 0;
}
