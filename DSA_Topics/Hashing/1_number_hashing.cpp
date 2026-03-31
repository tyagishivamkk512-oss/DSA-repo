#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    int hash[7] = {0};
    for(int i=0;i<9;i++){
        hash[arr[i]] +=1;
    }
    int q;
    cout << "i = ";
    cin >>q;
    cout << hash[q];
}