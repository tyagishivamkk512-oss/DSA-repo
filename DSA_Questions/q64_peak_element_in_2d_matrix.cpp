#include <bits/stdc++.h>
using namespace std;
  
      int maxElement(vector<vector<int>>& arr, int col) {
          int n = arr.size();
          int max_val = INT_MIN;
          int index = -1;
  
          for (int i = 0; i < n; i++) {
              if (arr[i][col] > max_val) {
                  max_val = arr[i][col];
                  index = i;
              }
          }
          return index;
      }
  
      vector<int> findPeakGrid(vector<vector<int>>& arr) {
          int n = arr.size();     
          int m = arr[0].size();  
  
          int low = 0;           
          int high = m - 1;      
  
          while (low <= high) {
              int mid = (low + high) / 2;
  
              int row = maxElement(arr, mid);
  
              int left = mid - 1 >= 0 ? arr[row][mid - 1] : INT_MIN;
              int right = mid + 1 < m ? arr[row][mid + 1] : INT_MIN;
  
              if (arr[row][mid] > left && arr[row][mid] > right) {
                  return {row, mid};
              } 
              else if (left > arr[row][mid]) {
                  high = mid - 1;
              } 
              else {
                  low = mid + 1;
              }
          }
  
          return {-1, -1};
      }
      // time complexity: O(n*logm) and space complexity: O(1)

  
  int main() {
      vector<vector<int>> mat = {
          {4, 2, 5, 1, 4, 5},
          {2, 9, 3, 2, 3, 2},
          {1, 7, 6, 0, 1, 3},
          {3, 6, 2, 3, 7, 2}
      };
    
      vector<int> peak = findPeakGrid(mat);
      cout << "The row of peak element is " << peak[0]
           << " and column of the peak element is " << peak[1] << endl;
  
      return 0;
  }