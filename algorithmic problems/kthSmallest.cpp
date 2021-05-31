#include <iostream>
#include <vector>
#include <algorithm>

/* Given an array arr[] and a number K where K is smaller than size of array, 
the task is to find the Kth smallest element in the given array. 
It is given that all array elements are distinct.
 */

using namespace std;

int kth(vector<int> v, int k){
  return v[k-1];
}


int main() {
  int n, k;
  vector<int> v;
  cin >> k;
  cin >> n;
  for (int i = 1; i <= n; i++){
    int a;
    cin >> a;
    v.push_back(a);
  }
  sort(v.begin(),v.end());
  cout << kth(v, k) << endl;

  return 0;
}
