#include<bits/stdc++.h>
using namespace std;
    int maxProfit(vector<int>& prices) {
    int minp = prices[0];
    int profit = 0;

    for(int i = 0; i < prices.size(); i++){
        if(prices[i] < minp){
            minp = prices[i];
        }
        else{
            profit = max(profit, prices[i] - minp);
        }
    }
    return profit;
}

int main(){
    vector <int> nums = {7,1,5,3,6,4};
    maxProfit(nums);
}
