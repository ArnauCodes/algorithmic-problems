#include <iostream>

/* Given three distinct numbers, find the number with value in middle (Try to do it with minimum comparisons). */

using std::cin, std::cout, std::endl;

int main() {
  int t;
  cin >> t;
  while (t--){
   int arr[3];
   for (int i = 0; i < 3; i++){
     cin >> arr[i];
   }
   cout << arr[1] << endl;
  }
  return 0;
}
