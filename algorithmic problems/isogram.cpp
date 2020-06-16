#include <iostream>
#include <set>

/* Given a string S of lowercase alphabets, check if it is isogram or not. 
An Isogram is a string in which no letter occurs more than once. */ 

bool solve(std::string s){
  std::set<char> c;
  int size, l = s.length();
  for (int i = 0; i <= l; i++){
    c.insert(s[i]);
  }
  size = c.size();
  if (l == size){
    return 0;
  }
  return 1;
}

int main() {
  std::string s = "machine";
  std::cout << solve(s) << "\n";
}
