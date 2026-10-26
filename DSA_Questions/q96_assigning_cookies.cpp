#include <bits/stdc++.h>
using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n = g.size(), m = s.size();
        int i = 0, j = 0;
        int ans = 0;
        while(i<n && j<m){
            if(g[i]<=s[j]){
                ans++;
                i++;
                j++;
            }
            else j++;
        }
        return ans;
    }
    // Time Complexity: O(nlogn + mlogm) and space Complexity: O(1)
    
int main(){

}