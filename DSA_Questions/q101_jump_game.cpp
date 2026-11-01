#include<bits/stdc++.h>
using namespace std;

bool canJump(vector<int>& nums) {
        int maxi = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(i > maxi) return false;
            if(i+nums[i] > maxi) maxi = i+nums[i];
            if(maxi >= nums.size()-1) return true;
        }
        return true;
}
// Time Complexity: O(n) and space Complexity: O(1)