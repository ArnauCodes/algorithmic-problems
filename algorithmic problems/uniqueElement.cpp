#include <iostream>

/* Given an array which contains all elements occurring k times, but one occurs only once. Find that unique element. */

using std::cin, std::cout, std::endl;

void solve(int arr[], int n){
  for (int i = 0; i < n; i++){
    if (arr[i] != arr[i + 1]){
      cout << arr[i + 1] << "\n";
      break;
    }
  }
}

int main() {
  int n;
  cin >> n;
  int arr[] = {2, 2, 2, 10, 2};
  solve(arr, n);
  return 0;
}
