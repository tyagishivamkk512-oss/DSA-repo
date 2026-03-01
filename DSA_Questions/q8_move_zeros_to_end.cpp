#include<bits/stdc++.h>
using namespace std;
    void moveZeroes(vector<int>& nums) {
       int i=0,count =0;
       for(int j = 0;j<nums.size();j++){
        if(nums[j]!=0){
            nums[i]=nums[j];
            i++;
        }
        if(nums[j]==0){
            count++;
        }
       }
       int j = 1;
       int k = nums.size()-1;
       while(j<=count){
        nums[k]=0;
        j++;
        k--;
       }

    }
int main(){
    vector <int> nums = {1,2,0,6,0,0,0,3,8,9,0,13,0};
    moveZeroes(nums);
}
/*class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for(int j = 0; j < nums.size(); j++){
            if(nums[j] != 0){
                nums[i] = nums[j];
                i++;
            }
        }
        while(i < nums.size()) nums[i++] = 0;
    }
};*/
