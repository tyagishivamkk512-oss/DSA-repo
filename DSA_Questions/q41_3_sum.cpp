#include<bits/stdc++.h>
using namespace std;        
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> temp;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            unordered_set <int> hash;
            for(int j = i+1; j < n; j++ ){
                int rem = -(nums[i]+nums[j]);
                if(hash.find(rem)!=hash.end()){
                    vector <int> a = {nums[i],nums[j],rem};
                    sort(a.begin(),a.end());
                    temp.insert(a);
                }
                hash.insert(nums[j]);
            }
        }
        return vector<vector<int>>(temp.begin(), temp.end());
    }


int main(){
    vector <int> nums = {0,1,2,3,5,6,9,11,17,19};
    threeSum(nums);
}