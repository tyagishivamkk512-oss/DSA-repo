#include<bits/stdc++.h>
using namespace std;
void mark_row(int i,int m,vector<vector<int>>& v){
        for(int k=0;k<m;k++){
            if(v[i][k]!=0) v[i][k]=-1;
        }
    }
    void mark_column(int j,int n,vector<vector<int>>& v){
        for(int k=0;k<n;k++){
            if(v[k][j]!=0) v[k][j]=-1;
        }
    }
    void setZeroes(vector<vector<int>>& v) {
        int n = v.size();
        int m = v[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]==0){
                    mark_row(i,m,v);
                    mark_column(j,n,v);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]==-1) v[i][j]=0;
            }
        }
    }

int main() {
    vector<vector<int>> v = {{1,1,0},{0,1,1},{1,1,1}};
    setZeroes(v);
}

