#include <iostream>

/* Geek love's to drink cold coffee after coding for long hour's. One fine day Geek went to his favourite coffee shop in the town and asked for a 
cup of cold coffee. The shopkeeper told him that he is their lucky customer and had an offer for the Geek. The offer was that for an amount of N 
they will fill Geek's cup with N units of cold coffee, the offer doesn't over yet. After consuming initial N units of coffee the shopkeeper will 
again refill his cup with half the amount of coffee that Geek consumed in previous refill, and will keep on refilling his cup till the amount to 
refill becomes nil i.e. 0 (Assume Geek can consume infinite amount of coffee and shop also has infinite amount coffee). Now Geek is curious to know 
that how many units of coffee will Geek get for Mth refill. Being Geek's friend help him out with his problem.    */

int main() {
  int t;
  std::cin >> t;
  while(t--){
    int n, m;
    std::cin >> n >> m;
    m--;
    while(m--){
      n /= 2;
    }
    std::cout << n << std::endl;
  }
  return 0;
}
