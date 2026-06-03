#include<bits/stdc++.h>
using namespace std;        

int upperBound(vector<int>& arr, int target) {
        int ans = arr.size();
        int low = 0;
        int high = arr.size() - 1;
         while(low <= high){
             int mid = low + (high - low)/2;
             
             if(arr[mid] > target){
                 ans = mid;
                 high = mid - 1;
             }
             else {
                 low = mid + 1;
             }
         }
        return ans;
    }

int main(){
    vector <int> nums = {0,1,2,3,5,6,9,11,17,19};
    upperBound(nums,9);
}