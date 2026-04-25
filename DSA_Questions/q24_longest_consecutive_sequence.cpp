#include<bits/stdc++.h>
using namespace std;
bool ls(vector<int>& nums, int k) {
        for(int i =0;i<nums.size();i++){
            if(nums[i]==k) return true;
        } 
        return false;
    }
    int longestConsecutive(vector<int>& nums) {
        int maxum =1;
        for(int i =0;i<nums.size();i++){
            int count =1;
            int x = nums[i];
            while(ls(nums,x+1)==true){
                count++;
                x++;
            }
            maxum = max(maxum,count);
        }
        return maxum;
    }

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    longestConsecutive(nums);
}

