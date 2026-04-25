#include<bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int count=1,maxi=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) continue;

            if(nums[i]==nums[i-1]+1){
                count++;
                maxi = max(maxi,count); 
            }
            else{
                count = 1;
            }
        }
        return maxi;
    }

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    longestConsecutive(nums);
}

