#include<bits/stdc++.h>
using namespace std;
    void nextPermutation(vector<int>& nums) {
        int ind = -1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind = i;
                break;
            }
        }
        if(ind==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=n-1;i>ind;i--){
            if(nums[i]>nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }
        reverse(nums.begin()+ind+1,nums.end());
    }

int main(){
    vector <int> nums = {7,1,5,3,6,4};
    nextPermutation(nums);
}

// we can also use next_permutation() in STL

