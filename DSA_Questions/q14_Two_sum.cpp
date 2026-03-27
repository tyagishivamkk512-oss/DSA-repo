#include<bits/stdc++.h>
using namespace std;
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> v;
        for(int i=0;i<nums.size();i++){
            int a= 0;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    v.emplace_back(i);
                    v.emplace_back(j);
                    a=1;
                    break;
                }  
            }
            if(a==1) break ;
        }
        return v;
    }

int main(){
    vector <int> nums = {2,7,11,15};
    int k = 9;
    twoSum(nums,k);
}