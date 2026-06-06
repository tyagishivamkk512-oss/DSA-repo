#include<bits/stdc++.h>
using namespace std;        
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> v1 = {1};
        vector<int> v2;
        ans.emplace_back(v1);

        if(numRows == 1) return ans;

        else{
            for(int i = 1; i < numRows; i++){
                v2.emplace_back(1);
                for(int j = 1; j < i; j++){
                    v2.emplace_back(v1[j] + v1[j-1]);
                }
                v2.emplace_back(1);
                ans.emplace_back(v2);
                v1 = v2;
                v2.clear();
            }
        }
        return ans;
    }


int main(){
    int nums = 6;
    generate(nums);
}