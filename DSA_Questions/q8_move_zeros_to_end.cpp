#include<bits/stdc++.h>
using namespace std;
    void moveZeroes(vector<int>& nums) {
       int i=0;
       while(i<nums.size()){
        if(nums[i]==0){
            nums.erase(nums.begin()+i);
            nums.emplace_back(0);
        }
        else i++;
       }
    }
int main(){
    vector <int> nums = {1,2,0,6,0,0,0,3,8,9,0,13,0};
    moveZeroes(nums);
}
