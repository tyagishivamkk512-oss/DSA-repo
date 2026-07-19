#include<bits/stdc++.h>
using namespace std; 

//brute force approach

vector<vector<int>> merge_brute(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());

        int n = nums.size();
        int i =0;
        while(i < n-1){
            if(nums[i][1]>=nums[i+1][0]){
                int a=nums[i][0];
                int b= max(nums[i+1][1],nums[i][1]);
                nums[i]={a,b};
                nums.erase(nums.begin()+i+1);
                n--;
            }
            else i++;
        }
        return nums;
    }
    // time complexity O(nlogn) and space complexity O(1)
   
    
    //optimal approach

vector<vector<int>> merge_optimal(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> ans;

        for(int i=0;i<n;i++){
            if(ans.empty() || ans.back()[1]<nums[i][0]){
                ans.push_back(nums[i]);
            }
            else{
                ans.back()[1] = max(nums[i][1],ans.back()[1]);
            }
        }
        return ans;
    }

    // time complexity O(nlogn) and space complexity O(n)

int main(){
    vector<vector<int>> nums = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> ans = merge_optimal(nums);
}