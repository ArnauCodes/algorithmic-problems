#include <iostream>
#include <vector>
#include <numeric>

/* This program checks all the pairs within a vector and checks for the max LCM among all of them*/

void solve(int arr[], int n){
  int maxLCM;
  std::vector <int> lcms;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      if (arr[i] == arr[j]){
        break;
      }
      lcms.push_back(std::lcm(arr[i], arr[j]));
    }
  }
  maxLCM = lcms[0];
  for (int i = 0; i < lcms.size(); i++){
    if (lcms[i] > maxLCM){
      maxLCM = lcms[i];
    }
  }
  std::cout << maxLCM << std::endl;
}

int main() {
  int arr[] = {12, 15, 34, 234, 94};
  int n = sizeof(arr) / sizeof(arr[0]);
  solve(arr, n);
  return 0;
}
