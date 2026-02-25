#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int arr[5] = {1,5,4,2,3};
    vector <int> v = {6,9,7,8,5};

    sort(&arr[0],&arr[5]); // [start, end) here we use pointers or address 
    // we can also use sort(arr,arr+5) because cpp treats arr as &arr[0]

    sort(v.begin(), v.end());

    for(auto it : v) cout << it << " ";

    cout << endl;

    for(int i=0;i<5;i++) cout << arr[i] << " ";

    cout <<endl;

    int brr[5] = {4,6,5,2,3};

    sort(brr+2,brr+5);//only sort from brr[2] to brr[4]
    for(int i=0;i<5;i++) cout << brr[i] << " ";
    cout << endl;

    sort(brr,brr+5, greater <int>() ); // for descending sort
    for(int i=0;i<5;i++) cout << brr[i] << " ";
    
    return 0;
}