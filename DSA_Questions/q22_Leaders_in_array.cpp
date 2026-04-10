#include<bits/stdc++.h>
using namespace std;
    vector<int> leaders(vector<int>& arr) {
        vector <int> v;
        int n=arr.size();
        for(int i=0;i<n;i++){
            bool a =true;
            for(int j=i+1;j<n;j++){
                if(arr[i]<arr[j]){
                    a = false;
                    break;
                }
            }
            if(a){
                v.push_back(arr[i]);
            }
        }
        return v;
    }

int main(){
    vector <int> nums = {7,1,5,3,6,4};
    leaders(nums);
}
