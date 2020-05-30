#include <iostream>
#include <vector>
#include <cmath>

// This program checks the all the powers of K in the array

void solve(){
  int K; 
  std::vector<int> nums = {2, 4, 8, 81, 64, 1024};
  std::vector<int> kPows;
  int max = nums[0];
  for (int i = 1; i < nums.size(); i++){
    if(nums[i] > max){
      max = nums[i];
    }
  }
  std::cout << "K value : ";
  std::cin >> K;
  if (K == 0){
    throw;
    }
  for (int i = 0; i <= max; i++){
    kPows.push_back(pow(K, i));
  }
  for (int i = 1; i < kPows.size(); i++){
     for (int j = 0; j < nums.size(); j++){
       if(kPows[i] == nums[j]){
       std:: cout << "{"<< nums[j] << "}";
        break;
       }
     }
  }
}

int main(){
  solve();
  return 0;
}
