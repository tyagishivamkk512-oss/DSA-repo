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
                if(mpp.find(sum)==mpp.end()){
                mpp[sum] =i;
            }
        }
        return maxlen;
        
}
/*find() function in a map always search for key*/

int main(){
    int k = 3;
    vector <int> nums = {3,2,1,5,4};
    cout << longestsubarray(nums,k);
}

/*
int longestsubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int sum=0,i=0,j=0;
        int maxlen = 0;
        while(j<n){
            sum+=nums[j];
            while(sum>k){
                sum-=nums[i];
                i++;
            }
            if(sum==k){
                maxlen=max(j-i+1,maxlen);
            }
            j++;
        }
        return maxlen;
        only for array contining positives and zero 
}*/