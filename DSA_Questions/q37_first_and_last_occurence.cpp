#include<bits/stdc++.h>
using namespace std;        

vector<int> searchRange(vector<int>& nums, int target) {
        int low =  0, high = nums.size() - 1;
        int first = -1, last = -1;

        first = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(first == nums.size() || nums[first] != target){
            return {-1,-1};
        }
        
        last = upper_bound(nums.begin(),nums.end(),target)-nums.begin() - 1;
        
    return {first, last};
    }

int main(){
    vector <int> nums = {0,1,2,3,5,6,9,11,17,19};
    searchRange(nums,9);
}