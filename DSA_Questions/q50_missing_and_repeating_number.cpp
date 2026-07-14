#include<bits/stdc++.h>
using namespace std; 

//brute force approach

    vector<long long> findTwoElement_brute(vector<int>& arr) {
        int n = arr.size();
        unordered_map <long long, int > hash; 

        long long rep = -1, miss = -1;
        
        for(int i=0;i<n;i++){
            hash[arr[i]]++; 
        }
        for(int i=1;i<=n;i++){
            if(hash[i]==2) rep = i;
            if(hash[i]==0) miss = i;
        }
        return {rep,miss};
    }
    // time complexity O(n) and space complexity O(n)
   
    
    //optimal approach

        vector<long long> findTwoElement_optimal(vector<int>& arr) {
        int n = arr.size();
        unordered_map <long long, int > hash; 

        long long rep = -1, miss = -1;
        long long sum_real = 1LL*n*(n+1)/2;
        long long sum_arr = 0;
        long long sqsum_real = 1LL*n*(n+1)*(2*n+1)/6;
        long long sqsum_arr = 0;
        
        for(int i=0;i<n;i++){
            sum_arr += arr[i];
            sqsum_arr += 1LL*arr[i]*arr[i];
        }
        int x = sum_arr - sum_real;
        int y = sqsum_arr - sqsum_real;
        int z = y/x;
        rep = (z+x)/2;
        miss = rep - x;
        
        return {rep,miss};
    }

    // time complexity O(n) and space complexity O(1)

int main(){
    vector <int> nums = {0,0,1,1,2,3,3,4,4,5,5};

    vector<long long> ans = findTwoElement_brute(nums);
    cout << "Repeating number: " << ans[0] << endl;
    cout << "Missing number: " << ans[1] << endl;
}