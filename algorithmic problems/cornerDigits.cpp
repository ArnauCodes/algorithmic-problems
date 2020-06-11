#include <iostream>
#include <string>

/* Given a number N and the task is to print the first and last digit of N. */

void solve(int n){
  std::string sN = std::to_string(n);
  int l = sN.length();
  std::cout << sN[0] << "," << sN[l - 1] << "\n";
}

int main() {
  int n = 423423040;
  solve(n);
  return 0;
}
