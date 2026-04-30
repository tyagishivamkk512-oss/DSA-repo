#include<bits/stdc++.h>
using namespace std;
     vector<int> plusOne(vector<int>& digits) {
        int i = digits.size()-1;
        if(digits[i]==9){
        while(i>0 && digits[i]==9){
            digits[i]=0;
            i--;
        }
        if(i==0 && digits[i]==9){
            digits[i]=0;
            digits.insert(digits.begin(),1);
        }
        else digits[i]++;
        }
        else{
            digits[i]+=1;
        }
        return digits;
    }
    

int main() {
    vector<int> nums = {1,2,5,4,6,7,5,3,4};
    plusOne(nums);
}

