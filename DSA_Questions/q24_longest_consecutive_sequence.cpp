#include<bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int maxi=1;
        unordered_set <int> st;
        for(int i =0;i<n;i++){
            st.insert(nums[i]);
        }
        for(auto it : st){
            if(st.find(it - 1)==st.end()){
                int count = 1;
                int x = it;
                while(st.find(x+1)!=st.end()){
                    count ++;
                    x++;
                }
                maxi = max(count,maxi);
            }
        }
        return maxi;
    }

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    longestConsecutive(nums);
}

