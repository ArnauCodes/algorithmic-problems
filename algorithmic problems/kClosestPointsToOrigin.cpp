#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

/* We have a list of points on the plane.  Find the K closest points to the origin (0, 0). 
Just when I uploaded this I came up with a O(nlogn) answer I might upload in the future 
it might work deleting the biggest size - k elements from the vector. */ 




void kClosest(std::vector<std::vector<int>> points, int K){
  std::vector<double> toEvaluate;
  int n = points.size();
  if(K > n || K < 1) throw;
  for (int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if (points[i][j + 1] != 0){
       toEvaluate.push_back(sqrt(pow(points[i][j], 2) + pow(points[i][j + 1], 2)));
      }
    }
  }
  std::sort(toEvaluate.begin(), toEvaluate.end());
  for (int p = 0; p < K; p++){
    for (int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
        if (points[i][j + 1] != 0 && sqrt(pow(points[i][j], 2) + pow(points[i][j + 1], 2)) == toEvaluate[p]){
          std::cout << "{" << points[i][j] << ", " << points[i][j + 1] << "}"<< std::endl;
        }
      }
    }
  }
}

// X, Y cords
int main() {
  std::vector<std::vector<int>> pointsToChoose = {{3, 3}, {5, -1}, {-2, 4}};
  int K = 2; 
  kClosest(pointsToChoose, K);
  return 0;
}
