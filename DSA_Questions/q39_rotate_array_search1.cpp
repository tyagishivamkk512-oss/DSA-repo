#include<bits/stdc++.h>
using namespace std;        

int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        while(low <= high){
            int mid =  low + (high - low)/2;
            if(target == nums[mid]) return mid;

            if(nums[low] <= nums[mid]){
                if(target >= nums[low] && nums[mid] > target){
                    high  = mid - 1;
                }
                else low = mid + 1;
            }
            else{
                if(nums[mid] < target && target <= nums[high]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
        }
        return -1;
    }

int main(){
    vector <int> nums = {0,1,2,3,5,6,9,11,17,19};
    search(nums,9);
}