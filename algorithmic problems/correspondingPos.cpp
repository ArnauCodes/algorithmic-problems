#include <iostream>
#include <algorithm>
#include <string>

/* Given two string of equal length i.e s1 and s2, you need to find how many time the corresponding 
position in two strings hold exactly the same characters and if a string contains any uppercase character 
convert that into lowercase and then find the count. */

// My first "good" programme messing with strings

void solve(std::string s1, std::string s2){
  int count, iters1;
  count = 0;
  transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
  for (int i = 0; i <= s1.length(); i++){
    for (int j = 0; j <= s2.length(); j++){
      if (s1.substr(i, j) == s2.substr(j, i)){
        count++;
        break;
      }
    }
  }
  std::cout << count << std::endl;
}


int main(){
  std::string s1 = "aaab";
  std::string s2 = "aaac";
  solve(s1, s2);
  return 0;
}
