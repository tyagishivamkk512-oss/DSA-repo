#include<bits/stdc++.h>
using namespace std; 

//brute force approach

int floorSqrt_brute(int n) {
        for(int i=0;i<n;i++){
            if(i*i==n) return i;
            else if(i*i>n) return i-1;
        }
        return -1;
    }      
    
    //optimal approach

int floorSqrt_optimal(int n) {
        int low =0, high = n-1;
        int ans = 0;
        if(n==1 || n==0) return n; 
        while(low <= high){
            int mid = (low + high)/2;
            if(mid*mid==n) return mid;
            else if(mid*mid > n) high = mid-1;
            else {
                ans = mid;
                low = mid+1;
            }
        }
        return ans;
    }

int main(){
    cout << floorSqrt_optimal(16) << endl;
}