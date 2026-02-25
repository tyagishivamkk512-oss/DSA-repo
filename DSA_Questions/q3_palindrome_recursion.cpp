#include<bits/stdc++.h>
using namespace std;
bool check(int i,int arr[],int n){
    if(i>=n/2) return true;
    if(arr[i]!=arr[n-i-1]) return false;
    return check(i+1,arr,n); 
    
}
int main(){
    int arr[5] = {1,2,3,2,1};
    cout << check(0,arr,5);
} 