#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high){
    int x = arr[low];
    int i = low;
    for(int j=low+1;j<=high;j++){
        if(arr[j]<=x){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[i]);
    return i;
}
void qs(int arr[],int low,int high){
    if(low<high){
        int m = partition(arr,low,high);
        qs(arr,low,m-1);
        qs(arr,m+1,high);
    }
}
int main() {
    int arr[7] = {5,4,6,8,10,22,5};
    qs(arr,0,6);
}

