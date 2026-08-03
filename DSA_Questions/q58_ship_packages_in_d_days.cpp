#include<bits/stdc++.h>
using namespace std;      
    
    //optimal approach

    int check(int mid, vector<int>& nums){
        int x = 0, count = 1;
        int i = 0, n =nums.size();
        while(i < n){
           if(x + nums[i] <= mid){
             x += nums[i];
             i++;
           }
           else{
            x = 0;
            count++;
           }  
        }
        return count;
    }
    int shipWithinDays(vector<int>& nums, int days) {
        int sum = 0;
        int ans = 1;
        for(int i =0;i<nums.size();i++){
            sum+=nums[i];
        }
        int low = *max_element(nums.begin(), nums.end()), high = sum;
        while(low <= high){
            int mid = low + (high - low)/2;
            int count = check(mid,nums);
            if(count > days) low = mid+1;
            else{
                ans = mid;
                high = mid-1;
            }
        }
        return ans;
    }

    // time complexity: O(nlog(sum of elements)) and space complexity: O(1)

int main(){
    vector<int> nums = {3, 6, 7, 11};
    int days = 2;
    cout << shipWithinDays(nums, days) << endl;
}