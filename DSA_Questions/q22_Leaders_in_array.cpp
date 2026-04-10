#include<bits/stdc++.h>
using namespace std;
    vector<int> leaders(vector<int>& arr) {
        vector <int> v;
        int n=arr.size();
        int max = arr[n-1];
        for(int i=n-1;i>=0;i--){
            if(max<=arr[i]){
                v.emplace_back(arr[i]);
                max = arr[i];
            }
        }
        int m =v.size();
        for(int i=0;i<m/2;i++){
            int temp = v[i];
            v[i] = v[m-i-1];
            v[m-i-1] = temp;
        }
        return v;
    }

int main(){
    vector <int> nums = {7,1,5,3,6,4};
    leaders(nums);
}
