#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int> v = nums;

        sort(v.begin(),v.end());
        for(int x=0;x<n;x++){
            if(v[x]!=nums[0]) continue;

        bool flag = true;
        for(int i=0;i<n;i++){
            if(nums[i]!=v[(i+x)%n]){
                flag = false;
                break;
            }
        }
        if(flag) return flag;
        }
        return false;
    }
    

int main() {
    vector<int> nums = {1,2,5,4,6,7,5,3,4};
    check(nums);
}

