#include<bits/stdc++.h>
using namespace std; 

//brute force approach

int addDigits_brute(int num) {
    while (num >= 10) {  
        int sum = 0;
        while (num > 0) {
            sum += num % 10; 
            num /= 10;  
        }
        num = sum;
    }
    return num;
}     

// time complexity O(log n)^2 and space complexity O(1)
    
    //optimal approach

int addDigits_optimal(int num) {
        if(num ==0) return 0;
        if(num%9==0) return 9;
        else return num % 9;
    }

int main(){

    cout << addDigits_optimal(38) << endl;
}