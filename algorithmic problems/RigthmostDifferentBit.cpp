#include <iostream>
#include <string>
#include <algorithm>

/* Given two numbers M and N. The task is to find the position of rightmost 
different bit in binary representation of numbers. */

// NOTE: binary representation is not all my code as I had some small problems with some numbers
void solve(int n, int m){
  int remainder, rBin, i = 1, mI = 1, mBin, mRemainder, count;
  count = 0;
  rBin = 0;
  std::string tRbin, stringM, stringN;

  if (n == m){
    std::cout << 0 << "\n";
  } else {


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

  tRbin = std::to_string(rBin);
  stringN = std::to_string(rBin);
  stringM = std::to_string(mBin);


  for (int i = stringN.length(); i > 0; i--){
    if (stringN[i] == stringM[i]){
      count++;
    } else {
      break;
    }
  }
std::cout << count << std::endl;
  }
}




// N has got to be > M
int main() {
 int n = 887;
 int m = 887;
 solve(n, m);
 return 0;
}
