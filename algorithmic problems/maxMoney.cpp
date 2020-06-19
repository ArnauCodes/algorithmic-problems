#include <iostream>

/*Given street of houses (a row of houses), each house having some amount of money kept inside; 
now there is a thief who is going to steal this money but he has a constraint/rule that he cannot 
steal/rob two adjacent houses. Find the maximum money he can rob. */


void solve(int n, int money){
  n % 2 == 0 ? std::cout << (n / 2) * money : std::cout << (n / 2 + 1) * money;
}

int main() {
  int n;
  int money;
  std::cin >> n >> money;
  solve(n, money);
  return 0;
}
