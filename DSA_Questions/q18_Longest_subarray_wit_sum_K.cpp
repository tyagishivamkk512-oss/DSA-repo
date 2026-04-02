#include<bits/stdc++.h>
using namespace std;
int longestsubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int sum=0;
        int len = 0;
        for(int i=0;i<n;i++){
            sum = 0;
            for(int j=i;j<n;j++){
                sum+= nums[j];
                if(sum ==k){
                    len = max(len,(j-i+1));
                }
            }
        }
        return len;
        
}

int main(){
    int k = 3;
    vector <int> nums = {3,2,1,5,4};
    cout << longestsubarray(nums,k);
}