#include<bits/stdc++.h>
using namespace std;
int longestsubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int sum=0;
        int maxlen = 0;
        unordered_map <int ,int> mpp;
        for(int i=0;i<n;i++){
                sum+= nums[i];
                if(sum ==k){
                    maxlen = max(maxlen,i+1);
                }
                int rem = sum - k;
                if(mpp.find(rem)!=mpp.end()){
                    int len = i-nums[rem];
                }
                mpp[sum] =i;
            }
        return maxlen;
        
}

int main(){
    int k = 3;
    vector <int> nums = {3,2,1,5,4};
    cout << longestsubarray(nums,k);
}