#include<bits/stdc++.h>
using namespace std;

// brute force approach

 vector<int> rowWithMax1s_brute(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int count = 0,max = 0, row = 0;
        vector <int> ans;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(mat[i][j]==1) count++;
            }
            if(count > max){
                max = count;
                row = i;
            }
            count = 0;
        }
        return {row, max};
    }
// time complexity: O(n*m) and space complexity: O(1)

// optimal approach

int check(vector <int> &v){
        int low = 0, high = v.size()-1;
        int count = 0;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(v[mid] == 1){
                count = v.size() - mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return count;
    }
    
    int rowWithMax1s_optimal(vector<vector<int>> &arr) {
        int n = arr.size();
        int m = arr[0].size();
        int row = -1;
        int maxcount = 0;
        
        for(int i = 0;i<n;i++){
            int count = check(arr[i]);
            if(count > maxcount){
                maxcount = count;
                row = i;
            }
        }
        return row;
    }

// time complexity: O(n*logm) and space complexity: O(1)

int main(){
    vector<vector<int>> mat = {{0, 0, 0, 1},
                                {0, 1, 1, 1},
                                {1, 1, 1, 1},
                                {0, 0, 0, 0}};
    vector<int> ans = rowWithMax1s_brute(mat);
}