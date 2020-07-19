#include <iostream>
using namespace std;

/* A number is sparse if in its binary representation it does not have more than two conecutive 1's */

int main() {
 int t;
 cin >> t;
 while (t--){
   int n;
   cin >> n;
   if ((n & (n << 1)) == 0){
     cout << 1 << endl;
   } else {
     cout << 0 << endl;
   }
 }
 return 0;
}
