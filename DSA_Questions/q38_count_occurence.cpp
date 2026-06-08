#include<bits/stdc++.h>
using namespace std;        

    int countFreq(vector<int>& arr, int target) {
    int first = 0, last = 0;
    
    first = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
    if(first == arr.size() || arr[first] != target) return 0;
    
    last = upper_bound(arr.begin(), arr.end(), target) - arr.begin();
    
    return last - first;
    
    }

int main(){
    vector <int> nums = {0,1,2,3,5,6,9,11,17,19};
    countFreq(nums,9);
}