#include<bits/stdc++.h>
using namespace std;

// for leetcode problem 240: Search a 2D Matrix II

bool searchMatrix(vector<vector<int>>& arr, int k) {
        int n = arr.size();
        int m = arr[0].size();
        int row = 0, col = m-1;
        
        while(row < n && col >=0){
            if(arr[row][col] == k) return true;
            else if(arr[row][col] > k) col--;
            else row++;
        }
        return false;
    }
    //time complexity: O(n+m) and space complexity: O(1)

int main(){
    vector<vector<int>> mat = {{1, 3, 5, 7},
                           {10, 11, 16, 20},
                           {23, 30, 34, 60}};
    bool result = searchMatrix(mat, 11);
    cout << result << endl;
}