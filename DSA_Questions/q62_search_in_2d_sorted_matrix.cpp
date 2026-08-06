#include<bits/stdc++.h>
using namespace std;

// brute force approach

bool searchMatrix_brute(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(matrix[i][j] == target) return true;
            }
        }
        return false;
    }

    // time complexity: O(n*m) and space complexity: O(1)


// optimal approach

    bool check(vector<int>&v, int k){
        int low = 0, high = v.size()-1;
        while(low <= high){
            int half = low + (high-low)/2;
            if(v[half] == k) return true;
            else if(v[half] > k) high = half -1;
            else low = half + 1;
        }
        return false;
    }

    bool searchMatrix_optimal(vector<vector<int>>& arr, int k) {
        int low = 0, high = arr.size()-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(k <= arr[mid][arr[0].size()-1] && k >= arr[mid][0]){
                return check(arr[mid], k);
            }
            else if(k > arr[mid][arr[0].size()-1]) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }   

// time complexity: O(logn + logm) and space complexity: O(1)

int main(){
    vector<vector<int>> mat = {{1, 3, 5, 7},
                           {10, 11, 16, 20},
                           {23, 30, 34, 60}};
    bool result = searchMatrix_optimal(mat, 11);
    cout << result << endl;
}