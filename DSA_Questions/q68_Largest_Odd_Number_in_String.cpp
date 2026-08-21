#include <bits/stdc++.h>
using namespace std;

    string largestOddNumber(string num) {
        string ans = "";
        int n = num.size();
        int x = -1;

        for(int i = n-1; i>=0;i--){
            if((num[i]-'0')%2 != 0){
                x = i;
                break;
            }
        }
        if(x == -1) return ans;
        for(int i = 0; i<=x;i++){
            ans += num[i];
        }
        return ans;
    }
    // time complexity: O(n) and space complexity: O(1)
    
int main() {
    string result = largestOddNumber("5234");
    cout << "The largest odd number is: " << result << endl;
    return 0;
}