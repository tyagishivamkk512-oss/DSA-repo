#include <bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s) {
        int n = s.size();
        int count = 0;
        string v = "";
        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                count++;
                if(count > 1){
                    v += s[i];
                }
            }
            if(s[i] == ')'){
                count--;
                if(count > 0){
                    v += s[i];
                }
            }
        }
        return v;
    }
    // time complexity: O(n) and space complexity: O(n)

int main() {
    string s = "(()())(())";
    string result = removeOuterParentheses(s);
    cout << "The string after removing the outermost parentheses is: " << result << endl;
    return 0;
}