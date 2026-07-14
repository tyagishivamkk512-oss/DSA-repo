#include<bits/stdc++.h>
using namespace std; 

    // optimal approach
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1, j = n-1, k = m + n-1;
        while(j>=0 && i>=0){
            if(nums1[i] > nums2[j]){
                nums1[k--] = nums1[i--];
            }
            else{
                nums1[k--]=nums2[j--];
            }
        }
        while(i>=0){
            nums1[k--]=nums1[i--];
        }
        while(j>=0){
            nums1[k--]=nums2[j--];
        }
    }

// time complexity O(m+n) and space complexity O(1)


int main(){
     vector<int> nums1 = {1,2,3,0,0,0};
     vector<int> nums2 = {2,5,6};
     int m = 3, n = 3;
     merge(nums1, m, nums2, n);
    
}