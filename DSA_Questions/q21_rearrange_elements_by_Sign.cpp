#include<bits/stdc++.h>
using namespace std;
    vector <int> rearrangeArray(vector<int>& nums) {
    int i =0,j=0;
    int n = nums.size();
    vector <int> v;
    while(i<n && j<n){
        while(nums[i]<0 && i<n){
            i++;
        }
        if(i<n){
            v.emplace_back(nums[i]);
        }
        while(nums[j]>0&&j<n){
            j++;
        }
        if(j<n){
            v.emplace_back(nums[j]);
        }
    }
    return v;
}

int main(){
    vector <int> nums = {3,1,-2,-5,2,-4};
    rearrangeArray(nums);
}
