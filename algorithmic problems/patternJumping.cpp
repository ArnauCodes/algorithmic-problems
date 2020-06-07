#include <iostream>
#include <cmath>

/* Shaggy has a frog Akki. Akki is very hungry and Shaggy decides to feed it by playing a little game. 
Akki is a special frog which can jump as far as it wants but has a special pattern: He starts at the point 0.

In his first turn, he can make a jump of 1 unit. Now for all consequent turns, 
if the frog is currently at a distance x (from the start), 
his jump will take him x units forward. Given a leaf at a distance N , 
you have to find if the frog can reach that leaf or not.*/

void solve(int nJumps){
  double l = log2(nJumps);
  floor(l) == ceil(l) ? std::cout << "True" << "\n" : std::cout << "False" << "\n";
}

int main() {
  int nJumps = 8;
  solve(nJumps);
  return 0;
}
