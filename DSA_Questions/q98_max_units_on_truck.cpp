#include <bits/stdc++.h>
using namespace std;    

int maximumUnits(vector<vector<int>>& v, int size) {
        sort(v.begin(),v.end(),[](vector<int>&a , vector<int>&b){
            return a[1]>b[1];
        });
        int i = 0,ans = 0;
        while(i < v.size() && size>0){
            if(size < v[i][0]){
                ans += (size*v[i][1]);
                size = 0;
            }
            else{
                ans += (v[i][1]*v[i][0]);
                size -= v[i][0];
                i++;
            }
        }
        return ans;
    }
// Time Complexity: O(nlogn) and space Complexity: O(1)