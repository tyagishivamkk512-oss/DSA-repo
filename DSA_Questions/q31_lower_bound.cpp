#include<bits/stdc++.h>
using namespace std;        

int lowerBound(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int x = nums.size();
        int n = nums.size();
        
        
        while(low <= high){
            int mid = low + (high-low)/2;

            if(nums[mid] == target){
                x = mid;
                high = mid - 1;
            }

            else if(nums[mid] < target){
                if(mid != n - 1){
                    if(nums[mid + 1] > target ){
                        x = mid +1;
                        return x;
                    }
                    else low = mid +1;
                }
                else return n;
            }

            else{
                if(mid != 0){
                    if(nums[mid - 1] < target){
                        x = mid ;
                        return x;
                    }
                    else high = mid - 1;
                }
                else return mid;
            }
        }
        return x;
        
    }

int main(){
    vector <int> nums = {0,1,2,3,5,6,9,11,17,19};
    lowerBound(nums,9);
}