/*Given an array of positive integers arr[], 
return the second largest element from the array. 
If the second largest element doesn't exist then return -1.*/

#include<bits/stdc++.h>
using namespace std;
    int getSecondLargest(vector<int> &arr) {
        int sec = -1;
        int max = arr[0];
        for(int i =0;i<arr.size();i++){
            if(arr[i]>max){
                sec = max;
                max = arr[i];
            }
            else if(arr[i]>sec && arr[i]<max){
                sec = arr[i];
            }
        }
        return sec;
    }
    
int main(){
    vector <int> v ={12, 35, 1, 10, 34, 1};
    cout << getSecondLargest(v);
} 
// one brute approach could be you can sort the array and 
// tell second largest element by running reverse for loop