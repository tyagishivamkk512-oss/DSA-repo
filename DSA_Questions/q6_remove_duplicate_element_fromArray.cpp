#include <bits/stdc++.h>
using namespace std;
    int removeDuplicates(vector<int>& nums) {
        int i =0;
        while(i<nums.size()-1){
            if(nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i);
            }
            else i++;
        }
    return nums.size();
    }


int main(){
    vector <int> arr = {1,1,2,3,3,3,4,4};

    cout<<removeDuplicates(arr);
}

//or just put every element in the set becsuse set only stores unique element


/*class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =0;
        for(int j=1;j<nums.size();j++){
        if(nums[j]!=nums[i]){
        nums[i+1]=nums[j];
        i++;
        }
        }
        return i+1;
    }
};*/