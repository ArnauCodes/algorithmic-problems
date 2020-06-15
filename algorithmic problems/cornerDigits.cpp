#include <iostream>
#include <string>

/* Given a number N and the task is to print the first and last digit of N. */

void solve(int n){
  std::string sN = std::to_string(n);
  int l = sN.length();
  if (n < 10){
    std::cout << sN[0];
  } else {
  std::cout << sN[0] << "," << sN[l - 1] << "\n";
  }
}

int main() {
  int n = -213;
  solve(n);
  return 0;
}

