#include<bits/stdc++.h>
using namespace std;        

int Optimal_findKRotation(vector<int>& nums){
    int low = 0, high = nums.size()-1;
    int mini = nums[0];
    int ans = 0;;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(nums[low] <= nums[mid]){
            if(mini > nums[low]){
                mini = nums[low];
                ans = low;
            }
            
            low = mid + 1;
        }
        else{
            if(mini > nums[mid]){
                mini = nums[mid];
                ans = mid;
            }
            high = mid - 1;
        }
    }
    return ans;
    }

int main(){
    vector <int> nums = {0,1,2,3,5,6,9,11,17,19};
    Optimal_findKRotation(nums);
}