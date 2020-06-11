#include <iostream>
#include <vector>

/* Given a binary array A[] of size N. The task is to arrange the array in increasing order. */

void solve(std::vector<int> binaryArray){
  int n = binaryArray.size(), z = 0, o = 0;
  for (int i = 1; i < n; i++){
   binaryArray[i] == 0 ? z++ : o++;
  } 
  for (int i = 0; i < z; i++){
    binaryArray[i] = 0;
  }
  for (int i = z; i < binaryArray.size(); i++){
    binaryArray[i] = 1;
  }
  for(int p = 0; p  < binaryArray.size(); p++){
    std::cout << binaryArray[p];
  }
}

int main() {
  std::vector<int> binaryArray = {1,1,1,1,1,1,0};
  solve(binaryArray);
  return 0;
}
