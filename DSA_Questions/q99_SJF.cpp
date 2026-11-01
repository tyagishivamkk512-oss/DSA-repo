#include <bits/stdc++.h>
using namespace std;

    int solve(vector<int>& bt) {
        int wt = 0;
        int sum = 0;
        sort(bt.begin(), bt.end());
        int n = bt.size();
        for(int i = 0; i < n; i++){
            
            wt += sum;
            sum += bt[i];
        }
        return wt/n;
    }
// Time Complexity: O(nlogn) and space Complexity: O(1)