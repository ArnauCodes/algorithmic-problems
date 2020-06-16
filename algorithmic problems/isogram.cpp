#include <iostream>
#include <set>


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
  std::cout << solve(s);
}
