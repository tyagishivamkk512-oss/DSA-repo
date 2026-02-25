#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter size of array: ";
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    for(int i=0;i<n-1;i++){
        int a=0;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                a=1;
            }
        }
            if(a==0) break;
    }

    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
}