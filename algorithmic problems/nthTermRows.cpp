#include <iostream>
using namespace std;

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
  for (int i = (n*n)- n + 1; i < (n*n) + n + 1; i++){
    sum += i;
  }
  cout << sum << endl;
}

int main() {
  int n = 2;
	return 0;
}
