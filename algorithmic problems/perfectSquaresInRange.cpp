#include <iostream>

/* Given two given numbers a and b where 1<=a<=b, find the number of perfect squares between a and b (a and b inclusive). */


// I came up two different ways to solve this problem. Here you got both of them
using namespace std;

// Solution 1
int main() {
  int t; 
  cin >> t;
  while(t--){
    int a, b, count = 0;
    cin >> a >> b;
    for (int i = 0; i <= b; i++){
      if (i * i >= a && i * i <= b) count++;
    }
    cout << count;
  }
}

// Solution 2


#include <iostream>
#include <cmath>



using namespace std;

int main() {
  int t; 
  cin >> t;
  while(t--){
    int a, b, count = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++){
      if (ceil(sqrt(i)) == floor(sqrt(i))) count++;
    }
    cout << count;
  }
}
