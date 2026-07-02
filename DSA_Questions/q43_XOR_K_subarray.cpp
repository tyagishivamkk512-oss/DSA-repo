#include<bits/stdc++.h>
using namespace std;        

int subarraysWithXorK(vector<int>& arr, int k) {
    int n = arr.size();
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int xr = 0;
        for (int j = i; j < n; j++) {
            xr ^= arr[j];
            if (xr == k)
                cnt++;
        }
    }

    return cnt;
    return cnt;
}

int main(){
    vector <int> nums = {0,1,2,3,5,6,9,11,17,19};
    subarraysWithXorK(nums,9);
}