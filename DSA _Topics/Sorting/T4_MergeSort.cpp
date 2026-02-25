#include <bits/stdc++.h>
using namespace std;
void merge(int arr[],int low,int mid,int high){
    int left = low, right = mid+1;
    vector <int> v;
    while(left<=mid && right <= high){
        if(arr[left]<=arr[right]){
            v.emplace_back(arr[left]);
            left++;
        }
        else{
            v.emplace_back(arr[right]);
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
}
void mergesort(int arr[],int low,int high){
    if(low >= high) return;
    int mid = (low + high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int low = 0,high =n-1;
    mergesort(arr,low,high);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
// time complexity is O(N log 2 N)
// space complexity is O(N)