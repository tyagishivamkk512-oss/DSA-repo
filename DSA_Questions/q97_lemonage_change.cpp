#include <bits/stdc++.h>
using namespace std;

bool lemonadeChange(vector<int>& bills) {
       int five = 0, ten = 0;
       for(int i = 0; i < bills.size(); i++){
            if(bills[i] == 5) five++;
            else if(bills[i] == 10){
                if(five == 0) return false;
                ten++;
                five--;
            }
            else if(bills[i] == 20){
                if(five == 0) return false;
                if(ten == 0){
                    if(five < 3) return false;
                    else five -= 3;
                }
                else{
                    ten--;
                    five--;
                }
            }
       } 
       return true;
    }

// Time Complexity: O(n) and space Complexity: O(1)