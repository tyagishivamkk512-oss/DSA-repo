#include<bits/stdc++.h>
using namespace std;        
// return elements that appears more than n/3

        vector<int> majorityElement(vector<int>& nums) {
        unordered_map <int,int> hash;
        vector <int > v;
        int n =nums.size();
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        for(auto it : hash){
            if(it.second >n/3) v.emplace_back(it.first);
        }
        return v;
    }

int main(){
    vector <int> nums = {1,1,2,2,3,1,1};
    majorityElement(nums);
}