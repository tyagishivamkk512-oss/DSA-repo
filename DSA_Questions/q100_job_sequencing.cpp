#include<bits/stdc++.h>
using namespace std;

// brute force approach

    vector<int> jobSequencing_brute(vector<int> &deadline, vector<int> &profit) {
        vector<pair<int,int>> p;
        int n = deadline.size();
        int maxi = 0, pro = 0;
        
        for(int i = 0; i < n; i++){
            p.push_back({profit[i], deadline[i]});
        }
        sort(p.begin(), p.end(), greater<pair<int, int>>());
        for(int i = 0; i < n; i++){
            profit[i] = p[i].first;
            deadline[i] = p[i].second;
        }
        
        int maxDeadline = *max_element(deadline.begin(), deadline.end());
        maxDeadline = min(maxDeadline, n);

        vector<int> v(maxDeadline + 1, 0);
        
        for(int i = 0; i < n; i++){
            int j = deadline[i];
            while(j>=0 && v[j] == 1){
                j--;
            }
            if(j > 0){
                v[j] = 1;
                pro += profit[i];
                maxi++;
            }
        }
        return {maxi, pro};
    }
// Time Complexity: O(nlogn) and space Complexity: O(n)

// optimal approach
