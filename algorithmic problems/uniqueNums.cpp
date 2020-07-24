#include <iostream>

/* In given range, print all numbers having unique digits. e.g. In range 1 to 20 should print all numbers except 11. */
// Keep in mind that 1<=m,n<1000



using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--){
    int m, n;
    cin >> m >> n;
    for (int i = m; i <= n; i++){
      string s = to_string(i);
      if (s[0] != s[s.length() - 1]){
        cout << s;
      }
    }
  }
}
