#include<bits/stdc++.h>
using namespace std;
    int singleNumber(vector<int>& nums) {

        unordered_map <int,int> hash;
        for(int i =0;i<nums.size();i++){
            hash[nums[i]]+=1;
        }
        for(auto it : hash){
            if(it.second==1) return it.first;
        }
        return -1;
        }

int main(){
    vector <int> nums = {1,1,3,4,5,6,2,3,6,5,4};
    singleNumber(nums);
}