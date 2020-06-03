#include <iostream>
#include <algorithm>
#include <string>

/* Given two string of equal length i.e s1 and s2, you need to find how many time the corresponding position 
in two strings hold exactly the same characters and if a string contains any uppercase character convert 
that into lowercase and then find the count. */

//  My first "good" problem with strings

void solve(std::string s1, std::string s2){
  int count = 0;
  transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
  for (int i = 0; i < s1.length(); i++){
    if (s1[i] == s2[i]){
      count++;
    }
  }
  std::cout << count << std::endl;
}


int main(){
  std::string s1 = "EdMzn";
  std::string s2 = "KlYEh";
  solve(s1, s2);
  return 0;
}
