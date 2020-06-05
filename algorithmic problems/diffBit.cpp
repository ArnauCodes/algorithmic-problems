#include <iostream>
#include <string>
#include <vector>

/* Given two numbers M and N. The task is to find the position of rightmost different bit in binary 
representation of numbers. */

void solve(int n, int m){
  int remainder, rBin, i = 1, mI = 1, mBin, mRemainder, count;
  count = 0;
  rBin = 0;
  std::string s1, s2;

  while (n != 0){
    remainder = n % 2;
    n /= 2;
    rBin += remainder*i;
    i *= 10;
  }

  while (m != 0){
    mRemainder = m % 2;
    m /= 2;
    mBin += mRemainder*mI;
    mI *= 10;
  }
  s1 = std::to_string(rBin);
  s2 = std::to_string(mBin);
  for (int l = 0; l < s1.length(); l++){
    if (s1[l] != s2[l]){
      count++;
    }
  }
 std::cout << count << std::endl;
}





int main() {
 int n = 9;
 int m = 10;
 solve(n, m);
 return 0;
}
