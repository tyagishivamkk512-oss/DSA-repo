#include <bits/stdc++.h>
using namespace std;

int maxDepth(string s) {
        int count = 0, max = 0;
        for(int i = 0; i< s.size();i++){
            if(s[i] == '('){
                count++;
                if(count > max) max = count;
            }
            if(s[i] == ')') count--;
        }
        return max;
    }
    // time complexity: O(n) and space complexity: O(1)

int main() {
    string s = "(1+(2*3)+((8)/4))+1";
    int result = maxDepth(s);
}