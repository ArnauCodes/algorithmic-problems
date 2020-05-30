#include <iostream>
#include <vector>


void solve(int arr[], int n){
  int currI, iter;
  iter = 0;
  for (int i = 0; i < n; i++){
   currI = arr[i];
   for (int j = i - 1; j < n; j++){
    if (currI == arr[j]) {
        iter++;
      }
    }
  }
  std::cout << iter << "\n";
}

int main() {
  int arr[] = {1, 5, 6, 1, 9, 5, 8, 10, 8, 9}; 
  int n = sizeof(arr) / sizeof(arr[0]); 
  solve(arr, n);
  return 0;
}
