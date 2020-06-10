#include <iostream>
#include <string>
#include <cmath>

// Given a number, the task is to set all odd bits of a number.


void bToD(std::string sB){
  int dec, p, len = sB.length();
  dec = 0;
  p = 1;
  for (int i = len - 1; i >= 0; i--){
    if (sB[i] == '1'){
      dec += p;
    }
    p *= 2;
  }
  std::cout << dec << std::endl;
}


void solve(int n){
  std::string sB;
  unsigned long long int B_Number = 0; 
  int cnt = 0; 
  while (n != 0) { 
    int rem = n % 2; 
    unsigned long long int c = pow(10, cnt); 
    B_Number += rem * c; 
    n /= 2; 
      cnt++; 
    } 
  sB = std::to_string(B_Number);

  for (int i = 0; i <= sB.length(); i+=2){
   if (sB[i] == '0'){
     sB[i] = '1';
   }
  }
  bToD(sB);
}

int main() {
  int n = 20;
  solve(n);
  return 0;
}
