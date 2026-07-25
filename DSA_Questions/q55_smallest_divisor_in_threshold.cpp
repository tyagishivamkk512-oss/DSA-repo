#include<bits/stdc++.h>
using namespace std;      
    
    //optimal approach

    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int max = *max_element(nums.begin(),nums.end());
        int ans;
        
        int low = 1, high = max;
        while(low <= high){
            int mid = low + (high - low)/2;
            long long count = 0;
            for(int i = 0; i< n; i++){
                count += ceil((double)nums[i]/mid);
            }
            if(count > threshold) low = mid + 1;
            else{
                ans = mid;
                high = mid - 1;
            }
        }
        return ans;
    }

    // time complexity O(n log m) and space complexity O(1)

int main(){
    vector<int> nums = {3, 6, 7, 11};
    int threshold = 8;
    cout << smallestDivisor(nums, threshold) << endl;
}