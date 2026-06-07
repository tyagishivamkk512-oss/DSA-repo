#include<bits/stdc++.h>
using namespace std;        

vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first = -1, last = -1;

        for(int i = 0; i < n; i++){
            if(nums[i] == target){
                if(first == -1) first = i;
                last = i;
            }
        }
        
    return {first, last};
    }

int main(){
    vector <int> nums = {0,1,2,3,5,6,9,11,17,19};
    searchRange(nums,9);
}