#include <bits/stdc++.h>
using namespace std;

string rotate(string s, int n){
        char x = s[0];

        for(int i = 0; i < s.size()-1; i++){
            s[i] = s[i+1];
        }
        s[n-1] = x;
        return s;
    }

    bool rotateString(string s, string goal) {
        int n = s.size();
        for(int i = 0; i < n; i++){
            s = rotate(s,n);
            if(s == goal) return true;
        }
        return false;
    }
    // time complexity: O(n^2) and space complexity: O(1)

int main() {
    bool result = rotateString("abcde", "cdeab");
    cout << "The strings are rotations of each other: " << (result ? "true" : "false") << endl;
    return 0;
}