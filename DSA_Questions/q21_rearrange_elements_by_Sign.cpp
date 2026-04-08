#include<bits/stdc++.h>
using namespace std;
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int i=0,j=1;
        vector<int> v(n,0);
        for(int k=0;k<n;k++){
            if(nums[k]<0){
                v[j]=nums[k];
                j+=2;
            }
            else{
                v[i]=nums[k];
                i+=2;
            }
        }
        return v;
    }

int main(){
    vector <int> nums = {3,1,-2,-5,2,-4};
    rearrangeArray(nums);
}
