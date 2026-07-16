#include<bits/stdc++.h>
using namespace std; 

//brute force approach

int inversionCount_brute(vector<int> &arr) {
        int n = arr.size();
        int count =0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[j]<arr[i]) count++;
            }
        }
        return count;
    }  
// time complexity O(n^2) and space complexity O(1)   
    

    //optimal approach

 int merge(vector<int> &arr,int low,int mid,int high){
    int left = low, right = mid+1;
    vector <int> v;
    int count = 0;
    while(left<=mid && right <= high){
        if(arr[left]<=arr[right]){
            v.emplace_back(arr[left]);
            left++;
        }
        else{
            v.emplace_back(arr[right]);
            count += (mid - left + 1);
            right++;
        }
    }
    while(left<=mid){
        v.emplace_back(arr[left]);
        left++;
    }
    while(right<=high){
        v.emplace_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
            arr[i]=v[i-low];
        }
        return count;
}

int mergesort(vector<int> &arr,int low,int high){
    int count = 0;
    if(low >= high) return 0;
    int mid = (low + high)/2;
    count += mergesort(arr,low,mid);
    count += mergesort(arr,mid+1,high);
    count += merge(arr,low,mid,high);
    
    return count;
}

    int inversionCount_optimal(vector<int> &arr) {
        int n = arr.size();
        return mergesort(arr,0,n-1);
    }

int main(){
    vector<int> arr = {8, 4, 2, 1};
}