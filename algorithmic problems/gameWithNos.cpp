#include <iostream>

using namespace std;

/*  You are given an array A[] , you have to construct a new array A2[].
The values in A2[] are obtained by doing Xor of consecutive elements in array. */

int main() {
  int n;
  cin >> n;
  int A[n];
  cin >> A[0];
  for (int i = 1; i < n; i++){
    cin >> A[i];
    A[i - 1] ^= A[i];
  }
  for (int i : A){
    cout << i;
  }
}
