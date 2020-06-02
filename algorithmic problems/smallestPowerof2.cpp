#include <iostream>
#include <cmath>
#include <vector>


/* Given a number N, Write a program to find a number which is greater than or equal to N 
and is a smallest power of 2. */

void solve(int n){
  std::vector<int> pows;
  for (int i = 1; i <= log2(n) + 1; i++){
    pows.push_back(pow(2, i));
  }
  for (int i = 0; i < pows.size(); i++){
    if (n == pows[i]){
      std::cout << n << std::endl;
      break;
    } else if (pows[i] >= n){
      std::cout << pows[i] << std::endl;
      break;
    }
  }
}

int main() {
  int n = 2;
  solve(n);
  return 0;
