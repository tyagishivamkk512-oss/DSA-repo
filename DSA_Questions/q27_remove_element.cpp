#include<bits/stdc++.h>
using namespace std;
     int removeElement(vector<int>& nums, int val) {
        int count = 0,i=0,n=nums.size();
        for(int j=0;j<n;j++){
            if(nums[j]!=val){
                nums[i]=nums[j];
                i++;
                count++;
            }
        }
        return count;
    }
    

int main() {
    vector<int> nums = {1,2,5,4,6,7,5,3,4};
    removeElement(nums,4);
}

