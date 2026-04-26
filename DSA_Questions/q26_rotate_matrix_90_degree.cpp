#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> v(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                v[j][n-1-i]=matrix[i][j];
            }
        }
        return v;
    }

int main() {
    vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};
    rotate(v);
}

