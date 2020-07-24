#include <iostream>
#include <set>

using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--){
    int n, sum = 0;
    cin >> n;
    int arr[n];
    set<int> ans;
    for (int i = 0; i < n; i++){
      cin >> arr[i];
      ans.insert(arr[i]);
    }
    for (int eles: ans){
      sum += eles;
    }
    cout << sum;
  }
	return 0;
