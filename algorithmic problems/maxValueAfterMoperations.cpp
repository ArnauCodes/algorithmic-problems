#include <iostream>

using namespace std;

/* Given an array of size N with all initial values as 0, write a program to perform following M range increment operations as shown below:
 

increment(a, b, k) : Increment values from 'a'
                     to 'b' by 'k'.  

After M operations, calculate the maximum value 
in the array. */

int main() {
  int t;
  cin >> t;
  while (t--){
  int max = 0;
  int n, m;
  cin >> n >> m;
  int arr[n];
  for (int i = 0; i < n; i++){
    arr[i] = 0;
  }
  while (m--){
    int a, b, k;
    cin >> a >> b >> k;
    for (int i = a; i <= b; i++){
      arr[i] += k;
      }
    }
  for (int i = 0; i < n; i++){
    if (arr[i] > max){
      max = arr[i];
      }
    }
  cout << max << endl;
  return 0;
  }
}
