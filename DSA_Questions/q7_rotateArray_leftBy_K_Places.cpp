#include <bits/stdc++.h>
using namespace std;
void reverse(vector <int> &v,int start,int end){
    while(start<end){
        swap(v[start],v[end]);
        start++;
        end--;
    }
    return;
}
void rotateleft(vector <int> &v,int k){
    reverse(v,0,k-1);
    reverse(v,k,v.size()-1);
    reverse(v,0,v.size()-1);
    return;
}
int main(){
    vector <int> v = {1,2,3,4,5,6,7,8,9};
    int k;
    cout << "Enter K: ";
    cin >> k;
    rotateleft(v,k);

    for(int i =0;i<v.size();i++){
        cout << v[i] << " ";
    }
}