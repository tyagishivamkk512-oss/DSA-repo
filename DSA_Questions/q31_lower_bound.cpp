#include<bits/stdc++.h>
using namespace std;        

int lowerBound(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    int ans = nums.size();

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] >= target) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

int main(){
    vector <int> nums = {0,1,2,3,5,6,9,11,17,19};
    lowerBound(nums,9);
}