#include <iostream>
#include <vector>

/* Given a number N and a bit number K, check if Kth bit of N is set or not. A bit is called set if it is 1. Position of set bit '1' 
should be indexed starting with 0 from RSB side in binary representation of the number. Consider N = 4(100):  0th bit = 0, 1st bit = 0, 2nd bit = 1. */

bool solve(int n, int k){
  std::vector<int> bins;
  int rem;
  while (n != 0){
    rem = n % 2;
    n /= 2;
    bins.push_back(rem);
  }
  for (int i : bins){
    if (bins[k] == 1){
      return 1;
    }
    return 0;
  } 
}

int main() {
  int n = 4;
  int k = 0;
  std::cout << solve(n, k) << std::endl;
  return 0;
}
