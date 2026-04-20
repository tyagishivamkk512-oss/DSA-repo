#include<bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>>& v) {
        int n = v.size();
        int m = v[0].size();
        vector<int> row(n,0);
        vector<int> column(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]==0){
                    row[i]=1;
                    column[j]=1;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row[i]==1||column[j]==1) v[i][j]=0;
            }
        }
    }

int main() {
    vector<vector<int>> v = {{1,1,0},{0,1,1},{1,1,1}};
    setZeroes(v);
}

