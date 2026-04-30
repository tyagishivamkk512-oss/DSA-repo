#include<bits/stdc++.h>
using namespace std;
        vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i = n - 1; i >= 0; i--){
        if(digits[i] != 9){
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }
    digits.insert(digits.begin(), 1);
    
    return digits;
}
    

int main() {
    vector<int> nums = {1,2,5,4,6,7,5,3,4};
    plusOne(nums);
}

