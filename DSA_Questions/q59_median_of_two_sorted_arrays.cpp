#include<bits/stdc++.h>
using namespace std;     

    //brute force approach
    vector <int> merge(vector<int>& nums1, vector<int>& nums2){
        int i = 0, j = 0;
        vector <int>v;
        int n = nums1.size(), m = nums2.size();

        while(i<n && j < m){
            if(nums1[i]<=nums2[j]){
                v.emplace_back(nums1[i]);
                i++;
            }
            else{
                v.emplace_back(nums2[j]);
                j++;
            }
        }
        while(i<n){
            v.emplace_back(nums1[i]);
                i++;
        }
         while(j<m){
            v.emplace_back(nums2[j]);
                j++;
        }
        return v;
    }

    double findMedianSortedArrays_brute(vector<int>& nums1, vector<int>&nums2) {
        vector<int> v = merge(nums1, nums2);
        int n = v.size();

        if (n % 2 == 1) {
            return v[n / 2];
        } else {
            return (v[n / 2] + v[n / 2 - 1]) / 2.0;
        }
    }

    //time complexity: O(n+m) and space complexity: O(n+m)

    //optimal approach


int main(){
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    cout << findMedianSortedArrays_brute(nums1, nums2) << endl;
}