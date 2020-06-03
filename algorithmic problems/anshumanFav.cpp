#include <iostream>

/* A number is Anshuman’s favourite if it is either the sum or the difference of the integer 5. 
(5+5, 5+5+5, 5-5,5-5-5+5+5…..) */ 

// Very easy problem

void solve(int n){
 if (n % 5 == 0){
   std::cout << "YES" << "\n";
 } else {
   std::cout << "NO" << "\n";
 }
}

int main() {
  int n = 55;
  solve(n);
  return 0;
}
