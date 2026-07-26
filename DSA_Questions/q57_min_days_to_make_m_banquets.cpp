#include<bits/stdc++.h>
using namespace std;      
    
    //optimal approach

    int minDays(vector<int>& nums, int m, int k) {
        int count1 = 0, count2 = 0;
        int ans = -1;
        int n = nums.size();
        int low = 1, high = *max_element(nums.begin(),nums.end());
        if((long long)m*k > n) return -1;
        else if((long long)m*k == n) return high;
        else{
            while(low<=high){
            int mid = low + (high-low)/2;
            for(int i =0;i<n;i++){
                if(nums[i] <= mid){
                    count1++;
                    if(count1==k){
                        count2++;
                        count1 = 0;
                    }
                }
                else{
                    count1 = 0;
                }

            }
            if(count2 >= m){
                ans = mid;
                high = mid-1;
                count1 = 0;
                count2 = 0;
            }
            else low = mid+1;
            count1 = 0;
            count2 = 0;
            }
        }
        return ans;
    }

    // time complexity: O(nlog(max_element)) and space complexity: O(1)

int main(){
    vector<int> nums = {3, 6, 7, 11};
    int m = 2, k = 2;
    cout << minDays(nums, m, k) << endl;
}