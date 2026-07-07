#include<bits/stdc++.h>
using namespace std; 

//brute force approach

int findPeakElement_brute(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(i==0 && nums[i]>nums[i+1]) return i;
            else if(i==n-1 && nums[i]>nums[i-1]) return i;
            else if(nums[i]>nums[i+1] && nums[i]>nums[i-1]) return i;
        }
        return -1;
    }      
    
    //optimal approach

int findPeakElement_optimal(vector<int>& nums) {
        int n = nums.size();
        int low = 1, high = n-2;
        if(n==1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]) return mid;
            else if(nums[mid+1] > nums[mid]) low = mid+1;
            else if(nums[mid+1] < nums[mid]) high = mid-1;
        }
        return -1;

    }

int main(){
    vector <int> nums = {0,0,1,1,2,3,3,4,4,5,5};
    cout << findPeakElement_optimal(nums) << endl;
}