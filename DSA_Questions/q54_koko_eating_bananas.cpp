#include<bits/stdc++.h>
using namespace std;      
    
    //optimal approach

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int max = *max_element(piles.begin(),piles.end());
        int ans;
        
        int low = 1, high = max;
        while(low <= high){
            int mid = low + (high - low)/2;
            long long count = 0;
            for(int i = 0; i< n; i++){
                count += ceil((double)piles[i]/mid);
            }
            if(count > h) low = mid + 1;
            else{
                ans = mid;
                high = mid - 1;
            }
        }
        return ans;
    }

    // time complexity O(n log m) and space complexity O(1)

int main(){
    // Example usage
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    cout << minEatingSpeed(piles, h) << endl;
}