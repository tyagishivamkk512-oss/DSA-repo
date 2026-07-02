#include<bits/stdc++.h>
using namespace std;        

int findMin(vector<int>& arr){
    int low = 0;
    int high = arr.size()-1;
    int ans = INT_MAX;

    while(low <= high){
        if (arr[low] <= arr[high]) {
            ans = min(ans,arr[low]);
            break;
        }
        int mid = (low+high)/2;
        if (arr[low]<= arr[mid]){
            ans=min(ans,arr[low]);
            low = mid+1;
        }
        else{
            ans= min(ans, arr[mid]);
            high = mid-1;
        }
    }
    return ans;
}

int main(){
    vector <int> nums = {0,1,2,3,5,6,9,11,17,19};
    findMin(nums);
}