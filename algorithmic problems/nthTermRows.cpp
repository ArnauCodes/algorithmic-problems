#include <iostream>

/* Given a series as shown below:

               1  2
            3  4  5  6
          7  8  9 10 11 12
      13 14 15 16 17 18 19 20
    ..........................
    ............................
             (so on)

You are given a number N, you need to write a program to find the 
sum of all elements in the N-th row of above series. */


int solve(int n){
  int sum = 0;
  // Nth terms for left sequences (1, 3, 7, 13) and for right sequences (2, 6, 12, 20)
  for (int i = (n*n)- n + 1; i < (n*n) + n + 1; i++){
    sum += i;
  }
  std::cout << sum << std::endl;
}

int main() {
  int n = 84;
  std::cout << solve(n);
  return 0;
}
