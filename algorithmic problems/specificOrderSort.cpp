#include <iostream>
#include <vector>
#include <algorithm>

/* Given an array A of positive integers. Your task is to sort them in such a way that the first part of the array contains odd numbers sorted in descending order, 
rest portion contains even numbers sorted in ascending order. */

#define ll long long

using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--){
    ll n; 
    cin >> n;
    vector<ll> odds, evens;
    for (int i = 1; i <= n; i++){
      cin >> i;
    }
    for (int i = 0; i <= n; i++){
      if (i % 2 != 0){
        odds.push_back(i);
      } else {
        evens.push_back(i);
      }
    }
    sort(odds.begin(), odds.end());
    sort(evens.begin(), evens.end());
    for (int i = odds.size() - 1; i >= 0; i--){
      cout << odds[i];
    }
    for (int i = evens.size() - 1; i >= 0; i--){
      cout << evens[i];
    }
  }
  return 0;
}
