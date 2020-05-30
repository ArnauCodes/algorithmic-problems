#include <iostream>
#include <vector>
#include <algorithm>


int main() {
  std::vector<int> mode = { 1, 4, 1, 2, 7, 1, 2, 5, 3, 6};
   if(mode.size() <= 1){
      throw;
    } 
  int Tmode;
  sort(mode.begin(), mode.end());
  for (int i = 0; i < mode.size(); ++i){
      if (mode[i] == mode[i + 1]){
        Tmode = mode[i - 1];
    }
  }
  std::cout << Tmode << std::endl;
  return 0;
}
