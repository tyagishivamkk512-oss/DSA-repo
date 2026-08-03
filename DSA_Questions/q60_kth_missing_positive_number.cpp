#include <bits/stdc++.h>
using namespace std;

// brute force approach

    int findKthPositive_brute(vector<int>& arr, int k) {
        int n = arr.size();
        int j = 1, i = 0, count = 0;
        while(i<n){
            if(arr[i]==j){
                i++;
                j++;
            }
            else{
                count++;
                if(count == k) return j;
                j++;
            }
        }
        return arr[n-1]+k-count;
    }

    // time complexity: O(n) and space complexity: O(1)

// optimal approach
    int findKthPositive_optimal(vector<int>& arr, int k) {
        int n = arr.size();
        int low = 0, high = n-1;
        while(low <= high){
            int mid = low + (high - low)/2;
            int miss = arr[mid]- mid - 1;
            if(miss < k) low = mid + 1;
            else high = mid - 1;
        }
       return low + k;
    }

    // time complexity: O(log n) and space complexity: O(1)

    int main(){
        vector<int> arr = {2, 3, 4, 7, 11};
        int k = 5;
        cout << findKthPositive_brute(arr, k) << endl;
        cout << findKthPositive_optimal(arr, k) << endl;
    }