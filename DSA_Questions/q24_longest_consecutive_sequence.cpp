#include<bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int>& nums) {
    unordered_set<int> numSet(nums.begin(), nums.end());
    int longest = 0;

    for (auto num : numSet){
        if (numSet.find(num-1)==numSet.end()){
            int current=num;
            int length=1;

            while(numSet.find(current + 1)!=numSet.end()) {
                current++;
                length++;
            }
            longest=max(longest, length);
        }
    }
    return longest;
}

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    longestConsecutive(nums);
}

