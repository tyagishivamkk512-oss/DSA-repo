#include<bits/stdc++.h>
using namespace std;        

int findFloor(vector<int>& arr, int target) {
    
        int low = 0;
        int high = arr.size()-1;
        int ans = -1;
        
        while(low <= high){
            int mid = low + (high-low)/2;

            if(arr[mid] <= target){
                ans = mid;
                low = mid+1;
            }

            else{
                high = mid-1;
            }
        }
        return ans;
    }

int main(){
    vector <int> nums = {0,1,2,3,5,6,9,11,17,19};
    findFloor(nums,9);
}