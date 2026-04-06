#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
        int p=0,max=0;
        for(int i =0;i<prices.size()-1;i++){
            for(int j=i+1;j<prices.size();j++){
                p=prices[j]-prices[i];
                if(max<p) max=p;
            }
        }
        if(max<0) max=0;
        return max;
    }

int main(){
    vector <int> nums = {7,1,5,3,6,4};
    maxProfit(nums);
}
