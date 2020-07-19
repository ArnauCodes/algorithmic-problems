#include <iostream>

using namespace std;

/* Given an array of even size, task is to find minimum value that can be added to an element so that array become balanced. 
An array is balanced if the sum of the left half of the array elements is equal to the sum of right half. */

int main() {
  int t; 
  cin >> t;
  while(t--){
    int n, fisrstHalf, secondHalf;
    fisrstHalf = 0;
    secondHalf = 0;
    cin >> n;
    if (n % 2 != 0){
      cout << "Even-sized arrays only" << endl;
      return 0;
    }
    int arr[n];
    for (int i = 0; i < n / 2; i++){
      cin >> arr[i];
      fisrstHalf += arr[i];
    }
    for (int i = n / 2; i < n; i++){
      cin >> arr[i];
      secondHalf += arr[i];
    }
    if (fisrstHalf > secondHalf){
      cout << fisrstHalf - secondHalf << endl;
    } else {
      cout << secondHalf - fisrstHalf << endl;
    }
  }
}
