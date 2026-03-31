#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int , int> p1, pair <int , int> p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.second == p2.second) {
       if(p1.first > p2.first) return true;
       if(p1.first < p2.first) return false;
    }
}
int main(){ 

    pair <int,int> arr[] = {{3,2},{2,1},{4,1}};

    sort(arr,arr+3,comp); 
    // sort according to second element
    // if second is same then 
    // sort according to first but in decreasing order 
    // {{4,1},{2,1},{3,2}}

    cout << arr[0].first <<" "<< arr[0].second << endl;
    cout << arr[1].first <<" "<< arr[1].second << endl;
    cout << arr[2].first <<" "<< arr[2].second << endl;
    
    return 0;
}