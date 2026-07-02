#include<bits/stdc++.h>
using namespace std;        
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> ans;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                unordered_set<long long> hash;
                for(int k=j+1;k<n;k++){
                    long long sum = nums[i] + nums[j];
                    sum+=nums[k];
                    long long rem = target - sum;
                    if(hash.find(rem)!=hash.end()){
                        vector<int>temp = {nums[i],nums[j],nums[k],(int)rem};
                        sort(temp.begin(),temp.end());
                        ans.insert(temp);
                    }
                    hash.insert(nums[k]);
                }
            }
        }
        return {ans.begin(),ans.end()};
    }


int main(){
    vector <int> nums = {0,1,2,3,5,6,9,11,17,19};
    fourSum(nums,11);
}