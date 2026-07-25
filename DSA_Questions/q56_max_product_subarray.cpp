#include<bits/stdc++.h>
using namespace std;      
    
    //brute force approach
    int max_product = INT_MIN;
    int maxProduct_brute(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
                int product = 1;
                for(int k = i; k < nums.size(); k++){
                    product *= nums[k];
                }
                max_product = max(max_product, product);
        }
        return max_product;
    }

    // time complexity: O(n^2), space complexity: O(1)
    
    // optimal approach
    int maxProduct_optimal(vector<int>& nums) {
        int ans = INT_MIN;
        int pre = 1, suf = 1;
        int n = nums.size();
        for(int i = 0;i < n;i++){
            if(pre == 0) pre = 1;
            if(suf == 0) suf = 1;
            pre *= nums[i];
            suf *= nums[n -1 -i];
            ans = max(ans,max(pre,suf));
        }
        return ans;
    }

    // time complexity: O(n), space complexity: O(1)


int main(){
    vector<int> nums = {3, 6, 7, 11};
    cout << maxProduct_brute(nums) << endl;
    cout << maxProduct_optimal(nums) << endl;
}