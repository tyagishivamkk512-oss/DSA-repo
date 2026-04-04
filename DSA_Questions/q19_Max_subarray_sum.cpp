#include<bits/stdc++.h>
using namespace std;
// return maximum sum of subarray 
    int maxSubArray(vector<int>& nums) {
        long sum=0;
        long maxsum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>maxsum) maxsum = sum;
            
            if(sum<0) sum=0;

        }
        return maxsum;
    }

int main(){
    vector <int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    maxSubArray(nums);
}
