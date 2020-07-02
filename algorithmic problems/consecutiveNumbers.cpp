#include <iostream>
#include <vector>

/* Given an integer n, the task is to find whether n can be written as sum of three consecutive integer. */

using std::cin, std::cout, std::endl;

void solve(int n){
  std::vector<int> v;
  for (int i = 1; i <= n; i++){
    v.push_back(i);
  }
  for (int i = 0; i < v.size(); i++){
    if (v[i] + v[i + 1] + v[i + 2] == n){
      cout << v[i] << ", " << v[i + 1] << ", " << v[i + 2] << endl;
      break;
    }
  }
}

int main() {
  int n;
  cin >> n;
  solve(n);
  return 0;
}
