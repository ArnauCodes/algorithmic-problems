#include <iostream>
#include <string>
#include <cmath>

/* Given a number N. The task is to find the length of the longest consecutive 1s in its binary representation. */

void solve(int n){
  std::string sB;
  unsigned long long int B_Number = 0; 
  int cnt = 0, rCnt, max; 
  rCnt = 0;
  max = 0;
  while (n != 0) { 
    int rem = n % 2; 
    unsigned long long int c = pow(10, cnt); 
    B_Number += rem * c; 
    n /= 2; 
    cnt++; 
  } 
  sB = std::to_string(B_Number);
  for (int i = 0; i < sB.length(); i++){
    if (sB[i] == '1'){
      rCnt++;
    } else {
      if (rCnt > max){
       max = rCnt;
      }
      rCnt = 0;
    }
  }
  std::cout << max << std::endl;
}

int main() {
  int n = 2;
  solve(n);
  return 0;
}
